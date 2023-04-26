#include <stdio.h>
#include <stdlib.h>

int main() {
	
	/// 6개 번호를 랜덤으로 받음 1부터 45개
	int i=0, n[7]={0,}, same, ch = 1, num = 0, error = 0;
	
	printf("복권번호를 입력 받겠습니다. \n");
	printf("1 부터 45 사이의 번호를 입력해주세요. \n\n");
	printf("------------------------------------------------\n\n");
	while (1) {
		printf("번호를 입력해주세요 : ");
		scanf_s("%d", &n[i]);

		num = i;

		if (n[num] == 0) {
			printf("0 을 입력하셨습니다. ");
			while (1) {
				printf("랜덤으로 번호를 입력받겠습니다. \n");
				n[num] = 1 + (rand() % 45);
				printf(">>> %d 을(를) 입력받으셨습니다.\n\n", n[num]);

				same = 0;

				for (int k = 0; k < num - 1; k++) {
					if (n[num] == n[k]) {
						same = 1;
						printf("중복된 숫자를 확인함으로 다시 입력받습니다.\n");
						break;
					}
				}

				if (same == 1) continue;
				break;
			}

			if (ch == 1) {
				break;
			}
		}
		else {
			while (1) {
				same = 0;
				error = 0; 
				for (int k = 0; k < num; k++) {
					if (n[num] == n[k]) {
						same = 1;
						break;
					}
					else if (n[num] > 45) {
						error = 1;
						break;
					}
				}
				if (same == 0 && n[num] <= 45) {
					break;
				}
				if (same == 1) {
					printf("중복된 번호입니다. 번호를 다시 입력해주세요. : ");
					scanf_s("%d", &n[num]);
				}
				if (error == 1) {
					printf("없는 번호입니다. 번호를 다시 입력해주세요. : ");
					scanf_s("%d", &n[num]);
				}
			}
			printf("%d 번째는 %d 번호입니다.\n\n", num+1, n[num]);
		}
		if (i >= 5) {
			break;
		}
		i++;
	}
	printf("------------------------------------------------\n\n");
	printf("현재까지 입력된 복권번호를 출력하겠습니다. : ");
	for (int l = 0; l < i+1; l++) {
		printf("%d ", n[l]);
	}
	printf("\n\n");

	return 0;
}