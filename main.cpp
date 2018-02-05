#include <iostream>
#include <sstream>
#include <utility>
using namespace std;

bool read(float* st, int n)
{
    string t;
    getline(cin, t);
    istringstream stream(t);
    for ( int i = 0; i < n; i++)
    {
        if (!(stream >> st[i]))
        {
            
            return false;
        }
    }
    return true;
}

void sort(float* st, int n)
{
    int x;
    for ( int i = 0; i < n; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            if (st[i] > st[j])
            {
                x++;
            }
        }

        swap(st[x], st[i]);
        x = 0;
    }
}


void print_st(float* st, unsigned int n)
{
    for (unsigned int i = 0; i < n; i++)
    {
        cout << st[i] << " ";
    }
}

int main()
{

    unsigned int n;
    if (!(cin >> n))
    {
        cout << "An error has occured while reading numbers from line";
        return -1;
    }
    cin.get();
    float* st = new float[n];
    if (read(st, n))
    {
        sort(st, n);
        print_st(st, n);
    }
    else
    {
        cout << "An error has occured while reading numbers from line";
    }
    delete[] st;
    return 0;
}
