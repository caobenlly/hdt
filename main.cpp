#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Lop;
class Nguoi
{
    protected:
    char Hoten[20];
    char Ngaysinh[20];
    char Quequan[20];
    public:
        void nhap();
        void xuat();

};

class Sinhvien: public Nguoi
{
    char Masv[20];
    char Nganh[20];
    int Khoahoc;
    public:
        void nhap();
        void xuat();
    friend class Lop;
    friend int tim(Lop k);
    friend void sapxep(Lop k);
};

class Lop
{
   char Malop[20];
    char Tenlop[20];
    char Ngaymo[20];
    Sinhvien *x;
    int n;
    char Giaovien[20];
     public:
        void nhap();
        void xuat();
      friend int tim(Lop k);
      friend void sapxep(Lop k);
};

void Nguoi::nhap()
{
    cout<<"Hoten: "<<endl;fflush(stdin);gets(Hoten);
 cout<<"ngay sinh: "<<endl;fflush(stdin);gets(Ngaysinh);
 cout<<"que quan "<<endl; fflush(stdin);gets(Quequan);
}


void Nguoi::xuat()
{
    cout<<"hoten: "<<Hoten<<endl;
 cout<<"ngaysinh: "<<Ngaysinh<<endl;
 cout<<"quequan "<<Quequan<<endl;
}

void Sinhvien::nhap()
{
    cout<<"Masv: "<<endl;fflush(stdin);gets(Masv);
 cout<<"nganh: "<<endl;fflush(stdin);gets(Nganh);
 cout<<"khoa hoc "<<endl; cin>>Khoahoc;
}


void Sinhvien::xuat()
{
    cout<<"masv: "<<Masv<<endl;
 cout<<"nganh: "<<Nganh<<endl;
 cout<<"khoa hoc "<<Khoahoc<<endl;
}

void Lop::nhap()
{
    cout<<"Malop: "<<endl;fflush(stdin);gets(Malop);
 cout<<"tenlop: "<<endl;fflush(stdin);gets(Tenlop);
 cout<<"ngaY mo "<<endl;fflush(stdin);gets(Ngaymo);
 cout<<"nhap so sv"<<endl;cin>>n;
 x=new Sinhvien[n];
 for(int i=0;i<n;i++)
 {
     x[i].nhap();
 }
 cout<<"giao vien "<<endl;fflush(stdin);gets(Giaovien);
}


void Lop::xuat()
{
    cout<<"Malop: "<<Malop<<endl;
 cout<<"tenlop: "<<Tenlop<<endl;
 cout<<"ngaY mo "<<Ngaymo<<endl;

 for(int i=0;i<n;i++)
 {
     x[i].xuat();
 }
 cout<<"giaovien "<<Ngaymo<<endl;
}

int tim(Lop k)
{
    int dem=0;
    for(int i=0;i<k.n;i++)
        if(k.x[i].Khoahoc==11)
    {
        dem++;
    }
    return dem;
}

void sapxep(Lop k)
{
    for(int i=0; i<k.n; i++)

for(int j = i+1; j<k.n; j++)

if(k.x[i].Khoahoc > k.x[j].Khoahoc)

swap(k.x[i], k.x[j]);
}
int main()
{
    Lop k;
    k.nhap();
    cout<<"xuat thong tin"<<endl;
    k.xuat();
    cout<<"so khoa hoc 11"<<tim(k)<<endl;
    sapxep(k);
        k.xuat();
    return 0;
}
