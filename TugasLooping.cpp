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