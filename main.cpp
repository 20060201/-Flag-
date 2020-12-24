#include <iostream>
using namespace std;

int main() {
    int R, C; //學生隊形有幾列與幾行
    int total = 0;
    cin >> R >> C;
    int line[R][C];

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> line[i][j];
        }
    }

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if(line[i][j] == line[i - 1][j] && line[i + 1][j]) {
                if(line[i][j] == line[i][j - 1] && line[i][j +1]) {
                    if(line[i][j] == line[i + 1][j - 1] && line[i - 1][j - 1] \
                    && line[i + 1][j + 1] && line[i - 1][j + 1]) {
                    } else {
                        total ++;
                    }
                }
            }
        }
    }

    cout << total;
}