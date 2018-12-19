#include <iostream>
#include "SelectionSort.h"
#include "InsertionSort.h"
using namespace std;

int main()
{

SelectionSort jisan;
    int a[8] = {14,33,27,10,35,19,48,44};
int n = sizeof(a)/sizeof(a[0]);
    jisan.SelectionSorter(a,n);

InsertionSort jisan1;
int b[8] = {14,33,27,10,35,19,48,44};
int n1= sizeof(b)/sizeof(b[0]);
    jisan1.InsertionSorter(b,n1);

    return 0;
}
