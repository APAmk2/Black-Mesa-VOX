#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <Windows.h>
#pragma comment(lib, "Winmm.lib")
using namespace std;
int main(int argc, char* argv[])
{
    if (argc <= 1)
    {
        string str;
        cout << "Command: ";
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
            PlaySoundA(("VOX\\" + v[i] + ".wav").c_str(), nullptr, SND_SYNC | SND_NODEFAULT);
        }
    }
    if (argc > 1)
    {
        for (size_t i = 1; i < argc; i++)
        {
            string s = argv[i];
            PlaySoundA(("VOX\\" + s + ".wav").c_str(), nullptr, SND_SYNC | SND_NODEFAULT);
        }
    }
}