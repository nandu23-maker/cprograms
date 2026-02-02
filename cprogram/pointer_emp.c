#include <stdio.h>

struct emp
{
   int id;
   char name[50];
   char surname[50];
   float salary;
};
int main()
{
   struct emp e[50];
   struct emp *ptr;
   int n=0,i,j,id,found=0;
   char c;
   
   ptr=&e[0];

   while(1)
   {
         printf("\n-------------Employee Management system-----------------\n");
         printf("1.Add Data\n");
         printf("2.Show Data\n");
         printf("3.Modify Data\n");
         printf("4.Delete Data\n");
         printf("5.Exit\n");
         printf("Enter your choice: ");
         scanf(" %c", &c);
   
       if(c!='1' && c!='2' && c!='3' && c!='4' && c!='5')
       {
                printf("Invalid choice(choose only 1 to 5)\n");
                continue;
       }

            switch(c)
            {
      //add data-------------------------------------------------------------------
                      case'1':printf("Enter a id: ");
                               scanf("%d",&(ptr+n)->id);
                               
                               printf("Enter a name: ");
                               scanf("%s",(ptr+n)->name);
                              
                               printf("Enter a surname: ");
                               scanf("%s",(ptr+n)->surname);
                               
                               printf("Enter a salary: ");
                               scanf("%f",&(ptr+n)->salary);
                            n++;
                              printf("-----Done------");
                          break;
                   
      //Show data-------------------------------------------------------------------
                       case'2':if(n==0)
                                  {
                                    printf("\n------empty-------\n");
                                  }
			       else
                               {
                                   for(i=0;i<n;i++)
                                   {
                                      printf("%d %s %s %.2f\n",(ptr+i)->id, (ptr+i)->name, (ptr+i)->surname, (ptr+i)->salary);
                                   }
                               }
                             break;
      //Modify data------------------------------------------------------------------
                       case'3':if(n==0)
                               {
                                   printf("\n----not data for modify-----\n");
                                  break;
                               }
                               
                              
                                    for(i=0;i<n;i++)
                                    {
                                         printf("%d %s %s\n",(ptr+i)->id, (ptr+i)->name, (ptr+i)->surname);
                                    }
                               
                              printf("Enter a id to modify: ");
                              scanf("%d",&id);
                              
                             for(i=0;i<n;i++)
                            { 
                              if((ptr+i)->id==id)
                              {
                                     printf("Enter a id: ");
                                     scanf("%d",&(ptr+i)->id);
                                 
                                     printf("Enter a name: ");
                                     scanf("%s",(ptr+i)->name);
                                    
                                     printf("Enter a surname: ");
                                     scanf("%s",(ptr+i)->surname);
   
                                     printf("Enter a salary: ");
                                     scanf("%f",&(ptr+i)->salary);
                                 found=1;
                                      printf("\n------sucessfully updated------\n");
                                  break;
                               } 
                             }
                                 if(!found)
                                         printf("\n--------not found------\n");
                                break; 
           // Delete data------------------------------------------------------------------------------------------------
                       case'4':if(n==0)
                               {
                                     printf("\n---------not data for delete-----------\n");
                                     break;
                               }
                                 
                                    for(i=0;i<n;i++)
                                    {
                                         printf("%d %s %s\n",(ptr+i)->id, (ptr+i)->name, (ptr+i)->surname);
                                    }
                             printf("Enter a id to delete: ");
                             scanf("%d",&id);
                       
                           for(i=0;i<n;i++)
                           {
                              if((ptr+i)->id==id)
                              {
                                 while(i<n-1)
                                 {
                                     ptr[i]=ptr[i+1];
                                     i++;
                                 }
                               n--;
                                                                        
                               found=1;
                                 printf("\n-----sucessfully deleted---------\n");
                               break;
                              }
                           }
                               if(!found)
                                        printf("\n-------------not found--------------\n");                                                                                                break;
             //exit----------------------------------------------------------------------------------------------------
                    case'5': printf("exit");
                             return 0;
            } 
                            
    } 
    return 0;
}
