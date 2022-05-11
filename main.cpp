
#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;

int main()
{
    char Line[80],fileName[25];
    int counter;
    ifstream fin;
    cout<<" enter the name of file ";
    cin>>fileName;
    fin.open(fileName,ios::in);
    if(!fin){
        cout<<"file doesn`t exist  \n";

        exit(0);}
        cout<<"\n content of file is : \n";
        while(fin.eof()==0){
            fin.getline(Line,sizeof(Line));
            ++counter;
            cout<<Line;
        }
        fin.close();
        cout<<"\n number of lines ="<<counter<<endl;
        return 0;
}
