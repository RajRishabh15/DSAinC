// #include<iostream>
// using namespace std;
// class Vehicle{
//     public:
//     int speed;
//     int fuel;
//     void setData(int s,int f){
//         speed=s;
//         fuel=f;
//     }
//     void display(){
//         cout<<"Speed:"<<speed<<endl;
//         cout<<"Fuel:"<<fuel<<endl;
//     }
// };
// class Car:public Vehicle{
//     public:
//     void carfeature(){
//         cout<<"car has air conitioning"<<endl;
//     }
// };
// class Bike:public Vehicle{
//     public:
//     void bikefeature(){
//         cout<<"bike requires helmet"<<endl;
//     }
// };
// int main(){
//     Car c;
//     c.setData(180,50);
//     c.display();
//     c.carfeature();
//     cout<<endl;
//     Bike b;
//     b.setData(90,15);
//     b.display();
//     b.bikefeature();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// template<typename T>
// void exch(T &a,T &b){
//     T temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int x=5,y=10;
//     cout<<"Before : x="<<x<<" y="<<y<<endl;
//     exch(x,y);
//     cout<<"After : x="<<x<<" y="<<y<<endl;
//     double a=3.14,b=2.71;
//     cout<<"Before : a="<<a<<" b="<<b<<endl;
//     exch(a,b);
//     cout<<"After : a="<<a<<" b="<<b<<endl;
//     return 0;
// }

// #include <iostream> 
// #include <stack> 
// using namespace std; 
// int main() 
// { 
//     stack<int> st; 
//     st.push(5); 
//     st.push(10); 
//     st.push(15);
     
//     // Accessing top element 
//     cout << "Top element: " << st.top() << endl; 
     
//     // Popping an element 
//     st.pop(); 
//     cout << "Top element after pop: " << st.top() << endl; 
//     cout<< "element"<<st.top()<<endl;
//     return 0; 
// }


#include <iostream> 
#include <map> 
using namespace std; 
 
int main() { 
    multimap<int, string> mm; 
    mm.insert({1, "A"}); 
    mm.insert({1, "B"}); 
 
    for(auto p : mm) 
        cout << p.first << " : " << p.second << endl; 
 
    return 0; 
} 
