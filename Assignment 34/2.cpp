// 2. Write a C++ program to read a text file and count the number of characters in it.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("c:/file/2.txt");

    if(fout)
    {
       fout<<"Hello Everyone\n";
       fout<<"Ashish"<<endl;
       fout<<"Neelam\n";
    }
    else
      cout<<"Address Not Found. File is not created."<<endl;

    fout.close();

    ifstream fin;
    fin.open("c:/file/2.txt");

    char ch;
    int characters=0, words=0;
    while(!fin.eof())
    {
        fin.get(ch);
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
           characters++;
        if(ch==' ' || ch=='\n')
           words++;
    }

    fin.close();
    cout<<"Total Number of Characters in the file is: "<<characters<<endl;
    cout<<"Total Number of Words in the file is: "<<words+1<<endl;
    return 0;
}
