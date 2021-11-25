

#include <iostream>
using namespace std;


int n, rew = 1;
int *mass = new int[n];
void fillArray(int* array, int length);
void lengthArray();
void oddInd(int* array, int length);
void clear();

int main() {
    setlocale(LC_ALL, "Russian");

    lengthArray();
    fillArray(mass, n);
    oddInd(mass, n);
    clear();
    return 0;


}


void lengthArray()
{

    cout << "Введите длинну массива: " << endl;
    cin >> n;
}

void fillArray(int* array, int length)
{

    cout << "Введите массив: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> mass[i];
    }
}

void oddInd(int* array, int length)
{
    
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 1) {
            rew = rew * mass[i];
        }


    }

    cout << rew << endl;
  
}

void clear()
{
    delete[] mass;
}