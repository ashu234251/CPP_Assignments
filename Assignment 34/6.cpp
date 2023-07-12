//6. Write a C++ program that counts the total number of characters, words and lines in the file.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("c:/file/6.txt");

    if(fout)
    {
       fout<<"Hello Everyone"<<endl;
       fout<<"Ashish"<<endl;
       fout<<"Neelam"<<endl;
       fout<<"This is the code for Assignment six.";
    }
    else
      cout<<"Address Not Found. File is not created."<<endl;

    fout.close();

    ifstream fin;
    fin.open("c:/file/6.txt");

    char ch;
    int characters=0, words=0, line=0;
    while(!fin.eof())
    {
        fin.get(ch);
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
           characters++;
        if(ch==' ' || ch=='\n')
           words++;
        if(ch=='\n')
           line++;
    }

    fin.close();
    cout<<"Total Number of Characters in the file is: "<<characters<<endl;
    cout<<"Total Number of Words in the file is: "<<words+1<<endl;
    cout<<"Total Number of Lines in the file is: "<<line+1<<endl;
    return 0;
}
