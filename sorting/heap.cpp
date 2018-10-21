#include <stdio.h>

#define parent(x) (x-1)/2

void heap(int *data, int num) {
	for (int i = 1; i < num; i++) {
		int child = i;
		while (child > 0) {
			int root = parent(child);
			printf("�� �� %d, %d \n", data[root], data[child]);
			if (data[root] < data[child]) {
				int temp = data[root];
				data[root] = data[child];
				data[child] = temp;
			}
			printf("�� �� %d, %d \n", data[root], data[child]);
			child = root;
			for (int i = 0; i < num; i++) {
				printf("%d ", data[i]);
			}
			printf("\n");

		}
		printf("���� �� \n");
	}
}

int main(void) {
	int num = 9;
	int data[] = { 15, 4, 8, 11, 6, 3, 1, 6, 5 };
	// ��� ��� 
	for (int i = 0; i < num; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
	heap(data, num); // ���� �����. 

	printf(" \n �� ���� ����!! \n");
	for (int i = num - 1; i >= 0; i--) {
		// ����ū ����(root)�� �� ������ ���ҿ� ���� 
		int temp = data[i];
		data[i] = data[0];
		data[0] = temp;

		// �Ǹ���������(����ū����)�� �����ϰ� �ٽ� ���� �����. 
		heap(data, i);
	}

	// ��� ��� 
	for (int i = 0; i < num; i++) {
		printf("%d ", data[i]);
	}

	return 0;
}