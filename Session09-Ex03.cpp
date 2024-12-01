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
	int index;
	printf("\nHay nhap vi tri ban muon xoa: ");
	scanf("%d",&index);
	if (index < 1 || index > currentLength){
		printf("Vi tri can xoa khong hop le");
	}
	else{
		for (int i = index;i < currentLength;i++){
			arr[i - 1] = arr[i];
		}
		currentLength--;
		printf("\nMang sau khi sua la: ");
		for (int i = 0;i < currentLength;i++){
			printf("%d ",arr[i]);
		}
	}
	
	return 0;
}
