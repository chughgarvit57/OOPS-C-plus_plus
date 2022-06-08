#include<iostream>
using namespace std;

class Shop{
    int itemId[100];
    int item_Price[100];
    int counter;
    public:
    void initCounter(void){
        counter = 0;
    }
    void set_Price();
    void display_Price();
};

void Shop :: set_Price(void){
    cout<<"Enter the id of the item: "<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of the item: "<<endl;
    cin>>item_Price[counter];
    counter++;
}

void Shop :: display_Price(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with id "<<itemId[i]<<" is "<<item_Price[i];
    } 
}

int main(){
    
    return 0;
}