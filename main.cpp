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


    for (int i = 0; i > -1; ++i)
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


    for (int i = 0; i > -1; ++i)
    {
      int j = rand() % 10;

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

int main()
{


}
