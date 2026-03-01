#include<stdio.h>

int main(){
	int a[10];
	printf("enter number one by one:\n");
	int i;
	for(i=0;i<10;i++){
	    scanf("%d",&a[i]);
    }
	int max=a[0],min=a[0];
	for(i=1;i<10;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("max value is %d\n",max);
	printf("min value is %d\n",min);
	return 0;
}
