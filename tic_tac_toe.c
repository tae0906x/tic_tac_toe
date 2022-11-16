#include<stdio.h> //cnt를 설정해서 cnt가 돌때마다 더하기를 해준다. 더한 값에 따라 플레이어 1,2를 구분
void line(int arry[3][3]);
int arr[3][3] = { 0, };
int cnt = 1;
int main()
{
	int i = 0, j = 0;
	int n;
	int win = 0;
	int x = 0, y = 0;
	while (1) {
		line(i, j);
		//for (j = 0; j < 3; j++) {
		//	for (i = 0; i < 2; i++) {
		//		if (arr[j][i] != arr[j][i + 1]) {
		//			win = 0;
		//			break;
		//		}
		//		else {
		//			win = 1;
		//		}
		//	}
		//}
		//if (win == 1)
		//	printf("game over!");
		if (arr[0][0] == 1 && arr[0][1] == 1 && arr[0][2] == 1) { //1
			printf("game over");
			break;
		}
		else if (arr[0][0] == 2 && arr[0][1] == 2 && arr[0][2] == 2) { //1-2
			printf("game over");
			break;
		}
		else if (arr[1][0] == 1 && arr[1][1] == 1 && arr[1][2] == 1) { //2
			printf("game over");
			break;
		}
		else if (arr[1][0] == 2 && arr[1][1] == 2 && arr[1][2] == 2) { //2-2
			printf("game over");
			break;
		}
		else if (arr[2][0] == 1 && arr[2][1] == 1 && arr[2][2] == 1) { //3
			printf("game over");
			break;
		}
		else if (arr[2][0] == 2 && arr[2][1] == 2 && arr[2][2] == 2) { //3-2
			printf("game over");
			break;
		}
		else if (arr[0][0] == 1 && arr[1][0] == 1 && arr[2][0] == 1) { //4
			printf("game over");
			break;
		}
		else if (arr[0][0] == 2 && arr[1][0] == 2 && arr[2][0] == 2) { //4-2
			printf("game over");
			break;
		}
		else if (arr[0][1] == 1 && arr[1][1] == 1 && arr[2][1] == 1) { //5
			printf("game over");
			break;
		}
		else if (arr[0][1] == 2 && arr[1][1] == 2 && arr[2][1] == 2) { //5-2
			printf("game over");
			break;
		}
		else if (arr[0][2] == 1 && arr[1][2] == 1 && arr[2][2] == 1) { //6
			printf("game over");
			break;
		}
		else if (arr[0][2] == 2 && arr[1][2] == 2 && arr[2][2] == 2) { //6-2
			printf("game over");
			break;
		}
		else if (arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1) { //7
			printf("game over");
			break;
		}
		else if (arr[0][0] == 2 && arr[1][1] == 2 && arr[2][2] == 2) { //7-2
			printf("game over");
			break;
		}
		else if (arr[0][2] == 1 && arr[1][1] == 1 && arr[2][0] == 1) { //8
			printf("game over");
			break;
		}
		else if (arr[0][2] == 2 && arr[1][1] == 2 && arr[2][0] == 2) { //8-2
			printf("game over");
			break;
			}
			scanf(" %d %d", &x, &y);
			if (cnt % 2 == 1) {
				arr[x][y] = 1;
			}
			else if (cnt % 2 == 0) {
				arr[x][y] = 2;
			}
			cnt++;
		}
	}
	void line(int arry[3][3]) {
		int i = 0; int j = 0;
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				if (arr[i][j] == 0) {
					printf("%2s", "[  ]");
				}
				else if (arr[i][j] == 1) {
					printf("%2s", "[Ｏ]");
				}
				else if (arr[i][j] == 2) {
					printf("%2s", "[◎]");
				}
			}
			printf("\n");
		}
	}