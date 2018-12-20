#include <iostream>
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "BubbleSort.h"
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

    MergeSort jisan2;
cout <<"MergeSort---> :"<<endl;
int c[8] = {14,33,27,10,35,19,48,44};
int n2 = sizeof(c)/sizeof(c[0]);
    jisan2.merge_sort(c,0,n2-1);

BubbleSort jisan3;
int d[8] = {14,33,27,10,35,19,48,44};
int n3 = sizeof(d)/sizeof(d[0]);
    jisan3.BubbleSorter(d,n3);

    return 0;
}
