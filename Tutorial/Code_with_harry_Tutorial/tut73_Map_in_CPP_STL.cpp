#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

#include <map>

// Map is an associative array
int main()
{
    // Docs: https://en.cppreference.com/w/cpp/container/map
    map<string, int> marksMap;
    // map<<key>,<vlaue>>
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Roman"] = 2;
    marksMap.insert({{"Rohan"s, 12}, {"razz", 76}});
    // 's' is the suffix

    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << "\n";
        // first => key, second => value
    }

    cout << "Size: " << marksMap.size() << endl;
    cout << "Max size: " << marksMap.max_size() << endl;
    cout << "Empty? : " << marksMap.empty() << endl;

    // Another way to create map
    map<string, string> map1;
    map1 = {
        {"Name", "Roman OJha"},
        {"gender", "male"},
        {"id", "14"},
    };
    cout << endl;
    for (map<string, string>::iterator itr = map1.begin(); itr != map1.end(); itr++)
    {
        cout << (*itr).first << ":" << (*itr).second << endl;
    }
    return 0;
}