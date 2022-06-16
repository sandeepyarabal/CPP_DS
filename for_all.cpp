#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v {1,2,3};
    /* zero is less than 1,2,3, returns 1 for all of the checks */
    int a = all_of(v.begin(),v.end(),[](int x){ return 0<x; });
    cout << a ;
    printf("Hello World");  
     
    /* 1 is not less than 1,2,3, returns 0 for all of the checks */
    int b = all_of(v.begin(),v.end(),[](int x){ return 1<x; });
    cout << b ;
    return 0;
}
