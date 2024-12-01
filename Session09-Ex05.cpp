#include<stdio.h>
int main(){
	int arr[100];
	int n = 0;
	int select;
	printf("MENU\n\n");
	printf("1.Nhap so phan tu can nhap va cac phan tu\n");
	printf("2.In ra gia tri cac phan tu dang quan ly\n");
	printf("3.In ra gia tri cac phan tu chan va tinh tong\n");
	printf("4.In ra gia tri lon nhat va nho nhat trong mang\n");
	printf("5.In ra cac phan tu la so nguyen to va tinh tong\n");
	printf("6.Nhap vao 1 so va thong ke trong mang co bao nhieu phan tu do\n");
	printf("7.Them mot phan tu vao vi tri chi dinh\n");
	printf("8.Thoat\n");
	while (select != 8){
		printf("\nLua chon cua ban: ");
		scanf("%d",&select);
		switch (select){
			case 1:{
				printf("Hay nhap so phan tu trong mang: ");
				scanf("%d",&n);
				if (n < 1 ||n > 100){
					printf("So phan tu khong hop le\n");
					n = 0;
				}
				else{
					for(int i = 0;i < n;i++){
						printf("Phan tu thu %d: ",i + 1);
						scanf("%d",&arr[i]);
					}
				}
				break;
			}
			case 2:{
				if (n == 0){
					printf("Mang dang trong\n");
				}
				else{
					printf("Mang: ");
					for(int i = 0;i < n;i++){
						printf("%d ",arr[i]);
					}
				}
				break;
			}
			case 3:{
				if (n == 0){
					printf("Mang dang trong\n");
				}
				else{
					int Tong = 0;
					printf("Cac phan tu la so chan la: ");
					for(int i = 0;i < n;i++){
						if (arr[i] % 2 == 0){
							printf("%d ",arr[i]);
							Tong = Tong += arr[i];
						}
					}
					printf("\nTong cac phan tu la so chan la: %d",Tong);
				}
				break;
			}
			case 4:{
				if (n == 0){
					printf("Mang dang trong\n");
				}
				else{
					int Max = arr[0];
					int Min = arr[0];
					for(int i = 0;i < n;i++){
						if (arr[i] > Max){
							Max = arr[i];
						}
						if (arr[i] < Min){
							Min = arr[i];
						}
					}
					printf("Gia tri lon nhat trong mang la: %d\n",Max);
					printf("Gia tri nho nhat trong mang la: %d\n",Min);
				}
				break;
			}
			case 5:{
				if (n == 0){
					printf("Mang dang trong\n");
				}
				else{
					int Tong = 0;
					int count;
					printf("Cac phan tu la so nguyen to trong mang la: ");
					for(int i = 0;i < n;i++){
						count = 0;
						for(int j = 1;j <= arr[i];j++){
							if (arr[i] % j == 0){
								count++;
							}							
						}
						if (count == 2){
							printf("%d ",arr[i]);
							Tong += arr[i];
						}
					}
					printf("\nTong cac phan tu la so nguyen to la: %d",Tong);
				}
				break;
			}
			case 6:{
				if (n == 0){
					printf("Mang dang trong\n");
				}
				else{
					int number;
					int count = 0;
					printf("Hay nhap so ban muon thong ke: ");
					scanf("%d",&number);
					for(int i = 0;i < n;i++){
						if (arr[i] == number){
							count++;
						}
					}
					printf("So %d xuat hien %d lan trong mang\n", number, count);
				}
				break;
			}
			case 7:{
				int index, value;
				printf("Hay nhap gia tri ban muon them vao mang: ");
				scanf("%d",&value);
				printf("Hay nhap vi tri ban muon them: ");
				scanf("%d",&index);
				if (index < 1 || index > 100){
				    printf("Vi tri khong hop le");
			    }
			    else{
				    if (index > n){
		                arr[n] = value;
	                }
	                else {
		                for (int i = n ;i >= index;i--){
			                arr[i] = arr[i - 1];
			                if (i == index){
				                arr[i - 1] = value;
			                }
		                }	
	                }
			    }
			    n++;
				break;
			}
			case 8:{
				printf("Thoat chuong trinh\n");
				break;
			}
			default:
				printf("Lua chon khong hop le");
		}
	}
	
	return 0;
}
