#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("c:/file/first.txt",ios::app | ios::in | ios::out);     // if only "first.txt", then it will create in the same folder,in which this code is present.
    if(!fout)
      cout<<"File not created, or not able to open the file."<<endl;
    else
      fout<<"See You Tommorow. Work Hard to get the Success.\nAlso avoid any distraction to get the desired result."<<endl;
      cout<<"File created Successfully."<<endl;

    fout.close();

    return 0;

}