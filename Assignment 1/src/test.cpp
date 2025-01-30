#include<iostream>
#include<fstream>
#include "strlib.h"
using namespace std;
int maini()
{
    ifstream input;
    string line;
    input.open("1.txt");
    while(getline(input,line))
    {
        Vector<string> ops;
        ops=stringSplit(line," ");
        for(string op:ops )
        {
            cout<<op<<endl;
        }
    }
    input.close();
    return 0;
}
