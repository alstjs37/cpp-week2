// 그 외 로직은 util.cpp (숫자 랜덤 생성 등)
#include <iostream>

using namespace std;

void enterAnswer(int answer[]) {

    cout << "Enter a answer: ";
    for(int i = 0; i < 3; i++) { 
        scanf("%1d", &answer[i]);
    }
}

void enterGuess(int guess[]) {

    cout << "Enter a guess: ";
    for(int i = 0; i < 3; i++) { 
        scanf("%1d", &guess[i]);
    }
}