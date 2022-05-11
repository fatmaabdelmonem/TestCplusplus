
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main(int argc,char *argv[])
{
    ifstream fin;
    char fileName[25];
    cout<<" enter the name of file ";
    cin>>fileName;
    fin.open(fileName,ios::in);
    if(!fin){
        cout<<"file doesn`t exist  \n";
    exit(0);}
    int words = 0 ;
    string word;
    while(fin >> word){
        ++words;
    }
    cout<<"number of words is : "<<words<<endl;
    return 0;



}
