#include <stdio.h>

struct emp
{
  int id;
  char name[51];
  char surname[51];
  float salary;
};

int main()
{
  struct emp e[51];
  int n=0,i,id,found=0;
  char c;


  while(2)
  {
      

       printf("\n-----Employee Managmenent-----\n");
       printf("1.Add Data\n");
       printf("2.Show Data\n");
       printf("3.Modify Data\n");
       printf("4.Delete Data\n");
       printf("5.exit\n");
       printf("Enter your choice:");
       scanf(" %c",&c);
      
       if(c!='1' && c!='2' && c!='3' && c!='4' && c!='5')
       {
           printf("Invalid choice (choose only 1 to 5)\n");
           continue;
       }
       
      
                                
       switch(c)
       {        
         // add data ...............

                 case '1': printf("Enter a id : ");
                         scanf("%d",&e[n].id);
                        
                         printf("Enter a name: ");
                         scanf("%s",e[n].name);
                         
                         printf("Enter a surname: ");
                         scanf("%s",e[n].surname);
                         
                         printf("Enter a salary: ");
                         scanf("%f",&e[n].salary);
                    n++;
                         printf("---done---");
                  break;             
                      
      // show data...............

                case '2': if(n==0)
                        {
                             printf("-Employee data is unavailable-");
                        }
                        else
                        { 
                           printf("\n----------------------------------\n");
                           printf("Id | Name | Surname | Salary\n");
                           printf("-------------------------------------\n");
                           for(i=0;i<n;i++)
                           {
                              
                              printf("%d  %s  %s  %.2f\n",e[i].id, e[i].name, e[i].surname, e[i].salary); 
                              printf("------------------------------------\n");
                           }  
                        }
                        break; 

     // modify data................
                
                case '3': if(n==0)
                          {
                             printf("No employee data available\n");
                             break;
                          }
                                  printf("\n-----------------------\n");
                                  printf("Id | Name | Surname\n");
                                  printf("------------------------\n");
                                  for(i=0;i<n;i++)
                                 {
                                        printf("%d  %s  %s\n",e[i].id, e[i].name, e[i].surname );
                                        printf("------------------------\n");
                         
                                 }
                          

                        printf("Enter a id: ");
                        scanf("%d",&id);
                        

                        for(i=0;i<n;i++)
                        {
                             if(e[i].id==id)
                             {
                                 printf("Enter new name:");
                                 scanf("%s",e[i].name);
                                 printf("Enter new surname:");
                                 scanf("%s",e[i].surname);
                                 printf("Enter new salary:");
                                 scanf("%f",&e[i].salary);
                                 found=1;
                                    printf("--sucessfully upadte emp--");
                               break;
                              }
                        }
                                 if(!found)
                                       printf("Employee not found");
                                 break;
                             
        // delete data................                           

                case '4': if(n==0)
                          {
                              printf("Employee data is unavailable");
                              break;

                          }
                                 printf("-----------------------\n");
                                 printf("Id | Name | surname\n");
                                 printf("-----------------------\n");

                                 for(i=0;i<n;i++)
                                 {
                                      printf("%d  %s  %s\n",e[i].id, e[i].name, e[i].surname);
                                      printf("-------------------------\n");
                                 }
                          

                          printf("Enter a id: ");
                          scanf("%d",&id);
                     
                          for(i=0;i<n;i++)
                          {
                               if(e[i].id==id)
                               {
                                  e[i]=e[n-1];
                                  n--;
                                  found=1;
                                  printf("--sucessfully deleted--");
                                  break;
                               }
                                                                
                          }
                              if(!found)
                                   printf("Employee not found");
                             break;
              
                case '5': 
                             printf("exit");
                             return 0;
          
                                    
                        
                           
         }  
                   
   }
   return 0;
}

