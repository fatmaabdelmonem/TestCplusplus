#include <iostream>
#include <fstream>
using namespace std;
int main() {
    cout<<"enter name file you need to save: ";
   char ch[90]; cin>>ch;
    fstream file (ch);
    cout<<"enter the new name of file: ";
    string name; cin>>name;
     ofstream lol(name);
    char che;
    while(!file.eof()){
        file.get(che);
        lol<<che;
}


  return 0;
}
