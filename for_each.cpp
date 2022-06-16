#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v {1,2,3};
    
    for_each(v.begin(), v.end(), [ ](int &i){ i++;});
    printf("Hello World");
    for (auto it : v)
    {
        cout << it ;
    }
    return 0;
}
