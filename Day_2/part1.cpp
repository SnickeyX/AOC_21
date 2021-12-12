#include <iostream>
#include <fstream>
#include <algorithm>
#include <string> 
#include <sstream>

using namespace std;

int extractIntegerWords(string str)    // credits to https://www.geeksforgeeks.org/extract-integers-string-c/
{
    stringstream ss;    
  
    /* Storing the whole string into string stream */
    ss << str;
  
    /* Running loop till the end of the stream */
    string temp;
    int found;
    while (!ss.eof()) {
  
        /* extracting word by word from stream */
        ss >> temp;
  
        /* Checking the given word is integer or not */
        stringstream(temp) >> found;
    }
    return found;
}

int main() 
{
    ifstream input;

    input.open("input.txt");
    int depth = 0;
    int distance = 0;
    size_t found1; 
    size_t found2;
    size_t found3;


    for (string line; getline(input,line);)
    {
        cout << line << endl;
        found1 = line.find("forward");
        if (found1 == 0) 
        {
            distance += extractIntegerWords(line);
        }
        found2 = line.find("up");
        if (found2 == 0) 
        {
            depth -= extractIntegerWords(line);
        }
        found2 = line.find("down");
        if (found2 == 0) 
        {
            depth += extractIntegerWords(line);
        }
    }

    cout << depth * distance << endl;

    input.close();
}