#include "header.h"

char* states[]={"andhra pradesh","arunachal pradesh","assam","bihar","chandigarh","chattisgarh","goa","gujarat","haryana","himachal pradesh","jammu and kashmir","jharkhand","karnataka","kerala","madhya pradesh","maharashtra","manipur","meghalaya","mizoram","nagaland","orissa","punjab","rajasthan","sikkim","tamil nadu","telangana","tripura","uttar pradesh","west bengal"};
int validity(char ch[])
{
    
    int len=sizeof(states)/sizeof(states[0]);
    int value=0;
    int l=strlen(ch);
    char nstr[l];
    
    for(int i=0;i<=l;i++)
    {
        
        if(ch[i]!=' ')
            nstr[i]=tolower(ch[i]);
        else
            nstr[i]=' ';
    }

    for(int i=0;i<len;i++)
    {
        if(strcmp(nstr,states[i])==0)
        {
            return 1;
        }
    }
    return 0;
}