

bool login(){
    start:
string id,pass,mail,password,name;
cout<<"Enter your name: ";
cin>>name;
cout<<"ID: ";
cin>>id;
cout<<"password: ":
    ifstream check("data\\" + id +".txt");
    getline(check,mail);
    getline(check,password);
    if(id==user && pass!=password){
        cout<<"Successful login, welcome "<<name;
        return true;
    }else{
    cout<<"login fail,try again";
    for(int i=0; i<3; i++){
        goto start;
    }
    cout<<"sorry, you can't login";
    return false;

    }

}
