/******************************************************************************

c++ 14

*******************************************************************************/
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
    map<string,pair<int,int>> names;
    names.insert({"sandeep",{1,2}});
    names.insert({"sandeepp",{1,2}});
    names.insert({"saneep",{1,2}});
  
    for(auto pr : names)
    {
            cout << "[" << get<0>(pr.second) << ", " << 
            get<1>(pr.second) << ", " << 
            pr.first << "\n";

    }
    return 0;
}
