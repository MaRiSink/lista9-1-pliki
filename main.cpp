#include <fstream>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void zad1()
{
     ofstream file ("zadanie1.txt");
     file << "Hello world";
     file.close();
}

void zad2()
{
     ofstream file ("zadanie2.txt");

     if (file.is_open())
     {
         cout << " Plik zostal otworzony ";
        file << " Plik zostal otworzony ";
     }
     else
     {
         cout << "BLAD:Plik nie zostal otworzony";
     }
     file.close();

}

void zad3()
{
     ofstream file ("zadanie3.txt");
     file << " Cogito ergo sum ";
     file.close();
}

void zad4()
{
    string slowo;
    getline( cin, slowo);

      ofstream file ("zadanie4.txt");
     file << slowo;
     file.close();
}

void zad5()
{

    string imie;
    string nazwisko;
    cin >> imie;
    cin >>nazwisko;

     ofstream file ("zadanie5.txt");
     file << imie << endl;
     file << nazwisko << endl;
       if (file.is_open())
       {
            cout << " Plik zostal otworzony ";
       }

     file.close();
}

void zad6()
{
   ofstream file ("zadanie6.txt");
    if (file.is_open())
       {
            cout << " Plik zostal otworzony ";
       }

   char movement;
   cin >> movement;

   for(;;)
   {
    /*switch(movement)
   {
    cin >> movement;
   case 'w':
   case 's':
   case 'a':
   case 'd':
       continue;
      file << movement;
       break;
   default:
     cout << " wrong ";
    break;*/

     cin >> movement;

    if ( movement == 'w' || movement == 's' || movement == 'a' || movement == 'd')
    {
      file << movement << ' ';
      continue;
    }
    else
    {
        break;
    }

   }


   file.close();
   }



void zad7()
{
   ofstream file ("zadanie7.txt");
    if (file.is_open())
       {
            cout << " Plik zostal otworzony ";
       }

    int s;
    srand(time(NULL));
    rand();


    for (;;)
    {
      int j = rand() % 10;

      if ( j % 2 == 0)
      {
          file << j << ' ';
          s++;
          if (s == 10)
          {
              break;
          }
          else
          {
              continue;
          }
      }
    }

}

void zad8()
{
   ofstream file ("zadanie8.txt");
    if (file.is_open())
       {
            cout << " Plik zostal otworzony ";
       }

    int s;
    srand(time(NULL));
    rand();

    int j;

    for (;;)
    {
      j = rand() % 10;

      if ( j % 2 != 0)
      {
          file << j << endl;
          s++;
          if (s == 100)
          {
              break;
          }
          else
          {
              continue;
          }
      }
    }

}

void zad10()
{
    ofstream file ("zadanie10.csv");
    if (file.is_open())
       {
            cout << " Plik zostal otworzony ";
       }

    int s;
    srand(time(NULL));
    rand();

    for (int i = 1; i < 13; ++i)
    {
        s = rand() % 1001;
        if (i % 4 == 0)
        {
        file << s << endl;
        }
        else
        {
        file << s << ',';
        }

    }

     file.close();

}

void zad11a()
{
    //a
    srand(time(NULL));
    rand();
    ofstream fileA ("zadanie11a.csv");

      if (fileA.is_open())
       {
            cout << " Plik zostal otworzony ";
       }

    for (int i = 1; i <= 16; ++i)
        {
        int a = rand() % 100;
        int b = rand() % 1000;
        fileA << a << "," << b;
        fileA << ";";
        if ( i % 4 == 0)
        {
            fileA << endl;
        }
        }

}

void zad11b()
{
     srand(time(NULL));
    rand();
    ofstream fileB ("zadanie11b.csv");

      if (fileB.is_open())
       {
            cout << " Plik zostal otworzony ";
       }

    for (int i = 1; i <= 16; ++i)
        {
        int a = rand() % 100;
        int b = rand() % 1000;
        fileB << a << ' ' << b;
        fileB << ";";
        if ( i % 4 == 0)
        {
            fileB << endl;
        }
        }
}

void zad11c()
{
     srand(time(NULL));
    rand();
    ofstream fileC ("zadanie11c.csv");

      if (fileC.is_open())
       {
            cout << " Plik zostal otworzony ";
       }

    for (int i = 1; i <= 16; ++i)
        {
        int a = rand() % 100;
        int b = rand() % 1000;
        fileC << a << endl << b;
        fileC << ";";
        if ( i % 4 == 0)
        {
            fileC << endl;
        }
        }
}

void zad12()
{
     ofstream file ("zadanie12.csv");

     int wiersz;
     int kolumna;
     int liczba[3][3] = {};

     for (int i = 0; i < 9; i++)
     {
         cout << "Podaj wiersz: ";
         cin >> wiersz;
         cout << "Podaj kolumne: ";
         cin >> kolumna;

         if (liczba[kolumna][wiersz] == 0 )
         {
           liczba[kolumna][wiersz] = 1;
           file << liczba[kolumna][wiersz] << ';';
         }
         else
         {
             liczba[kolumna][wiersz] = 0;
             file <<  liczba[kolumna][wiersz] << ';';
         }

          if ( i == 2 || i == 5 || i == 8 )
         {
             file << endl;
         }
     }
}

int main()
{
    zad12();
}
