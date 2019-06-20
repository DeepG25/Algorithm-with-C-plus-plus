/*
Problem Statement - Generate All Permutations

Input - abc
Output - 
abc
acb
bac
bca
cab
cba

Input - aab
Output - 
aab
aba
baa

*/

//Solution
#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<string> S;

void generatePermutations(string s,string c)
{
    //base case
    if(s.empty())
    {
        if(S.find(c) == S.end())
        {
            cout << c << endl;
            S.insert(c);
        }
        return;
    }
    //recursive case
    for(int i=0;i<s.length();i++)
    {
        char a = s[i];
        c = c + a;
        s.erase(i,1);

        generatePermutations(s,c);

        c.erase(c.length()-1,1);
        s.insert(i,1,a);
    }
}

int main() {
    string s;
    cin >> s;
    generatePermutations(s,"");
    return 0;
}
