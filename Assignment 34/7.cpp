/*
7. There are 50 records in a file. Each record contains 6-character item-code, 20
characters for item-name and an integer price. Write a program to read these
records, arrange them in the descending order of price and write them in the same
file, overwriting the earlier records.
*/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;


int main()
{
  string code[10];
  string name[10];
  int price[10];
  int i=0,j;
  ifstream fin;
  fin.open("c:/file/7.txt");
  while(!fin.eof())
  { 
    getline(fin,code[i]);
    fin.ignore();
    getline(fin,name[i]);
    fin>>price[i];
    fin.ignore();
    i++;
  }
  fin.close();
  for(j=0;j<i;j++)
  {
    cout<<code[i]<<endl;
    cout<<name[i]<<endl;
    cout<<price[i]<<endl;
  }
  return 0;
}
