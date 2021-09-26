#define NULL 0
#include<malloc.h>
#include<stdio.h>
typedef struct node
{ 
  int data;
  struct node *next;
}NODE;
NODE *root=NULL, *first;

void create(int n)
{
 NODE *p;
 p=(NODE *)malloc(sizeof(NODE));
 p->data=n;
 p->next=NULL;
  if(root==NULL) 
     root=p;
  else
    {
    	first=root;
    	while(first->next!=NULL)
    	   	first=first->next;
    	 
		  
	   first->next=p;	  
		  	
		}    
	
}
void display(NODE *p)
 {
 	while(p!=NULL)
 	  {
 	  	
 	  	printf("%d\t",p->data);
 	  	p=p->next;
	   }
 }
 
 void main()
   {
   	int ch,n;
   while(1)	
    {
    
   printf("\n 1: Create");
   printf("\n 2: Display");
   printf("\n 3 exit");
   printf("\n Enter Ur Choice:  ");
   scanf("%d",&ch);
   switch(ch)
    {
      case 1:	
              printf("\n Enter a number:  ");
              scanf("%d",&n);
              create(n);
			  break;
     case 2: 
	         display(root);
	         break;         
	}
 getch();
  }
  }
 
