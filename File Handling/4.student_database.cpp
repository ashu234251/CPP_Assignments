#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int Id;

class Student
{
      int id;
      string name;
      int age;
      string branch;
    public:
      void addStudent()
      {
        Id++;
        fflush(stdin);
        cout<<"Enter Your Name: ";
        getline(cin,name);
        cout<<"Enter Your Age: ";
        cin>>age;
        fflush(stdin);
        cout<<"Enter Your Branch: ";
        getline(cin,branch);

        ofstream fout;
        fout.open("c:/file/student.txt",ios::app);
        fout<<"\n"<<Id<<"\n"<<name<<"\n"<<age<<"\n"<<branch;
        fout.close();

        fout.open("c:/file/student_Id.txt",ios::app);
        fout<<endl<<Id;
        fout.close();

        cout<<"-------Congratulations, Student Added Successfully-------"<<endl;
        cout<<"--------------------------------------------------------"<<endl<<endl<<endl;
      }

     void printStudent()
      {
        ifstream fin;
        fin.open("c:/file/student.txt");
        Student s;

        while(!fin.eof())
        {
             fin>>s.id;
             fin.ignore();
             getline(fin,s.name);
             fin>>s.age;
             fin>>s.branch;

             s.print();
        }
        fin.close();
     }

      void print()
      {
          cout<<"I'd is: "<<id<<endl;
          cout<<"Name is: "<<name<<endl;
          cout<<"Age is: "<<age<<endl;
          cout<<"Branch is: "<<branch<<endl;
          cout<<"###############################"<<endl<<endl;
      }

      void searchStudent(int id)
      {
          ifstream fin;
          fin.open("c:/file/student.txt");
          Student s;
          while(!fin.eof())
          {
            fin>>s.id;
            fin.ignore();
            getline(fin,s.name);
            fin>>s.age;
            fin>>s.branch;

            if(s.id==id)
            {
                s.print();
                break;
            }
         }
         fin.close();

      }
      void printID()
      {
          fstream fin;
          int i;
          fin.open("c:/file/student_Id.txt");
          while(!fin.eof())
          {
              fin>>i;
              cout<<i<<endl;
          }
          fin.close();
      }
      void deleteStudent(int d)
      {
          ifstream fin;
          fin.open("c./file/student.txt");

          ofstream fout;
          fout.open("c./file/temp.txt",ios::app);

          Student s;
          while(!fin.eof())
          {
            fin>>s.id;
            fin.ignore();
            getline(fin,s.name);
            fin>>s.age;
            fin>>s.branch;

            if(s.id!=d)
            {
                 fout<<s.id<<"\n"<<s.name<<"\n"<<s.age<<"\n"<<s.branch<<"\n";
                 fout.close();
            }
          }

          fin.close();
          fout.close();

          remove("c:/file/student.txt");
          rename("c:/file/temp.txt","c:/file/student.txt");

          cout<<"Student deleted Successfully."<<endl;

      }

};

int main()
{

    ifstream fin;
    fin.open("c:/file/student_Id.txt");

    if(!fin)
     {
       cout<<"--------Database Started----------"<<endl;
     }
    else
     {
      while(!fin.eof())
       {
        fin>>Id;
       }
     }

    fin.close();

    while(1)
    {
        int choice;
        cout<<"1. Add Student."<<endl;
        cout<<"2. Print All the Students."<<endl;
        cout<<"3. Search a Student."<<endl;
        cout<<"4. Delete a Student."<<endl;
        cout<<"5. Update Student."<<endl;

        cout<<"Enter Your Choice: ";
        cin>>choice;

        Student s;
        int ID;
        switch(choice)
        {
            case 1:
                   s.addStudent();
                   break;

            case 2:
                   s.printStudent();
                   break;
            case 3:
                   cout<<"Enter Student Id: ";
                   cin>>ID;
                   s.searchStudent(ID);
                   break;
            case 4:
                   int d;
                   cout<<"Enter Student Id: ";
                   cin>>ID;
                   s.deleteStudent(ID);
                   break;
            case 5:
                   s.printID();
                   break;
            default:
                  return 0;

        }

    }

  return 0;
}
