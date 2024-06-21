#include <iostream>
using namespace std;

int main() {
    int x,y,w,h;
    std::cin>>x>>y>>w>>h;
    
    int _x=(abs(x-w) > x) ? x : abs(x-w);
    int _y=(abs(y-h) > y) ? y : abs(y-h);
    
    std::cout<<min(_x,_y);
    return 0;
}