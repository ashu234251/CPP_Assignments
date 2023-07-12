/*
1. Write a C++ program to create a file and print “File created successfully” and throw
an error if file is not created.
*/ 
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("c:/file/1.txt",ios::app );

    if(fout)
      cout<<"File Created Succcessfully."<<endl;
    else
      cout<<"Address Not Found. File is not created."<<endl;

    return 0;
}