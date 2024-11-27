#include<stdio.h>

int main(){
	
	int n[5];
	int a = 0;
	
	for (int i = 0; i < 5; i++) {
		printf("Nhap so nguyen thu nhat %d:", i + 1);
		scanf("%d",&n[i]);
	} 
	for(int i = 0; i < 5; i++){
		if(n[i] % 2 !=0){
			a += n[i]; 
		} 
	} 
	printf("Tong cac so le la: %d\n", a); 
	return 0; 
} 
