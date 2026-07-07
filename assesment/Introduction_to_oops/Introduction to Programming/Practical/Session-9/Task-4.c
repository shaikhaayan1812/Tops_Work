#include <stdio.h>

int main() {
    int cricketScores[3][2] = {
        {180, 175},
        {210, 195},
        {165, 170}
    };

    for(int i = 0; i < 3; i++) {
        int highest = cricketScores[i][0];

        for(int j = 1; j < 2; j++) {
            if(cricketScores[i][j] > highest)
                highest = cricketScores[i][j];
        }

        printf("Match %d Highest Score = %d\n", i + 1, highest);
    }

    return 0;
}