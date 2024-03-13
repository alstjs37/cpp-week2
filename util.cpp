// 그 외 로직은 util.cpp (숫자 랜덤 생성 등)
#include <iostream>
#include <time.h>

using namespace std;

void generateAnswer(int answer[]) {
    srand(time(0));

    /* v2
    cout << "Answer is ";
    for(int i = 0; i < 3; i++) { 
        answer[i] = rand() % 10;
        cout << answer[i];
    }
    cout << endl; */

    for (int i = 0; i < 3; i++) {
        answer[i] = rand() % 10;
        for (int j = 0; j < i; j++) {
            if (answer[i] == answer[j]) {
                i--;
                break;
            }
        }
    }
}

void enterGuess(int guess[]) {

    cout << "Enter a guess: ";
    for(int i = 0; i < 3; i++) { 
        scanf("%1d", &guess[i]);
    }
}

int checkCount(int count) {
    if (count == 0) {
        cout << "You lose!" << endl;
        return 0;
    }
    cout << count << " chances left." << endl;
    return 1;
}