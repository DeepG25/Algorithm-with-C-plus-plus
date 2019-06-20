/*
Problem Statement - Generate Subsets of set formed from elements from 1 to n.

Input - 3
Output - 
{}
{3}
{2}
{2,3}
{1}
{1,3}
{1,2}
{1,2,3}

Input - 0
Output - 
{}
*/

//Solution
#include <iostream>
using namespace std;

void generateSubsets(string output,int n,int i)
{
    //base case
    if(i > n)
    {
        cout << "{" << output << "}" << endl;
        return;
    }
    //recursive case
    generateSubsets(output,n,i+1);
    if(output=="")
    {
        output = output + to_string(i);
    }
    else
        output = output + "," + to_string(i);
    generateSubsets(output,n,i+1);
}

int main() {
    int n;
    cin >> n;
    string output = "";
    generateSubsets(output,n,1);
}
