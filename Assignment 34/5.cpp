// 5. Write a C++ program to merge the two files.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string line;
    ifstream fin;
    fin.open("c:/file/fifth1.txt");

    ofstream fout;
    fout.open("c:/file/merge.txt",ios::app);

    while(!fin.eof())
    {
      getline(fin,line);
      fout<<line;
      fout<<endl;
    }
    fout<<endl;
    fin.close();

    fin.open("c:/file/fifth2.txt");
    while(!fin.eof())
    {
      getline(fin,line);
      fout<<line;
    }
    
    fout.close();
    
    return 0;
}