/*
4. Write a program to copy the contents of one text file to another while changing the
case of every alphabet.
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("c:/file/4.txt");
    fout<<"Hello Everyone. Myself Ashish Varshney"<<endl;
    fout.close();

    fout.open("c:/file/temp.txt");

    ifstream fin;
    fin.open("c:/file/4.txt");
    char ch;
    while(!fin.eof())
    {
        fin.get(ch);
        if(ch>='a' && ch<='z')
           ch=ch-32;
        else if(ch>='A' && ch<='Z')
           ch=ch+32;

        fout<<ch;
    }

    fin.close();
    fout.close();

    fin.open("c:/file/temp.txt");
    string line;
    getline(fin,line);
    cout<<line<<endl;


    return 0;
}
