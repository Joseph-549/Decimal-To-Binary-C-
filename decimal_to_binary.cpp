#include <iostream>

using namespace std;


void binary(int64_t number)
{

    int a[64] = {};
    int i = 0;
    while (number != 0){
        if (number % 2 > 0){
            a[i] = 1;
            i += 1;
        }

        else {
            a[i] = 0; 
            i += 1;
        }
        number /= 2;
    }

    while (i > 0){
        --i;
        cout << a[i];
    }
}

int main()
{
    binary(65); //result 1000001
}













