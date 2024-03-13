#include <iostream>

void generateAnswer(int answer[]);
void enterGuess(int guess[]);
int checkCount(int count);
int strikeAndBall(int answer[], int guess[]);

using namespace std;

int main(void) {

    int answer[3] = {0, };
    int guess[3] = {0, };
    int strikeNum = 0;
    int count = 5;

    generateAnswer(answer);

    while(strikeNum != 3) {
        if (checkCount(count) == 0) break;

        enterGuess(guess);
        strikeNum = strikeAndBall(answer, guess);
        count -= 1;
    }
    
    return 0;
}