// 게임 로직은 game.cpp (게임 흐름, 스트라이크, 볼 처리 등)
#include <iostream>

using namespace std;

int strikeAndBall(int answer[], int guess[]) {
    int strike = 0;
    int ball = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (answer[i] == guess[j]) {
                if (i == j) strike++;
                else ball++;
            }
        }
    }
    if (strike == 3) cout << "You win!" << endl;
    else cout << "Strikes: " << strike << ", Balls: " << ball << endl; 

    return strike;
}