#include "header.h"

/* function to display the contacts present in the file */
int view()
{
    /* clearing the screen */
    //system("cls");

    /* variable to check if the contact to be searched is found or not */
    int found=0;

    /* Displaying the table for overall contacts stored */
    printf("\n====================================LIST OF CONTACTS=====================================\n");
    printf("\n\nName     \t\tPhone No\t    Address\t\t  E-mail ID.\n==================================================================================================\n\n");
    
    /* using ascii values of characters to display the contacts in ascending order */
    for(int i=97; i<=122; i=i+1)
    {
        /* opening the file */
        fp=fopen("contact.xlsx","r");
        
        /* Checking if the file is present or not */
        if(fp==NULL)
        {
            printf("Can't open file. Make sure file exits.\n");
            exit(1);
        }
        fflush(stdin);
        
        
        /* checking for the matching of contacts and if found displaying it */
        while(fread(&list,sizeof(list),1,fp))
        {
            if(list.name[0]==i || list.name[0]==i-32)
            {
                printf("%s\t\t %lld\t\t %s\t\t %s\n", list.name, list.ph, list.add, list.email);
                found++;
            }
        }

            
        /* closing the opened file */
        fclose(fp);
    }

    /* if contact not found displaying appropriate message */
    if(found>0)
        {
            printf("\n\n\t..............%d  contacts found!!...............\n",found);
            printf("==============================================================================================\n\n");

        }
    return 1;
}
