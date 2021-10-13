#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <stdlib.h>

using namespace std;

int const n = 10;
int jml;

struct  smhs {
    char nama[10];
    int nilai;
};

smhs datamhs[n];

int tukar(int a, int b) {
    smhs temp;
    temp = datamhs[b];
    datamhs[b] = datamhs[a];
    datamhs[a] = temp;
}

int bubbleSort()
{
    for(int i = 1; i < jml; i++)
    {
        for(int j = 0; j < jml-1; j++)
        {
            if(datamhs[j].nilai > datamhs[j+1].nilai)
                tukar(j, j+1);
        }
    }
}
int dataawal()
{
     for (int i = 0; i < jml; i++) {
        cout << setw(5) << (i+1);
        cout << setw(15) << datamhs[i].nama;
        cout << setw(5) << datamhs[i].nilai << endl;
    }
}
int main()
{
    // berikan data ke datamhs....................
    cout << "===PROGRAM BUBBLE SORT===" << endl;

    // tampilkan data awal....................
    jml = 0;
    while(jml<n)
{
        cin.ignore();
        cout << "\n\nmasukkan data index [" << jml << "] : \n";
        cout << "Nama   : "; cin.getline(datamhs[jml].nama, 10);
        cout << "Nilai  : "; cin >> datamhs[jml].nilai;
        jml++;
        cout << "\nTambah data lagi [y/t] : ";
        char lagi = getche ();
        if(strchr("Tt",lagi) != NULL) {
            break;
        }
    }

    // tampilkan data.........................
    system("cls");
    cout << "\n\nData awal : " << endl;
    dataawal();

    // proses pengurutan data.................
    bubbleSort();

    // tampilkan data setelah diurutkan.......
    cout << "\n\nData setelah di (sort) : " << endl;
    dataawal();
    cout << "\n\nSorting Selesai";
    getch();
}
