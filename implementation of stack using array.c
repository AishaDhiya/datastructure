#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
iny main()
{
top=-1;
printf("enter the size of stack");
scanf("%d",&n);
printf("stack operations using array");
printf("\n\t1.push \n\t 2.pop \n\t 3.display \n\t 4.exit");
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
   case  1:
   {push();
   break;
   }

  case 2:
   {  pop();
   break;
   }
   case  3:
   {  display();
   break;
   }
   case  4:
   { printf   ("exit pont");
   break;
   }
   default:
   {printf("please enter a valid choice")}
   }
   {while(choice!=4);
   return0;
   }
      void push()
   {if(top>=n-1)
   {printf("stack is overflow");
   }
   else{printf("enter value to be pushed");
   scanf("%d",&x);
   top++;
   stack[top]=x;
   }
   
     } void pop()
   {if(top<=n-1)
   {printf("stack is underlow");
   }
   else{printf("the popped elements is"%d"'stack[top]););
   
   top--;
   
   }
   }
      void display()
   {if(top>=0)
   {printf("enter elements in stack");
   }
   
   for(i=top;i>=0;i--)
   printf("d",stack[i]);
   printf("press next choice")
   }
   
   else{printf("the stack is empty
   }");
   top++;
   stack[top]=x;
   }
   
   
      
   
   
   
   }
   
   
   
