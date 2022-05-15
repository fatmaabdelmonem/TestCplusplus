void login(){

    cout<<"Enter your ID: ";
    cin>>id;
    check_id_for_login();
    cout<<"Enter your password: ";
    cin>>pass1;
    check_pass_for_login();
}

void check_id_for_login(){
    ifstream file("database.txt");             //declare the file
    string Test;
    bool x=false;                                 //this will get information if username is available or not
    int line=1;                                     //it will count lines
    if (file.is_open()) {                       //open the text file
        while (getline(file,Test)) {
            if (Test.find(id, 0) != string::npos){
            x=true;
            }
        line++;
        }
        if(x){
			cout<<" ";
		}
        else{
            cout<<"incorrect username please try again\n";
            login();
        }
    }
}

void check_pass_for_login(){
    ifstream file("database.txt");             //declare the file
    string Test;
    bool x=false;                                 //this will get information if password is available or not
    int line=1;                                     //it will count lines
    if (file.is_open()) {                       //open the text file
        while (getline(file,Test)) {
            if (Test.find(pass1, 0) != string::npos){
            x=true;
            }
        line++;
        }
        if(x){
			cout<<"Successful login, welcome "<<id<<endl;
		}
        else{
            cout<<"incorrect password please try again\n";
            login();
        }
    }
}
