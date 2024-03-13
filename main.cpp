#include <iostream>

void generateAnswer(int answer[]);
void enterGuess(int guess[]);
int strikeAndBall(int answer[], int guess[]);

using namespace std;

int main(void) {

    int answer[3] = {0, };
    int guess[3] = {0, };
    int strikeNum = 0;

    generateAnswer(answer);

    while(strikeNum != 3) {
        enterGuess(guess);
        strikeNum = strikeAndBall(answer, guess);
    }
    
    return 0;
}