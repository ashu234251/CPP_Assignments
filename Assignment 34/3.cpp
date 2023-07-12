// 3. Write a C++ program to open an output file 'a.txt' and append data to it.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("c:/file/3a.txt",ios::app);

    if(fout)
        cout<<"File created successfully."<<endl;
    else
        cout<<"Wrong address. File not Created."<<endl;

    fout<<"Hello Everyone."<<endl;
    fout<<"My Name is Ashish Varshney."<<endl;
    fout<<"My father's name is Dinesh Chandra Varshney."<<endl;
    fout<<"Hahahaahaaa"<<endl;

    fout.close();
    return 0;
}
