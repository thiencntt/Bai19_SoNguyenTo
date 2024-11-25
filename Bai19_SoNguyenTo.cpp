// Bai19_SoNguyenTo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "KIEM TRA SO CO PHAI SO NGUYEN TO KHONG!\n";

    int so;
    cout << "Nhap so: "; cin >> so;
    int dem = 0;

    ////

    for (int m = 1; m <= so; m++)
    {
        dem = 0;
        for (int i = 1; i <= m; i++)
        {
            if (m % i == 0)
            {
                dem++;
            }
        }
        if (dem == 2) {
            cout << m << " ";
        }

    }
    /////
    /*
    for (int i = 1; i <= so; i++)
    {
        // neu chia het thi tang dem len 1:  so%i==0
        if (so % i == 0)
        {
            dem++;
        }
    }
    cout << "So dem = " << dem << endl;
    if (dem == 2) {
        cout << "So " << so << " la so nguyen to\n";
    }
    else {
        cout << "So " << so << " KHONG PHAI so nguyen to\n";
    }
    */
    return 0;
}
