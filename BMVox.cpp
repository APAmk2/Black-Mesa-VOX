#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <Windows.h>
#pragma comment(lib, "Winmm.lib")
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    string s;
    stringstream ss(str);
    vector<string> v;
    while (getline(ss, s, ' ')) 
    {
        v.push_back(s);
    }
    for (size_t i = 0; i < v.size(); i++) 
    {
        PlaySoundA(("VOX\\" + v[i] + ".wav").c_str(), nullptr, SND_SYNC);
    }
}