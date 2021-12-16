#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

//�ִ� N���� ��ǥ�� 1�ʿ� ó���ؾ��ϹǷ� �������� �Ǵ� �������� ����ؾ��Ѵ�.

typedef struct _pos { // ��ǥ ����ü
	int xpos;
	int ypos;
}Pos;

void marge(Pos pos[], int first, int mid, int last) {
	int i, j, k, l;
	i = first;
	j = mid+1;
	k = first;

	Pos* newPos = (Pos*)malloc(sizeof(Pos) * (last+1));	//���ĵ� ��ǥ���� ������ Pos�� �������� �Ҵ����ش�.

	while (i <= mid && j <= last) {
		if (pos[i].xpos < pos[j].xpos) {
			newPos[k].xpos = pos[i].xpos;
			newPos[k].ypos = pos[i].ypos;
			k++; i++;
		}
		else if (pos[i].xpos == pos[j].xpos) {	// �⺻���� �������İ� �ٸ� �κ� x�� ��ǥ�� ���� ���
			if (pos[i].ypos < pos[j].ypos) {	// y�� ��ǥ���� ���ؼ� ����
				newPos[k].xpos = pos[i].xpos;
				newPos[k].ypos = pos[i].ypos;
				k++; i++;
			}
			else {
				newPos[k].xpos = pos[j].xpos;
				newPos[k].ypos = pos[j].ypos;
				k++; j++;
			}
		}
		else {
			newPos[k].xpos = pos[j].xpos;
			newPos[k].ypos = pos[j].ypos;
			k++; j++;
		}
	}

	if (i <= mid) {
		for (l = i; l <= mid; l++) {
			newPos[k].xpos = pos[l].xpos;
			newPos[k].ypos = pos[l].ypos;
			k++;
		}
	}
	else {
		for (l = j; l <= last; l++) {
			newPos[k].xpos = pos[l].xpos;
			newPos[k].ypos = pos[l].ypos;
			k++;
		}
	}

	for (int a = first; a <= last; a++) {	//���ĵ� ��ǥ������ ������ pos �迭�� �־��ִ� �κ�
		pos[a].xpos = newPos[a].xpos;
		pos[a].ypos = newPos[a].ypos;
	}
	free(newPos);
}

void margeSort(Pos pos[], int first, int last) {
	int mid;

	if (first < last) {
		mid = (first + last) / 2;
		margeSort(pos, first, mid);
		margeSort(pos, mid + 1, last);
		marge(pos, first, mid, last);
	}
}

int main(void) {
	int n;
	scanf("%d", &n);

	Pos pos[1000000];

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &pos[i].xpos, &pos[i].ypos);
	}
	
	margeSort(pos, 0, n-1);

	for (int i = 0; i < n; i++) {
		printf("%d %d\n", pos[i].xpos, pos[i].ypos);
	}

	return 0;
}
