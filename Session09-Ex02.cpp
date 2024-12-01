#include<stdio.h>
int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	int index, value;
	printf("Cho mang: ");
	for (int i = 0;i < 5;i++){
		printf("%d ",arr[i]);
	}
	printf("\nHay nhap vi tri can sua: ");
	scanf("%d",&index);
	if (index > 5 || index < 1){
		printf("Vi tri can sua khong hop le");
	}
	else{
		printf("Hay nhap gia tri moi sau khi sua: ");
	    scanf("%d",&value);
	    for (int i = 0;i < 5;i++){
	    	if (i + 1 == index){
	    		arr[i] = value;
			}
		}
		printf("Mang sua khi sua la: ");
		for (int i = 0;i < 5;i++){
			printf("%d ",arr[i]);
		}
	}
	
	return 0;
}
