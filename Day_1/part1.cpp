#include <iostream>
#include <fstream>
using namespace std; 

int main() 
{
    ifstream measures; 

    measures.open("input.txt");
    int x; 
    int count = 0; 
    int y = 0; 

    while (measures >> x) 
    {
        if (x > y && y != 0) 
        {
            count++; 
        }
        y = x;  
    }

    cout << count;  

    measures.close();
}