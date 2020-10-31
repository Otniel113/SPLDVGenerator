#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

double determinanAwal(int a, int b, int d, int e);
double cariX(int c, int b, int f, int e, double det);
double cariY(int a, int c, int d, int f, double det);

double determinanAwal(int a, int b, int d, int e){
    return a*e-b*d;
}

double cariX(int c, int b, int f, int e, double det){
    int tampung = c*e-b*f;
    return tampung/det;
}

double cariY(int a, int c, int d, int f, double det){
    int tampung = a*f-c*d;
    return tampung/det;
}

int main()
{
    cout << "Selamat datang di SPLDV Generator" << endl;
    cout << "\nPersamaan pertama dengan notasi ax + by = c " << endl;
    int a,b,c;
    cout << "a = ";
    cin  >> a;
    cout << "b = ";
    cin  >> b;
    cout << "c = ";
    cin  >> c;

    cout << "\nPersamaan kedua dengan notasi dx + ey = f " << endl;
    int d,e,f;
    cout << "d = ";
    cin  >> d;
    cout << "e = ";
    cin  >> e;
    cout << "f = ";
    cin  >> f;

    double tampungDet = determinanAwal(a,b,d,e);
    double nilaiX = cariX(c,b,f,e,tampungDet);
    double nilaiY = cariY(a,c,d,f,tampungDet);

    cout << "\nJadi, nilai X = " << setprecision(3) << nilaiX << " dan nilai Y = " << setprecision(3)  <<nilaiY << endl;

    getch();
    return 0;
}
