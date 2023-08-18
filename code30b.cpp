#include<iostream>
#include<math.h>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};



int main(){
    int dist,result;
     Point p(1, 1);
    p.displayPoint();
    

    Point q(4, 6);
    q.displayPoint();

    
    dist= (x2-x1)*(x2-x1) - (y2-y1)*(y2-y1) ;
    result=sqrt(dist);
    cout<<"distance between two points"<<result<<endl;



    return 0;
}