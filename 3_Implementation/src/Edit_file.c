#include "header.h"

/* function to edit the existing details from the system */
int edit(long long int ph, char name[20], char add[20], char email[20], char edit_name[20])
{
    //char edit_name[20];
    
    /* clearing the screen */
    //system("cls");
    int edit_done=0,i;

    /* opening two file, a main and a temporary file*/
    fp=fopen("contact.xlsx","r");
    ft=fopen("temp.dat","w");

    fflush(stdin);

    /* displaying the edit menu and asking for input of name to edit changes to it */
    printf("===============================Edit contact===============================\n\n");
    
    /* finding the contact details in the list and writing it to the temporary file */
    while(fread(&list,sizeof(list),1,fp)==1)
    {
        
        if(stricmp(edit_name,list.name)!=0)
        {
            printf("------%lld \n%s \n%s \n%s ----------\n\n",list.ph, list.add, list.email, list.name);
            fwrite(&list,sizeof(list),1,ft);
        }
    }    
     //printf("------%lld \n%s \n%s \n%s ----------",list.ph, list.add, list.email, list.name);
        list.ph=ph;
        
        strcpy(list.add,add);
        strcpy(list.email,email);
        strcpy(list.name,name);
        //fwrite(&list,sizeof(list),1,ft);

    fwrite(&list,sizeof(list),1,ft);

        fclose(fp);
        fclose(ft);

        remove("contact.xlsx");
        rename("temp.dat","contact.xlsx");

    edit_done=1;
    printf("\n................RECORD UPDATED................\n");
    
    return edit_done;
}
