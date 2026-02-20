#include<stdio.h>
int main(){
	int a[11];
	int i;
	printf("Enter element one by one:\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int val,pos;
	printf("Enter element to insert:\n");
	scanf("%d",&val);
	printf("Enter position to insert:\n");
	scanf("%d",&pos);
	for(i=9;i>=pos-1;i--){
		a[i+1]=a[i];
	}
	a[pos-1]=val;
	printf("----Final----\n");
	for(i=0;i<11;i++){
		printf("%d\n",a[i]);
	}
}
