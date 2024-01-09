#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    vector<string> vt;
    getline(cin, str);
    size_t start = 0, end = 0;
    while (start < str.size()) {
        start = str.find_first_not_of(' ', end);
        if (start == string::npos)break;
        end = str.find_first_of(' ', start);
        if (end == string::npos) {
            vt.push_back(str.substr(start, str.size()));
            break;
        }
        vt.push_back(str.substr(start, end - start));
    }
    for (auto word : vt) {
        cout <<word<<" ";
    }
}