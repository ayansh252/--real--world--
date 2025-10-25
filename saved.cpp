#include <iostream>  
using namespace std;


enum Files {
  text,image,pdf,excel,csv,doc    
};
 
void doctype(Files files){

    if(files==text){
        cout<<"It is a text file";
    }
   else if(files==image){
        cout<<"It is a PNG or jpeg";
    }
    else if(files==pdf){
        cout<<"It is a pdf file";
    }
    else if(files==excel){
        cout<<"It is a excel sheet";
    }
    else if(files== csv){
        cout<<"It is a csv file";
    }
    else if(files==doc){
        cout<<"It is doc file";
    }
    cout<<endl;
}
int main() {
    doctype(image);
    doctype(text);
    doctype(pdf);
    doctype(excel);
    doctype(csv);
    return 0;
}
