#include <iostream>
using namespace std;

// Variabel global
int angka;
int pilihan;

// Function cek bilangan prima (pakai while)
bool cekPrima(int n)
{
    if (n <= 1)
        return false;

    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

// Function cek bilangan Fibonacci (pakai while)
bool cekFibonacci(int n)
{
    int a = 0, b = 1, c;

    while (a <= n)
    {
        if (a == n)
        {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

// Prosedur input
void inputAngka()
{
    cout << "Masukkan angka: ";
    cin >> angka;
}

// Prosedur output
void outputHasil(bool hasil, string jenis)
{
    if (hasil)
        cout << angka << " adalah bilangan " << jenis << endl;
    else
        cout << angka << " bukan bilangan " << jenis << endl;
}

// Function menu
void tampilMenu()
{
    cout << "\n=== MENU PROGRAM ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
}