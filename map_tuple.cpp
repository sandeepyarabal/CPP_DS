
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <utility>
#include <tuple>
using namespace std;

int main()
{
    map<string,tuple<char,int,int>> names;
    names.insert({"sandeep",{'a',1,2}});
    names.insert({"sandeepp",{'b',1,2}});
    names.insert({"saneep",{'c',1,2}});
  
    for(auto pr : names)
    {
            cout << "[" << get<0>(pr.second) << ", " << 
            get<1>(pr.second) << ", " << 
            get<2>(pr.second) << "]            " << 
            pr.first << "\n";

    }
    return 0;
}
