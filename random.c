#include <stdio.h>
#include <stdlib.h>

int main() {
	
	/// 6�� ��ȣ�� �������� ���� 1���� 45��
	int i=0, n[7]={0,}, same, ch = 1, num = 0, error = 0;
	
	printf("���ǹ�ȣ�� �Է� �ްڽ��ϴ�. \n");
	printf("1 ���� 45 ������ ��ȣ�� �Է����ּ���. \n\n");
	printf("------------------------------------------------\n\n");
	while (1) {
		printf("��ȣ�� �Է����ּ��� : ");
		scanf_s("%d", &n[i]);

		num = i;

		if (n[num] == 0) {
			printf("0 �� �Է��ϼ̽��ϴ�. ");
			while (1) {
				printf("�������� ��ȣ�� �Է¹ްڽ��ϴ�. \n");
				n[num] = 1 + (rand() % 45);
				printf(">>> %d ��(��) �Է¹����̽��ϴ�.\n\n", n[num]);

				same = 0;

				for (int k = 0; k < num - 1; k++) {
					if (n[num] == n[k]) {
						same = 1;
						printf("�ߺ��� ���ڸ� Ȯ�������� �ٽ� �Է¹޽��ϴ�.\n");
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
					printf("�ߺ��� ��ȣ�Դϴ�. ��ȣ�� �ٽ� �Է����ּ���. : ");
					scanf_s("%d", &n[num]);
				}
				if (error == 1) {
					printf("���� ��ȣ�Դϴ�. ��ȣ�� �ٽ� �Է����ּ���. : ");
					scanf_s("%d", &n[num]);
				}
			}
			printf("%d ��°�� %d ��ȣ�Դϴ�.\n\n", num+1, n[num]);
		}
		if (i >= 5) {
			break;
		}
		i++;
	}
	printf("------------------------------------------------\n\n");
	printf("������� �Էµ� ���ǹ�ȣ�� ����ϰڽ��ϴ�. : ");
	for (int l = 0; l < i+1; l++) {
		printf("%d ", n[l]);
	}
	printf("\n\n");

	return 0;
}