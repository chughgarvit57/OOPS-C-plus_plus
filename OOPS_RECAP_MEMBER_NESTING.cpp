#include<iostream>
#include<string>
using namespace std;

class binary{
    private:
    // void checkBinary(void);
    string s;
    public:
    void read(void);
    void checkBinary(void);
    void onesCompliment(void);
    void diplayNumber(void);
};

void binary :: read(void){
    cout<<"Enter a binary number: "<<endl;
    cin>>s;  
}

void binary :: checkBinary(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Invalid binary number"<<endl;
            exit(0);
        }
    }   
}

void binary :: onesCompliment(void){
    checkBinary();
    for (int i = 0; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary :: diplayNumber(void){
    cout<<"Displaying your binary's number 1s compliment: "<<endl;
    for (int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
    cout<<"\n";
}

int main(){
    // OOPS - Classes and Objects
    // C++ --> inititially called --> C with classes by stroustroup
    // Classes --> extension of structures
    binary b; 
    b.read();
    b.checkBinary();
    // b.diplayNumber();
    b.onesCompliment();
    b.diplayNumber();
    return 0;
}