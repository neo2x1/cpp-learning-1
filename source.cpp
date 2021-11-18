#include <iostream>
#include <string>
#include <cmath>

void never(int a, int b){
    std::cout << "outcome:" << a*b;
    std::cin >> a;
}
void gonna(bool a, bool b){
    std::cout << "outcome: " << a/b;
    std::cin >> a;
}
void give(bool a){
    std::cout << "outcome: " << sqrt(a);
    std::cin >> a;
}
void you(int a, int b){
    std::cout << "outcome: " << a+b;
    std::cin >> a;
}
void up(int a, int b){
    std::cout << "outcome: " << a-b;
    std::cin >> a;
}

int main(){
    int wyb, a, b;
    std::cout <<"select function"<< std::endl;
    std::cout <<"1. add" << std::endl; 
    std::cout <<"2. subtract" << std::endl;
    std::cout <<"3. multiply"<<std::endl;
    std::cout <<"4. divide"<< std::endl;
    std::cout <<"5. square root" << std::endl;
    std::cin >> wyb;

    switch (wyb)
    {
    case 1:
        std::cout << "insert a: ";
        std::cin >> a;
        std::cout << "insert b: ";
        std::cin >> b;
        you(a,b);
        break;
    
    case 2:
        std::cout << "insert a: ";
        std::cin >> a;
        std::cout << "insert b: ";
        std::cin >> b;
        up(a,b);
        break;

    case 3:
        std::cout << "insert a: ";
        std::cin >> a;
        std::cout << "insert b: ";
        std::cin >> b;
        never(a,b);
        break;

    case 4:
        std::cout << "insert a: ";
        std::cin >> a;
        std::cout << "insert b: ";
        std::cin >> b;
        gonna(a,b);
        break;

    case 5:
        std::cout << "insert a: ";
        std::cin >> a;
        give(a);
        break;
    }
    return 0;
}
