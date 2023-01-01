#include <iostream>
using namespace std;
class simple{
    int data1;
    int data2;
    public:
       simple(int a, int b=8){
        data1=a;
        data2=b;
       }
       void print(){
        cout<<"the value of data1 and data2 is: "<<data1<<" and "<<data2<<endl;
       }
};
int main() {
    // simple s2;
    simple s1=simple(3,6);
    s1.print();
    return 0;
}