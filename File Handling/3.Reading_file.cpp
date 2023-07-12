#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string line;
    ofstream fout;
    fout.open("c:/file/second.txt" );
    if(!fout)
      cout<<"File not created, or not able to open the file."<<endl;
    else
      {
        while(1)
         {
            getline(cin,line);
            if(line=="-1")
               break;
            fout<<line<<endl;
         }
         cout<<"File Created Successfully."<<endl;
      }
    fout.close();


    ifstream fin;
    fin.open("c:/file/second.txt");
    while(!fin.eof())
    {
        getline(fin,line);
        cout<<line<<endl;
    }
    fin.close();

    return 0;
}
