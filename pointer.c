#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Nhap_mang(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu mang thu a[ %d]=",i);
        scanf("%d",&a[i]);
    }


}
void Xuat_mang(int *a,int n)
{  
    for (int i = 0; i < n; i++)
   {
   printf("\nPhan tu mang thu a[%d]=%d",i,a[i]);
// printf("%d",a[i]);
 
   }
  
}
void Them_pt(int *a, int n, int vt, int gt)
{
    realloc(a,(n+1)*sizeof(int));
    
    for(int i=n-1;i>=vt;i--)
    {
        a[i+1]=a[i];
    }
     n++;
    a[vt]=gt;
   
    
    
}
int main()
{   int n;
    do
    { 
        printf("\nNhap so luong phan tu mang : ");
        scanf("%d",&n);
        if(n<=0)
        {
            printf("\nSo vua nhap khong hop le. Vui long nhap lai.");
        }
    } while (n<=0);
    
     int *a=(int*)realloc(0,n*sizeof(int*));
     Nhap_mang(a,n);
     printf("\nCac phan tu mang vua nhap : ");
     Xuat_mang(a,n);
     int vt,x;
     printf("\nNhap vi tri can them :");
     scanf("%d",&vt);
     printf("\nNhap gia tri can them :");
     scanf("%d",&x);
     Them_pt(a,&n,vt,x);
     printf("\nMang sau khi them : ");
     Xuat_mang(a,n);
     free(a);
    getch();
    return 0;

}