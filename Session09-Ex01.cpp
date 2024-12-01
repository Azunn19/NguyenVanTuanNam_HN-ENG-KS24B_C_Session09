#include<stdio.h>
int main(){
	int arr[100];
	int currentLength;
	printf("Hay nhap so phan tu muon nhap vao mang: ");
	scanf("%d",&currentLength);
	for (int i = 0;i < currentLength;i++){
		printf("Phan tu thu %d la: ", i + 1);
		scanf("%d",&arr[i]);
	}
	int value, index;
	printf("\nHay nhap phan tu ban muon them vao mang: ");
	scanf("%d",&value);
	printf("\nHay nhap vi tri cua phan tu ban muon them vao: ");
	scanf("%d",&index);
	if (index > currentLength){
		arr[currentLength] = value;
	}
	else {
		for (int i = currentLength ;i >= index;i--){
			arr[i] = arr[i - 1];
			if (i == index){
				arr[i - 1] = value;
			}
		}
		
	}
	printf("Mang sau khi them la: ");
	for(int i = 0;i <= currentLength;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
