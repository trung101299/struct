#include<iostream>
#include<string>
using namespace std;

struct sinhvien
{
    string hoten;
    string mssv;
    float diem;
    int ns;

};
typedef struct sinhvien sinhvien;
struct danhsach 
{
    sinhvien *sv[100];
    int n ;
};
typedef struct danhsach danhsach;
void Nhap_thong_tin_sv(sinhvien &x)
{
    cout<<"\nNhap ho ten sinh vien : ";
    fflush(stdin);
    getline(cin,x.hoten);
    cout<<"\nNhap ma so sinh vien : ";
    fflush(stdin);
    getline(cin,x.mssv);
    cout<<"\nNhap nawm sinh : ";
    cin>>x.ns;
    cout<<"\nNhap diem :";
    cin>>x.diem;
}
void Xuat_thong_tin_sv(sinhvien x)
{
    cout<<"\n Ho va ten : "<<x.hoten;
    cout<<"\n Ma so sinh vien : "<< x.mssv;
    cout<<"\n Nam sinh :"<<x.ns;
    cout<<"\n Diem trung binh :"<<x.diem;
}
void Xuat_dssv(danhsach ds)
{
    for(int i=0; i<ds.n;i++)
    {
        cout<<"\nthong tin sinh vien thu "<<i+1<<" :";
        Xuat_thong_tin_sv(*(ds.sv[i]));
    }
}
void Menu(danhsach &ds)
{
    system("cls");
    while (true)
    {
        cout<<"\n\n\t====================MENU===============\n\n";
        cout<<"\n1.Nhap thong tin sinh vien .";
        cout<<"\n2.Xuat thong tin sinh vien .";
        cout<<"\n3.Them sinh vien vao danh sach .";
        cout<<"\n4.Tim kiem sinh vien dua vao diem.";
        cout<<"\n5.exit";
        int choice;
        cout<<"\nNhap choice:";
        cin>>choice;
        switch (choice)
        {
        case 1:
            sinhvien *a;
            a=new sinhvien;
            cout<<"\nNhap thong tin sinh vien ";
            Nhap_thong_tin_sv(*a);
            ds.sv[ds.n]=a;
            ds.n++;
            break;
        case 2:
            cout<<"\nDanh sach sinh vien ";
            Xuat_dssv(ds);
            system("pause");
            break;
        
        
        default:
            break;
        }
    }
    
}


int main()
{
    danhsach ds;
    Menu(ds);
    for(int i=0; i<ds.n;i++)
    {
        delete ds.sv[i];
    }
    system("pause");
    return 0;
}