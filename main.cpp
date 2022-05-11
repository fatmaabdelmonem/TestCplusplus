
#include<string.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char Line[80],fileName[25];
    int countt=0;
    int len;
    int i;
    ifstream fin;
    cout<<" enter the name of file";
    cin>>fileName;
    fin.open(fileName,ios::in);
    if(!fin){
            cout<<"file doesn`t exist  \n";
            exit(0);}
    cout<<"\n content of file is : \n";

    //count number of  characters
        while(fin.eof()==0){
        fin.getline(Line,sizeof(Line));
        len=strlen(Line);
        for(i=0;i<len;++i)
             ++countt;
        cout<<Line<<"\n";}

    fin.close();
    cout<< "\n number of characters ="<<countt<<endl;}
