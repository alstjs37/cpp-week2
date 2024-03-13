#include <iostream>

void enterAnswer(int answer[]);
void enterGuess(int guess[]);
int strikeAndBall(int answer[], int guess[]);

using namespace std;

int main(void) {

    int answer[3] = {0, };
    int guess[3] = {0, };
    int strikeNum = 0;

    enterAnswer(answer);

    while(strikeNum != 3) {
        enterGuess(guess);
        strikeNum = strikeAndBall(answer, guess);
    }
    
    return 0;
}