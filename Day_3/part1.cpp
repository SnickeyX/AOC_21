#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std; 

int convert(int n) 
{
    int dec = 0, rem, i = 0;

    while (n!=0) 
    {
        rem = n % 10; 
        n /= 10; 
        dec += rem * pow(2,i);
        i++;
    }
    return dec; 
}

int main() 
{
    fstream input;
    input.open("input.txt");
    string x;
    int numberOfLines; 
    vector<vector<int>> vv;

    while (input >> x) 
    {
        numberOfLines++;
    }
   

    while (input >> x) 
    {
        for (int i = 0; i < x.length(); i++) 
        {
            vv[i].push_back(x[i]);
        } 
    }

    for (int i = 0; i < vv.size(); i++) 
    {
        for (int j = 0; j < vv[i].size(); j++) 
        {
            cout << vv[i][j] << endl;
        }
    }

    input.close();
    return 0;
}