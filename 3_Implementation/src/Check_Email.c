#include "header.h"

int isValid(char test[])
{
    int     i, x=0;
    char    *pos1, *pos2, *pos3;
    char    *ch;
    char    data[15];

    //puts("Enter email!");
    //scanf("%39s", test);

    while (1) 
    {
        for (i = 0, ch = test; *ch; *ch++) 
        {
            if (*ch == '@') 
            {
                pos1 = ch;  // <-stores last @ address
                i++;
            }
        }
        pos2 = ch;          // <-stores end address ("\0") of test

        /* If there is only one "@" */
        if (i == 1) 
        {

            /* Pos1 - test <-a character must be before "@". Ch - pos1 <-Counts
             * backwards from the end of the string towards "@". A character
             * must be between "@" and "." */
            while (pos1 - test && ch - pos1 > 1) 
            {

                /* From the end of string to "." has to be atleast 2 chars */
                if ((pos2 - ch) > 3 && *ch == '.') 
                {
                    //printf("pos2 - ch is %d and *ch is %c",pos2 - ch, *ch);
                    
                    /* using it to point to the character at p2 (@) and then running it till we get '.' so that we can compare the string domain of email with the right address */
                    pos3=pos1;
                    for ( ch = pos1; *ch; *ch++) 
                    {
                      if (*ch != '.') 
                      {
                        data[x]=(char)*ch;  // <-stores the string next to @
                        x++;
                      }
                      else
                        break;
                    }
                    
                    /* comparing the string with the valid domain of id */
                    if(!strcmp(data,"@gmail") || !strcmp(data,"@mynet") || !strcmp(data,"@rocketnet") || !strcmp(data,"@sky") || !strcmp(data,"@live") || strcmp(data,"@rogers") || strcmp(data,"@yummy") || !strcmp(data,"@yahoo") || !strcmp(data,"@hotmail") || !strcmp(data,"@rediffmail") || !strcmp(data,"@outlook") || !strcmp(data,"@google")) // compares the string with valid email ids
                        return 1;
                }
                ch--;
            }
        }
        
        //puts("Email wrong! Enter again");
        return 0;
    } /* End while */

}
