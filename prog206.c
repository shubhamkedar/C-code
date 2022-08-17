#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	
	struct node *next;
};
 
 typedef struct node NODE;
 typedef struct node * PNODE;
 typedef struct node ** PPNODE;
 
 void InsertFirst(PPNODE Head,int no)
 {
	 PNODE newn=NULL;
	 
	 newn=(PNODE)malloc(sizeof(NODE));
	 
	 newn->data=no;
	 newn->next=NULL;
	 
	 if(*Head==NULL)
	 {
		 *Head==newn;
	 }
	 else
	 {
		 newn->next=*Head;
		 *Head=newn;
	 }
 }
 
 void InsertLast(PPNODE Head,int no)
 {
	 PNODE newn=NULL;
	 PNODE temp=*Head;
	 newn=(PNODE)malloc(sizeof(NODE));
	 newn->data=no;
	 newn->next=NULL;
	 
	  if(*Head==NULL)
	 {
		 *Head==newn;
	 }
	 else
	 {
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
			temp->next=newn;
	 }
	 
 }
 
 void Display(PNODE Head)
 {
	 while(Head!=NULL)
	 {
		 printf("%d\t",Head->data);
		 Head=Head->next;
	 }
	 
 }
 int Count(PNODE Head)
 {
	 int iCnt=0;
	  while(Head!=NULL)
	 {
		 iCnt++;
		 Head= Head -> next;
	 }
	 return iCnt;
 }
 
 void DeleteFirst(PPNODE Head)
 {
	 PNODE temp=*Head;
	 if(*Head!=NULL)
	 {
		 *Head=(*Head) ->next;
		 free(temp);
	 }
 }
 
 void DeleteLast(PPNODE Head)
 {
	 if(*Head==NULL)
	 {
		 return;
	 }
	 else if((*Head) -> next == NULL)
	 {
		 free(*Head);
		 *Head = NULL;
	 }
	 else()
	 {
		 
	 }
 }
 
 int main()
 {
	 int iRet=0;
	 PNODE first=NULL;
	 InsertFirst(&first,101);
	 InsertFirst(&first,51);//InsertFirst(50,51)
	 InsertFirst(&first,21);//InsertFirst(50,21)
	 InsertFirst(&first,11);//InsertFirst(50,11)
	 
	 InsertLast(&first,111);
	 
	 Display(first);
	 iRet=Count(first);
	 printf("\n No of ele are:%d\n",iRet);
	 
	 DeleteFirst(&first);
	 
	 Display(first);
	  iRet=Count(first);
	 printf("\n No of ele are:%d\n",iRet);
	 return 0;
 }
 
 /*
 void InsertFirst(PPNODE Head,int no)
 void InsertLast(PPNODE Head,int no)
 void InsertAtPos(PPNODE Head,int no,int pos)
 
 void DeleteFirst(PPNODE Head)
 void DeleteLast(PPNODE Head)
 void DeleteAtPos(PPNODE Head,int pos)
 
 void Display(PNODE Head)
 int  Count(PNODE Head)
 */