/* 
    swea 1210 - Ladder 1
    Date: 2020 / 01 / 30
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 10;
    while (tc--) {
        int idx;
        int arr[100][100];
        int cur_x, cur_y = 99;
        int move_dir = -1; // 1: left, 2:right, 3:up

        cin >> idx;
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                cin >> arr[i][j];
                if (arr[i][j] == 2) {
                    cur_x = j;
                }
            }
        }

        while (cur_y != 0) {
            if (cur_x - 1 >= 0 && move_dir != 2 && arr[cur_y][cur_x - 1] == 1) {
                cur_x -= 1;
                move_dir = 1;
            }
            else if (cur_x + 1 < 100 && move_dir != 1 && arr[cur_y][cur_x + 1] == 1) {
                cur_x += 1;
                move_dir = 2;
            }
            else if (arr[cur_y - 1][cur_x] == 1) {
                cur_y -= 1;
                move_dir = 3;
            }          
        }
  
        cout <<'#' << idx << ' ' << cur_x << "\n";
    }

    return 0;
}