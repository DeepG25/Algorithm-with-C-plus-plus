/*
Problem Statement - Generate All Parenthesis

eg-
Input - 3
Output - 
((()))
(()())
(())()
()(())
()()()

Input - 4
Output - 
(((())))
((()()))
((())())
((()))()
(()(()))
(()()())
(()())()
(())(())
(())()()
()((()))
()(()())
()(())()
()()(())
()()()()

*/

//Solution
#include <iostream>
#include <vector>
#include <set>
using namespace std;

void generateParenthesis(int n,int i,int open,int close,string output)
{
    //base case
    if(i == 2*n)
    {
        cout << output << endl;
        return;
    }
    //recursive case
    if(open < n)
    {
        output = output + '(';
        generateParenthesis(n,i+1,open+1,close,output);
        output.erase(output.end()-1);
    }
    if(close < open)
    {
        output = output + ')';
        generateParenthesis(n,i+1,open,close+1,output);
    }
}

int main() {
    int n;
    cin >> n;
    string output;
    generateParenthesis(n,0,0,0,output);
    return 0;
}
