#include<stdio.h>
#include<stdlib.h>

struct dlist{
	struct dlist *prev;
    int data;
	struct dlist *next;
}*start=NULL;
typedef struct dlist node;

void create(){
	node *temp,*temp1;
	temp=(node*)malloc(sizeof(node));
	printf("Enter value for node:");
	scanf("%d",&temp->data);
	if(start==NULL){
		temp->prev=NULL;
		temp->next=NULL;
		start=temp;
	}
	else{
		temp1=start;
		temp->next=NULL;
		while(temp1->next!=NULL){
			temp1=temp1->next;
		}
		temp1->next=temp;
		temp->prev=temp1;
//		temp->next=start;
	}
}
void display(){
	node *temp;
	temp=start;
	if(start==NULL){
		printf("Empty!!\n");
	}
	else {
		while(temp!=NULL){
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}
void nfree(){
	node *temp;
	temp=start;
	while(start!=NULL){
		temp=start;
		start=start->next;
		free(temp);
	}
	printf("Before exiting delete all memories!!\n");
}
int main(){
	int choice;
	while(1){
		printf("1=create\n2=display\n3=exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		if(choice==1){
			create();
		}
		else if(choice==2){
			display();
		}
		else if(choice==3){
			nfree();
		}
		else{
			printf("Invalide choice\n");
		}
	}
	return 143;
}
