#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v {1,2,4,5,6,8,6,7,6,6,7,6,6};
    
    int x;
    x = count(v.begin(),v.end(),6);
    cout<<x <<"Hello World";

    return 0;
}
