#include <iostream>
#include "SelectionSort.h"
using namespace std;

int main()
{

SelectionSort jisan;
    int a[8] = {14,33,27,10,35,19,48,44};
int n = sizeof(a)/sizeof(a[0]);
    jisan.SelectionSorter(a,n);

    return 0;
}
