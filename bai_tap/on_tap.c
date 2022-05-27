#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void Hoan_vi(int *x, int *y)
{
    int temp = *x;
    *x = *y;

    *y = temp;
}
void Nhap_mang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap gia tri phan tu mang thu a[%d] :", i + 1);
        scanf("%d", &a[i]);
    }
}
void Xuat_mang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nPhan tu cua thu a[%d]=%d", i + 1, a[i]);
    }
}
void Sap_xep(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                Hoan_vi(&a[i], &a[j]);
            }
        }
    }
    Hoan_vi(&a[0], &a[n - 1]);
}
void Tim_max(int a[], int n)
{
    int min = a[0];
    int max = a[0];
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            index = i;
        }
        }
    printf("\nVi tri cua lon nhat la:%d", index + 1);
}
int main()
{
    // int n;
    // do
    // {
    //     printf("\nNhap so luong phan tu :");
    //     scanf("%d", &n);
    //     if (n <= 0)
    //     {
    //         printf("\nSo phan tu vua nhap khong hop le.");
    //     }
    // } while (n <= 0);
    // int *x;
    // x = (int *)malloc(n * sizeof(int));
    // Nhap_mang(x, n);
    // printf("\nDach sach cac phan tu cua mang");
    // Xuat_mang(x, n);
    // Sap_xep(x, n);
    // printf("\nCac phan tu sau khi sap xep");
    // Xuat_mang(x, n);
    // free(x);
    int a[] = {1, 7, 4, 8, 9, 5};
    Tim_max(a, 6);
    getch();
    return 0;
}