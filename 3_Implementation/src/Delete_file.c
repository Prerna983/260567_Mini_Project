#include "header.h"
#include<string.h>

/* function to delete a contact from the database based on the name of the person */
int del(char edit_name[])
{
    int delete_done=0;

    /* displaying the contents of delete page */
    printf("\n==========================DELETE A CONTACT========================================\n\n");

     /* opening two file, a main and a temporary file*/
    fp=fopen("C:/Users/KIIT/Desktop/260567_Mini_Project/7_Other/data-set/contact.xlsx","r");
    ft=fopen("temp.dat","w");
    
    /* checking for the name in the list to delete it */
    /*while(fread(&list,sizeof(list),1,fp))
        if (stricmp(edit_name,list.name)!=0)
            fwrite(&list,sizeof(list),1,ft);
    
    /* close of opened files */
    /*fclose(fp);
    fclose(ft);
    
    /* finally removing the selected contact */
    /*fp=fopen("C:/Users/KIIT/Desktop/260567_Mini_Project/7_Other/data-set/contact.xlsx","w");
    ft=fopen("temp.dat","r");
    
    while(fread(&list, sizeof(list), 1, ft))
        fwrite(&list, sizeof(list), 1, fp);*/

            while(fread(&list,sizeof(list),1,fp)!=0)

            if (stricmp(edit_name,list.name)!=0)

                fwrite(&list,sizeof(list),1,ft);

        fclose(fp);

        fclose(ft);

        remove("C:/Users/KIIT/Desktop/260567_Mini_Project/7_Other/data-set/contact.xlsx");

        rename("temp.dat","C:/Users/KIIT/Desktop/260567_Mini_Project/7_Other/data-set/contact.xlsx");

    delete_done=1;
    printf("\n\nRecord Deleted Successfully. \n\n");

    return delete_done;
}
