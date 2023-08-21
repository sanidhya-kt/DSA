# include <bits/stdc++.h>
using namespace std;

class fraction{

    int numerator; // 1
    int denominator;  //2

    public:
    // parameterised constructor
    fraction(int numerator, int denominator){
        // this -> numerator  means 1 ka numerator

        this -> numerator = numerator;
        this -> denominator = denominator;
    } 

    void print(){
        cout << this->numerator << '/' << denominator << endl;
    }

    void simplify(){

        int GCD = 1;
        int j = min(this -> numerator, this -> denominator);
        for(int i = 1; i <= j; i++){
            if(this->numerator % i == 0 && this->denominator % i == 0){
                GCD = i;
            }
        }
        this -> numerator = numerator/GCD;
        this -> denominator = denominator/GCD;
    }

    void add(fraction f2){

        int LCM = this->denominator * f2.denominator;
        int x = LCM / this->denominator;
        int y = LCM / f2.denominator;

        int ans = x*numerator + (y*f2.numerator);
        this->numerator = ans;
        this->denominator = LCM;
        simplify();
    }

};


int main(){
    fraction f1(13, 2);
    fraction f2(15, 4);

    f1.add(f2);

    f1.print();
    f2.print();
}