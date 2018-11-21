// 未完成
#include<iostream>
using namespace std;

void mult(int &a, int &counter);
void divi(int &a, int &counter);
void add(int &a, int &counter);

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, counter = 0;
    char pastact;
    cin >> a >> b;

    while(a != b){
        if(b - a > 0){
            // bがaより大きい
            if(b == a * 2){
                mult(a, counter);
            }
            if(b > a * 2 + 2){
                if(pastact == 'd'){
                    add(a, counter);
                }
                mult(a, counter);
                pastact = 'm';
            }
            else{
                add(a, counter);
                pastact = 'a';
            }
        }
        else{
            // bがaより小さい
            if(b == a / 2){
                divi(a, counter);
            }
            if(a >= b * 2){
                if(pastact == 'm'){
                    add(a, counter);
                }
                divi(a, counter);
                pastact = 'd';
            }
            else{
                add(a, counter);
                pastact = 'a';
            }
        }
    }

    cout << counter << "\n";

    return 0;
}

void mult(int &a, int &counter){
    a *= 2;
    counter++;
}

void divi(int &a, int &counter){
    a /= 2;
    counter++;
}

void add(int &a, int &counter){
    a++;
    counter++;
}