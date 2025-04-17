#include <iostream>
#include <string>

void helloWorld(){
    std::cout<<"Hello!!";
}
void onehund(){
    for(int i=1; i<=100; i++){
        std::cout<<i<<" ";
    }
}
void max(){
    int a,b,c;
    std::cout<<"Give me 3 ints\n";
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    int m;
    if(a>b){
        if(a>c){
            m=a;
        }else{
            m=c;
        }
    }else if (b>c)
    {
        m=b;
    }else{
        m=c;
    }
    std::cout<<"max is: "<<m;
}
void evenOdd(){
    int x;
    std::cout<<"Give me a number\n";
    std::cin>>x;
    if((x%2)==0){
        std::cout<<"even";
    }else{
        std::cout<<"odd";
    }
}
void calculator(){
    float a;
    float b;
    std::cout<<"Give me 2 numbers\n";
    std::cin>>a;
    std::cin>>b;
    char o;
    std::cout<<"+, -, *, or /\n";
    std::cin>>o;
    switch (o){
        case '+': std::cout<<a<<" + "<<b<<" = "<<a+b; break;
        case '-': std::cout<<a<<" - "<<b<<" = "<<a-b; break;
        case '*': std::cout<<a<<" * "<<b<<" = "<<a*b; break;
        case '/': std::cout<<a<<" / "<<b<<" = "<<a/b; break;
    }
}
int main(){
    std::cout<<"1) Hello World\n2)Print 1 to 100\n3)Even or odd\n4)Max of three numbers\n5)Calculator\n";
    int choice;
    std::cin>>choice;
    switch (choice){
        case 1: helloWorld();
            break;
        case 2: onehund(); break;
        case 3: evenOdd(); break;
        case 4: max(); break;
        case 5: calculator(); break;
        default: std::cout<<"Wrong choice";
    }
    return 0;
}
