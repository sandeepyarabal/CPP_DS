#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v {1,2,3};
     
    /* 2 is not less than 3, returns 1 for any of the checks */
    int b = any_of(v.begin(),v.end(),[](int x){ return 2<x; });
    cout << b ;
    return 0;
}
