#include <iostream>
#include<regex>
#include <string>
#include <cstring>
#include <algorithm>
#include <fstream>
#include <conio.h>
using namespace std;
void encryption(string &str);
void decryption(string &str);
class registration
{
private:
    string email;
    string password;
    string num;

public:
    void get_email(string str,bool &flag) {
        regex e("[^^!#$-%+&=*:;,<>?()@. ]+@[^^!#$-%+&=*:;,?<>()@. ]*+[.]+com");
        if (regex_match(str, e)) {
            email = str;
            flag=1;
        }
    }
    void get_pass(){
        string confirm_pass;
        bool check=0;
        string pass;
        char c;
        do {
            cout<<"your password has to contain at least 1 uppercase"<<endl;
            cout<<" at least 1 special character[@,_$?]"<<endl;
            cout<<"and has to be mixture of numbers and characters"<<endl;
            cout << " at least 12 characters"<<endl;
            cout <<"enter password :  ";
            pass="";
            password="";
            bool flag1=0 ,flag2=0,flag3=0;
            while (true) {
                c = _getch();
                if(c=='\b'){
                    cout<<"\b \b";
                    pass.pop_back();
                    continue;
                }
                if (c == 13) {
                    break;
                }
                pass += c;
                cout << '*';
            }
            password = pass;
            for (int i=0;i<password.length();i++) {
                if (isupper(password[i])) {
                    if(flag3==1||flag2==1) {
                        flag1=1;
                        flag2=1;
                        flag3=1;
                    }
                    else flag1=1;
                }
                if (isdigit(password[i])) {
                    if(flag1==1||flag3==1){
                        flag1=1;
                        flag2=1;
                        flag3=1;
                        break;
                    }
                    else flag2=1;
                }

                if (!isdigit(password[i]) && !isalpha(password[i])) {
                    if(flag1==1||flag2==1) {
                        flag1=1;
                        flag2=1;
                        flag3=1;
                        break;
                    }
                    else flag3=1;
                }
            }

            if (password.length()>=12&&flag1==1&&flag3==1&&flag2==1){
                do {
                    cout << "confirm password: ";
                    cin >> confirm_pass;
                    if(confirm_pass==password){
                        cout <<"succeeded"<<endl;
                        break;
                    }
                    else cout<<"different password"<<endl;
                }while(true);

                encryption(password);
                check=1;
            }
            if (check==0){
                cout << "week password try again "<<"\n\n\n";
            }
        }while(check==0);

    }
    string print_pass(){
        return password;
    }
    string get_num(){
        string num_;
        do {
            cout << "number: ";
            cin >> num_;
            regex e("01+[0125]{1}+[1234567890]{8}");
            if (regex_match(num_, e)) {
                num=num_;
                break;
            }
            else cout <<"wrong number"<<endl<<num_<<endl;
        } while (true);
    }

};
int main() {
    registration registers;
    char email[100];
    char token[100];
    string filename="emails.txt";
    fstream file;
    file.open(filename,ios::in);
    bool flag=0;
    while(true) {
        cout<<"email :  ";
        cin >> email;
        registers.get_email(email,flag);

        while(!file.eof()){
            file.getline(token,100);
            if(strcmp(email,token)==0){
                flag=0;
                break;
            }
        }
        file.close();
        if (flag==1) {
            registers.get_pass();
            registers.get_num();
            file.open(filename,ios::app);
            file<<email<<endl<<registers.print_pass()<<endl;
            file.close();
            break;
        } else cout << "wrong email or used before"<<endl;
    }

}
void encryption(string &str){
    for(int i=0;i<str.length();i++){
        str[i]+=1;

    }


}
void decryption(string &str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] -= 1;

    }
}
