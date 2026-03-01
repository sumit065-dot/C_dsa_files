#include<stdio.h>
#include<stdlib.h>

struct slist{
	int data;
	struct slist *next;
}*start=NULL;
typedef struct slist node;

void create(){
	node *temp,*temp1;
	temp=(node*)malloc(sizeof(node));
	temp->next=NULL;
	printf("Enter value of new node:");
	scanf("%d",&temp->data);
	if(start==NULL){
		start=temp;
	}
	else{
		temp1=start;
		while(temp1->next!=NULL){
			temp1=temp1->next;
		}temp1->next=temp;
	}
}
void display(){
	node *temp;
	temp=start;
	if(temp==NULL){
		printf("Empty!!");
	}
	else{
		while(temp!=NULL){
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}
void finsert(){
    node *temp;
    temp=(node*)malloc(sizeof(node));
    printf("Enter value for new node:");
    scanf("%d",&temp->data);
    temp->next=start;
    start=temp;
    printf("Inserting at first is sucessfully passed\n");
}
void linsert(){
	node *temp,*temp1;
	temp=(node*)malloc(sizeof(node));
	printf("Enter value for new node:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	temp1=start;
	while(temp1->next!=NULL){
		temp1=temp1->next;
	}temp1->next=temp;
	printf("Inserting at last is sucessfully passed!!\n");
}
void count(){
	node *temp;
	int count=0;
	temp=start;
	while(temp!=NULL){
		temp=temp->next;
		count=count+1;
	}
	printf("no. of list is %d\n",count);
	printf("counting of list is sucessfully passed!!\n");
}
void ninsert(){
	node *temp,*temp1;
	int count=0,pos,i;
	temp=start;
	while(temp!=NULL){
		temp=temp->next;
		count=count+1;
	}
	printf("Enter position to insert:");
	scanf("%d",&pos);
	if(pos<1||pos>count){
		printf("Invalid position!!");
	}
	else{
		temp=(node*)malloc(sizeof(node));
		printf("Enter value for new node:");
		scanf("%d",&temp->data);
		if(pos==1){
			temp->next=start;
			start=temp;
		    printf("Insert is sucessfully passed!!");
		}
		else{
			temp1=start;
			for(i=1;i<pos-1;i++){
				temp1=temp1->next;
			}
			temp->next=temp1->next;
			temp1->next=temp;
		}
		printf("Position insert is sucessfully passed!!");
	}
}
void sum(){
	node *temp;
	temp=start;
	int sum=0;
	while(temp!=NULL){
		sum=sum+temp->data;
		temp=temp->next;
	}
	printf("%d\n",sum);
	printf("Sum of nodes is sucessfully passed!!\n");
}
void fdelete(){
	node *temp;
	temp=start;
	start=temp->next;
	free(temp);
//	printf("Deleting at first element is sucessfully passed!!\n");
}
void ldelete(){
	node *temp,*temp1;
	temp=start;
    while(temp->next->next!=NULL){
		temp=temp->next;
	}
	temp1=temp->next;
	temp->next=NULL;
	free(temp1);
	
	printf("Deleteing at last element is sucessfully passed!!\n");
}
void ndelete(){
	node *temp,*temp1;
	int count=0,pos;
	printf("Enter position to delete:");
	scanf("%d",&pos);
	temp=start;
	while(temp!=NULL){
		count=count+1;
		temp=temp->next;
	}
	if(pos<0||pos>count){
		printf("Invalide position!!\n");
	}
	else{
		temp=start;
		int i;
		for(i=1;i<pos-1;i++){
			temp=temp->next;
		}
		temp1=temp->next;
		temp->next=temp1->next;
		free(temp1);
		printf("Deleting at any position is sucessfully passed!!\n");
	}
}
void nfree(){
	node *temp1;
	temp1=start;
	int i,count=0;
	while(temp1!=NULL)
	{
		count++;
		temp1=temp1->next;	
	}
	for(i=0;i<count;i++)
	{
		fdelete();
	}
	printf("Before exiting free all memories!!\n");
}
void reverse(){
	node *aft,*temp,*prev;
	temp=start;
	aft=NULL;
	prev=NULL;
	while(temp!=NULL){
		aft=temp->next;
		temp->next=prev;
		prev=temp;
		temp=aft;
	}
	start=prev;
	printf("Reversing list is successfully passed!!\n");
}
int main(){
	int choice;
	while(1){
		printf("1->create\n");
		printf("2->display\n");
		printf("3->insert at first\n");
		printf("4->insert at last\n");
		printf("5->count\n");
		printf("6->insert at any position\n");
		printf("7->sum\n8->delete at first\n9->delete at last\n10->delete at any position\n11->reverse list\n");
        printf("12->exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		if(choice==1){
			create();
	    }
	    else if(choice==2){
		    display();
	    }
	    else if(choice==3){
	    	finsert();
		}
		else if(choice==4){
			linsert();
		}
		else if(choice==5){
			count();
		}
	    else if(choice==6){
		    ninsert();
	    }
	    else if(choice==7){
	    	sum();
		}
		else if(choice==8){
			fdelete();
		}
		else if(choice==9){
			ldelete();
		}
	    else if(choice==10){
	        ndelete();
		}
		else if(choice==11){
		    reverse();
		}
		else if(choice==12){
			nfree();
			break;
		//	break;
		}
	    else{
		    printf("wronge choice!!");
	    }
	}
	return 143;
}
