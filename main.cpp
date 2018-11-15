#include <iostream>
#include "Point.h"
#include "PointArray.h"
using namespace std;

int main()
{
    Point<int> p(1, 3);
    Point<int> q(3, 3);
    Point<int> r(3, 1);
    cout<<endl;
    Point<int>  arr[]= {p, q , r};
    int size = sizeof(arr)/sizeof(arr[0]);
    PointArray<Point<int>> pa2(arr, size);
    PointArray pa = pa2;

    cout << pa.getSize() << endl;
    pa.push_back(p);
    pa.print();
    pa.insert(1, q);
    pa.print();
    pa.clear();
    cout << pa.getSize() << endl;
    return 0;
}
