#include "header.h"

/* function to add new details into the existing database of contacts */
int add(long long int ph, char name[20], char add[20], char email[20])
{
    /* clear screen */
    //system("cls");

    int add_done=0;

    list.ph=ph;
    strcpy(list.add,add);
    strcpy(list.email,email);
    strcpy(list.name,name);
    
    /* open the file where the data will be stored */
    fp=fopen("C:/Users/KIIT/Desktop/260567_Mini_Project/7_Other/data-set/contact.xlsx","a");
    if(fp==NULL)
    {
        printf("Can't open file. Make sure file exits.\n");
        exit(1);
    }
    
        fflush(stdin);

         /* displaying the contents of add contents page */
        printf("\n\n===================================ADD NEW CONTACT===================================\n\n");

        printf("\n\n\t...Contact Added Successfully...");
        add_done=1;


        /* writing the details into the file */
        fwrite(&list,sizeof(list),1,fp);
    
    /* closing the file */
    fclose(fp);
    return add_done;
}