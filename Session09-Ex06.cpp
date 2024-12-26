#include <stdio.h>
#define MAX 100
int main() {
    int matrix[MAX][MAX], rows, cols;
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap kich co và gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Nhap so dong: ");
            scanf("%d", &rows);
            printf("Nhap so cot: ");
            scanf("%d", &cols);

            printf("Nhap cac phan tu cua mang:\n");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    printf("Phan tu [%d][%d]: ", i, j);
                    scanf("%d", &matrix[i][j]);
                }
            }
        } else if (choice == 2) {
            printf("Ma tran:\n");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    printf("%d ", matrix[i][j]);
                }
                printf("\n");
            }
        } else if (choice == 3) {
            int sum = 0;
            printf("Cac phan tu le: ");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    if (matrix[i][j] % 2 != 0) {
                        printf("%d ", matrix[i][j]);
                        sum += matrix[i][j];
                    }
                }
            }
            printf("\nTong cac phan tu le: %d\n", sum);
        } else if (choice == 4) {
            int product = 1;
            printf("Cac phan tu tran duong bien: ");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                        printf("%d ", matrix[i][j]);
                        product *= matrix[i][j];
                    }
                }
            }
            printf("\nTich cac phan tu tren duong bien: %d\n", product);
        } else if (choice == 5) {
            printf("Cac phan tu tren duong cheo chinh: ");
            for (int i = 0; i < rows && i < cols; i++) {
                printf("%d ", matrix[i][i]);
            }
            printf("\n");
        } else if (choice == 6) {
            printf("Cac phan tu tren duong cheo phu: ");
            for (int i = 0; i < rows && i < cols; i++) {
                printf("%d ", matrix[i][cols - i - 1]);
            }
            printf("\n");
        } else if (choice == 7) {
            int maxSum = -1, maxRow = 0;
            for (int i = 0; i < rows; i++) {
                int rowSum = 0;
                for (int j = 0; j < cols; j++) {
                    rowSum += matrix[i][j];
                }
                if (rowSum > maxSum) {
                    maxSum = rowSum;
                    maxRow = i;
                }
            }
            printf("Dong co tong lon nhat la dong %d voi tong %d:\n", maxRow + 1, maxSum);
            for (int j = 0; j < cols; j++) {
                printf("%d ", matrix[maxRow][j]);
            }
            printf("\n");
        } else if (choice == 8) {
            printf("Thoat chuong trinh\n");
        } else {
            printf("Lua chon khong hop le\n");
        }
    } while (choice != 8);

    return 0;
}

