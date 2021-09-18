#include <iostream>
#include <string>
#include "cstring"

using namespace std;

void validateDivisible(long numbers);

int main () {
    long numbers  = 0;
    cin>>numbers;
    validateDivisible(numbers);
    return 0;
}

void validateDivisible(long numbers){
    int count = 0;
    string newNumbers = to_string(numbers);
    char values[newNumbers.length()];
    strcpy(values, newNumbers.c_str());

    for(int i = 0; i < newNumbers.length(); i++){
        int value = values[i] - '0';
        if(numbers % value == 0)
            count++;
    }

    cout<<count<<endl;

}