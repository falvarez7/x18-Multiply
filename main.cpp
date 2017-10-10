#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector <vector <int> > table;

int main()
{
table.resize(12);
for(int i = 0; i<table.size();i++)
    {
    for(int j = 0; j<table.size(); j++)
        {
        table[i].resize(12);
        table[i][j] = (i+1)*(j+1);
        cout<<table[i][j]<<"  ";
        };
        cout<<endl;
    };


return 0;
};
