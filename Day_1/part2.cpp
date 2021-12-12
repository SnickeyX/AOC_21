#include <iostream>
#include <fstream>
#include <vector> 
using namespace std; 

int main() 
{
    ifstream measures; 

    measures.open("input.txt");
    int x1;
    vector<int> window; 
    int count = 0; 
    int sum1 = 0;
    int sum2 = 0; 


    while (measures >> x1) 
    {
        window.push_back(x1);

        if (window.size() == 3) 
        {
            int temp = 0;
            for(int i : window)
            {
                temp += i; 
            }
            sum1 = temp; 
            if (sum1 > sum2) 
            {
                count++; 
            }
            sum2 = sum1; 
        }
        else if (window.size() > 3)
        {
            window.erase(window.begin());

            int temp = 0;
            for(int i : window)
            {
                temp += i; 
            }
            sum1 = temp; 
            if (sum1 > sum2) 
            {
                count++; 
            }
            sum2 = sum1; 
        }
        else 
        {
            continue; 
        }
    }

    cout << count; 

    measures.close();
}