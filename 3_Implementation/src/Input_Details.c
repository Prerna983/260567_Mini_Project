#include "header.h"

void inputDet()
{
        /* editing the name */
        while(1)
        {
            printf("Name: ");
            fflush(stdin);
            scanf("%[^\n]",&list.name);
            if(!isalpha(list.name))
                break;
            else
                printf("......Enter a valid name......\n");
        }

        //if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)

        /* enter phone number */
        fflush(stdin);
        
        while(1)
        {
            printf("Phone: ");
            scanf("%lld",&list.ph);
            if(checkPh(list.ph))
                break;
            else
            {
                printf("......Enter a valid phone number......\n");
                fflush(stdin);
            }
        }

        
        /* enter address */
        fflush(stdin);
        while(1)
        {
            printf("Address(state): ");
            scanf("%[^\n]",&list.add);
            //printf("%s",list.add);
            if(validity(list.add)==0)
            {
                printf(".....Enter a valid state.....\n");
                while(getchar()!='\n');
            }
            else
                break;
        }
        
        /* enter email id */
        fflush(stdin);
        while (1)
        {
            printf("Email address: ");
            scanf("%s",list.email);
            if(isValid(list.email))
                break;
            else
                printf(".....Enter a valid email id.....\n");
            
        }
        printf("\n");
}