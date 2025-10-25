#include <iostream>
using namespace std;

enum shape{
    circle,square,diamond
};
enum color {
    RED,
    GREEN,
    BLUE,
    YELLOW
};
 void print(shape Shape,color Color){
    // cout<<"Shape is :";
    if(Shape==circle){
        cout<<"Circle";
    }
    else if(Shape==square){
        cout<<"Square";
    }
    else{
        cout<<"Diamond";
    }

    cout<<"Color is :";
    if(Color==RED){
        cout<<"Red";
    }
    else if(Color==GREEN){
        cout<<"Green";
    }
    else if(Color==BLUE){
      cout<<"Blue";
    }
    else{
        cout<<"Yellow";
    }
    cout<<endl;
 }
int main() {
    
    color circleColor = RED;
    color squareColor = BLUE;
    color diamondColor = GREEN;

    
    print(circle,circleColor);
     print(square,squareColor);
    print(diamond,diamondColor);

    return 0;
}
