#include "header.h"
#include<string.h>

/* function to delete a contact from the database based on the name of the person */
int del(char edit_name[])
{
    int delete_done=0;

    /* displaying the contents of delete page */
    printf("\n==========================DELETE A CONTACT========================================\n\n");

     /* opening two file, a main and a temporary file*/
    fp=fopen("contact.xlsx","r");
    ft=fopen("temp.dat","w");
    
    /* checking for the name in the list to delete it */
    while(fread(&list,sizeof(list),1,fp)!=0)
         if (strcasecmp(edit_name,list.name)!=0)
             fwrite(&list,sizeof(list),1,ft);
    
    /* closing the opened file pointers */
    fclose(fp);
    fclose(ft);
    
    /* Since the data cannot be delete from a file, we write the data whose name does not match with the name present in the file */
    /* Then we rename the new file as the old one */
    remove("contact.xlsx");
    rename("temp.dat","contact.xlsx");

    delete_done=1;
    printf("\n\nRecord Deleted Successfully. \n\n");

    return delete_done;
}
