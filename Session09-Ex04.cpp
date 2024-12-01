#include<stdio.h>
int main(){
	int arr[100];
	int select;
	int n = 0;
	printf("MENU\n\n");
	printf("1.Nhap vao mang\n");
	printf("2.Hien thi mang\n");
	printf("3.Them phan tu\n");
	printf("4.Sua phan tu\n");
	printf("5.Xoa phan tu\n");
	printf("6.Thoat\n\n");
	while (select != 6){
		printf("\nLua chon cua ban: ");
	    scanf("%d",&select);
		switch (select){
		case 1:{
			printf("\nHay nhap so luong phan tu cua mang: ");
			scanf("%d",&n);
			if (n < 1 || n > 100){
				printf("So phan tu khong hop le");
				n = 0;
				break;
			}
			for (int i = 0;i < n;i++){
				printf("Phan tu thu %d: ",i + 1);
				scanf("%d",&arr[i]);
			}
			break;
		}
		case 2:{
			if (n == 0){
				printf("Mang dang trong.Hay nhap gia tri vao mang truoc\n");
			}
			else{
				printf("\nMang: ");
				for (int i = 0;i < n;i++){
					printf("%d ",arr[i]);
				}
			}
			break;
		}
		case 3:{
			int index, value;
			printf("\nHay nhap gia tri ban muon them vao mang: ");
			scanf("%d",&value);
			printf("\nHay nhap vi tri ban muon them: ");
			scanf("%d",&index);
			if (index < 1 || index > 100){
				printf("Vi tri khong hop le");
			}
			else{
				if (index > n){
		            arr[n] = value;
		            n++;
	            }
	            else {
		            for (int i = n ;i >= index;i--){
			            arr[i] = arr[i - 1];
			            if (i == index){
				            arr[i - 1] = value;
			            }
		            }
					n++;	
	            }
			}
			break;
		}
		case 4:{
			if(n == 0){
				printf("Mang dang trong.Hay nhap gia tri vao mang truoc\n");
			}
			else{
				int index, value;
				printf("\nHay nhap vi tri can sua: ");
	            scanf("%d",&index);
	            if (index > n || index < 1){
		            printf("Vi tri can sua khong hop le");
	            }
	            else{
		            printf("Hay nhap gia tri moi sau khi sua: ");
	                scanf("%d",&value);
	                for (int i = 0;i < n;i++){
	    	            if (i + 1 == index){
	    		            arr[i] = value;
			            }
		            }
		        }
	        }
			break;
		}
		case 5:{
			if (n == 0){
				printf("Mang dang trong.Hay nhap gia tri vao mang truoc\n");
			}
			else{
				int index;
	            printf("\nHay nhap vi tri ban muon xoa: ");
	            scanf("%d",&index);
	            if (index < 1 || index > n){
		            printf("Vi tri can xoa khong hop le");
	            }
	            else{
		            for (int i = index;i < n;i++){
			            arr[i - 1] = arr[i];
		            }
		            n--;
	            }
			}
			break;
		}
		case 6:{
			printf("Thoat chuong trinh");
			break;
		}
		default:
			printf("Lua chon khong hop le");
	    }
	}
	
	return 0;
}
