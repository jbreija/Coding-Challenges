// https://www.hackerrank.com/challenges/a-very-big-sum/problem
// https://github.com/jbreija
// By Jason Breijak

#include <iostream>
using namespace std;

int main() {
   long long int num,sum = 0;
    cin >> num;
    for(int i = 0; i < num; i++){
        long long int a;cin >> a;
        sum+=a;
    }
    cout << sum << endl;
    system("pause");
    return 0;
}