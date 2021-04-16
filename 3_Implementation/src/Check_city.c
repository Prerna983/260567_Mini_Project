#include "header.h"

/* a character array of strings that stores the name of all the states */
char* states[]={"andhra pradesh","arunachal pradesh","assam","bihar","chandigarh","chattisgarh","goa","gujarat","haryana","himachal pradesh","jammu and kashmir","jharkhand","karnataka","kerala","madhya pradesh","maharashtra","manipur","meghalaya","mizoram","nagaland","orissa","punjab","rajasthan","sikkim","tamil nadu","telangana","tripura","uttar pradesh","west bengal"};

/* function to check if the state entered is coorect */
int validity(char ch[])
{
    /* finding total number of states in the character array (29 here) */
    int len=sizeof(states)/sizeof(states[0]);
    int value=0;
    int l=strlen(ch);
    char nstr[l];
    
    /* loop to convert all the characters into lower case and adding it to the new string */
    for(int i=0;i<=l;i++)
    {
        
        if(ch[i]!=' ')
            nstr[i]=tolower(ch[i]);
        else
            nstr[i]=' ';
    }
    
    /* loop to check that the new string entered is equal with the states mentioned or not */
    for(int i=0;i<len;i++)
    {
        if(strcmp(nstr,states[i])==0)
        {
            return 1;
        }
    }
    return 0;
}
