#include "header.h"

/* function to search for a contact from the system */
int search(char edit_name[])
{
    /* clear screen */
    //system("cls");

    /* using 'found' variable to check if the contact is present or not */
    int l,found,i;
    int search_done=0;
    char name[20];
    char ch;
    
    /* using do-while loop to let the search begin for atleast once */
    do
    {
        found=0;

        /* displaying the Search contact page */
        printf("\n\n===========================SEARCH FOR A CONTACT\t===========================\n\n");
        
        l=strlen(edit_name);
        
        /* Opening the file in read mode */
        fp=fopen("C:/Users/KIIT/Desktop/260567_Mini_Project/7_Other/data-set/contact.xlsx","r");
        if(fp==NULL)
        {
            printf("Can't open file. Make sure file exits.\n");
            exit(1);
        }

        /* clear screen */
        //system("cls");

        /* Displaying the search result status */
        printf("\n\nSearch result for '%s' \n",edit_name);
        printf("=======================================================================\n");
        
        /* checking if the contact exists */
        while(fread(&list,sizeof(list),1,fp)==1)
        {
            for(i=0; i<=l; i++)
            {
                name[i]=list.name[i];
            }
            
            name[l]='\0';
            
            /* if contact exists, its data is printed */
            if(stricmp(name,edit_name)==0)
            {
                printf("\n..::Name\t: %s\n..::Phone\t: %lld\n..::Address\t: %s\n..::Email\t: %s\n",list.name,list.ph,list.add,list.email);
                found++;
                if (found%4==0)
                {
                    /* asking for continuation */
                    printf("...Press any key to continue...");
                    scanf("%c");
                }
            }
        }
        
        /* if the contact is not found then the 'not found' message is printed */
        if(found==0)
            printf("\n..........No match found!.............");
        
        /* displays how many total match was found for that particular contact */
        else
        {
            search_done=1;
            printf("\n........%d match(s) found!...........",found);
        }

        /* closing the file */
        fclose(fp);

        /* Asking if the user wants to continue and try again */
        printf("\n ..........Try again?...........\n\n\t[1] Yes\t\t[0] No\n\t\t");
        scanf("%d",&ch);

    /* End of do-while loop */
    }while(ch==1);
    return search_done;
}