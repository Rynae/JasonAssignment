#include <stdio.h>

void clean();

void printFirst();
void printEnd(int count);
void printLine();

void plus();
void minus();
void multiple();
void  divide();

int getDecision();

int main() {
	int d = 1, count = 0;
	while (1) {
		printFirst();
		d = getDecision();
		if (d == 0) {
			break;
		}
		count++;
		printLine();
	}
	printEnd(count);
	while (1);
	return 0;
}

//���
void printFirst() {
	printf("( ���� ) 1 : ���� 2 : ���� 3 : ���� 4 : ������ 0 : ����\n");
	return;
}
void printEnd(int count) {
	printf("\n\n����Ǿ����ϴ�\n");
	printf("����Ƚ�� : %d", count);
	printf("�����մϴ�\n");
	return 0;
}
void printLine() {
	printf("----------------------------------------------------------\n\n");
	return 0;
}

//����
void plus() {
	int n1, n2;
	printf("ù��° ���� �Է� : ");
	scanf("%d", &n1);
	clean();
	printf("�ι�° ���� �Է� : ");
	scanf("%d", &n2);
	clean();
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
}
void minus() {
	int n1, n2;
	printf("ù��° ���� �Է� : ");
	scanf("%d", &n1);
	clean();
	printf("�ι�° ���� �Է� : ");
	scanf("%d", &n2);
	clean();
	printf("%d - %d = %d\n", n1, n2, n1 - n2);
}
void multiple() {
	int n1, n2;
	printf("ù��° ���� �Է� : ");
	scanf("%d", &n1);
	clean();
	printf("�ι�° ���� �Է� : ");
	scanf("%d", &n2);
	clean();
	printf("%d * %d = %d\n", n1, n2, n1*n2);
}
void divide() {
	int n1, n2;
	printf("ù��° ���� �Է� : ");
	scanf("%d", &n1);
	clean();
	printf("�ι�° ���� �Է� : ");
	scanf("%d", &n2);
	clean();
	if (n1%n2) {
		printf("%d / %d = %.2f\n", n1, n2, (float)n1 / n2);
	}
	else printf("%d / %d = %d\n", n1, n2, n1 / n2);
}

//ȿ��
int getDecision() {
	int d = 6974;
	while (1) {
		printf("��� ���� : ");
		scanf("%d", &d);
		clean();
		if (d == 0) {
			return 0;
		}
		if (!(d == 1 || d == 2 || d == 3 || d == 4)) {
			printf("�߸� �Է��߽��ϴ�! �ٽ� �Է��� �ּ���\n\n");
			clean();
			continue;
		}
		switch (d) {
		case 1:
			plus();
			break;
		case 2:
			minus();
			break;
		case 3:
			multiple();
			break;
		case 4:
			divide();
			break;
		default: break;
		}
		return 1;
	}
	return 1;
}

void clean() {
	char bin;
	scanf("%c", &bin);
	return;
}
