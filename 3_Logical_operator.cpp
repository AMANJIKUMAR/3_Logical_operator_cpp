#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    if ( a>=0 && a<=10 ){
        cout<<"hello" <<endl; // endl='\n'
    }
    else if ( a>10 && a<=20){
        cout<<"world" <<endl;
    }
    else if ( a<0 ){
        cout<<"negative" <<endl;
    }
    else {
        cout<<"Welcome to c++" <<endl;
    }
}
