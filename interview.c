#include<stdio.h>


void convert(int,int,int[]);


int main(){
	int num,nums[10],nums1[10],i=0,k=0; char binary[10],result[10];
	printf("enter the numbers babe");
	scanf("%d",&num);

	while(num){
		nums[i]=num%10;
		num=num/10;
		i=i+1;
	}
	for(k=0;k<i;k++){
		nums[k]=num[i-k];
	}

	for(i=0;i<k;i++){
		printf("%d",nums[i]);
	}

	return 0;
}


