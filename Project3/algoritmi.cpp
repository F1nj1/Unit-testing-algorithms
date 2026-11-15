#include "algoritmi.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;

void izvadit_masivu(int mas[], int& n)
{
    cout << "Masivs: ";
    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << " ";
    }
    cout << endl;
}

bool ifmassort(int mas[], int n)
{
    int i =0;
    for(i; i<n-1 && mas[i]<= mas[i+1]; i++);
    if (i == n-1) return true;
    else return false;
    
}

bool equal_array(int mas[], int expected_mas[])
{
    bool equal = true;
    for (int i = 0; i < 10 && equal; i++)
    {
        if (mas[i] != expected_mas[i]) equal = false;
    }
    return equal;
}

///////////////////////////////////////////

void selectsort(int mas[], int n)
{
    int min, buffer, i,j,c = 0,m = 0;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        {
            if (mas[min] > mas[j])
            {
                min = j;
            }
            c++;
        }
        if (min != i)
        {
            buffer = mas[min];
            mas[min] = mas[i];
            mas[i] = buffer;
            m++;
        }
    }
}

void shakersort(int mas[], int n)
{
    int buffer, i = 0, j, c = 0, m = 0;
    for (j = 0; i < n - (1 + j); j++)
    {
        for (; i < n - (1 + j); i++)
        {
            if (mas[i] > mas[i + 1])
            {
                buffer = mas[i];
                mas[i] = mas[i + 1];
                mas[i + 1] = buffer;
                m++;
            }
            c++;
        }
        //////////
        for (; i > j; i--)
        {
            if (mas[i] < mas[i - 1])
            {
                buffer = mas[i];
                mas[i] = mas[i - 1];
                mas[i - 1] = buffer;
                m++;
            }
            c++;
            
        }
    }
}

void shellsort(int mas[], int n)
{
    int buffer, i, j,step = 1, c = 0, m = 0;
    for(; step<=n/2; step*=2)
    {
        //cout << "Step value: " << step << endl;   
    }
    step /= 2;
    cout << endl;
    for ( ; step>=1; step /= 2)
    {
        for ( i = 0; i < n - step && ifmassort(mas, n) == false; i++)
        {
          if (mas[i + step] < mas[i]) 
          {
                buffer = mas[i+step];
                mas[i+step] = mas[i];
                mas[i] = buffer;
                m++;
                for (int j = i, k = i - step; k >= 0 ; k -= step)
                {
                    if (mas[j] < mas[k])
                    {
                        buffer = mas[k];
                        mas[k] = mas[j];
                        mas[j] = buffer;
                        j = k;
                        m++;
                    }
                    c++;
                }
          }
          c++;
        }
    }
}