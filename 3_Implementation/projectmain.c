#include "inc\header.h"

int main()
{

    int choice;
    do
    {
        
        /* displaying main menu and entering choice */
        main_menu();
        scanf("%d", &choice );
        char edit_name[20];
            /* using switch case to continue with the operations */
        switch( choice )
        {
                /* calling add function to add new contact  */

                case 1: /*input values*/
                        inputDet();
                        add(list.ph, list.name, list.add, list.email); 
                        break;

                /* calling edit function to edit changes in the existing database */
                case 2: fflush(stdin);
                        printf("\nEnter the name of contact to edit: ");
                        scanf("%[^\n]",edit_name);
                        
                        fflush(stdin);
                        /*input values*/
                        inputDet();
                        //printf("------%lld \n%s \n%s \n%s ---------\n\n-",list.ph, list.add, list.email, list.name);
                        edit(list.ph, list.name, list.add, list.email, edit_name); 
                        //printf("------%lld \n%s \n%s \n%s ----------\n\n",list.ph, list.add, list.email, list.name);
                        break;

                /* calling search function to search for a contact  */
                case 3: fflush(stdin);
                        printf("\nEnter the name of contact to search: ");
                        scanf("%[^\n]",edit_name);

                        search(edit_name); 
                        break;

                /* calling view function to display all contacts */
                case 4: view(); 
                        break;

                /* calling delete function to delete a contact  */
                case 5: fflush(stdin);
                        printf("\nEnter the name of contact to delete: ");
                        scanf("%[^\n]",edit_name);
                        
                        del(edit_name); 
                        break;

                /* calling exit function to exit from the program */
                case 6: printf("\n..........................THANK YOU..............................\n\n\n");
                        break;

                default: printf("\n=============== Invalid choice entered!! Please try again. ===============\n\n");
        }
    } while (choice != 6);
    
    return 0;
}