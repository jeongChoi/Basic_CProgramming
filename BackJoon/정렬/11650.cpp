#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

//최대 N개의 좌표를 1초에 처리해야하므로 병합정렬 또는 힙정렬을 사용해야한다.

typedef struct _pos { // 좌표 구조체
	int xpos;
	int ypos;
}Pos;

void marge(Pos pos[], int first, int mid, int last) {
	int i, j, k, l;
	i = first;
	j = mid+1;
	k = first;

	Pos* newPos = (Pos*)malloc(sizeof(Pos) * (last+1));	//정렬된 좌표값을 저장할 Pos를 동적으로 할당해준다.

	while (i <= mid && j <= last) {
		if (pos[i].xpos < pos[j].xpos) {
			newPos[k].xpos = pos[i].xpos;
			newPos[k].ypos = pos[i].ypos;
			k++; i++;
		}
		else if (pos[i].xpos == pos[j].xpos) {	// 기본적인 병합정렬과 다른 부분 x의 좌표가 같은 경우
			if (pos[i].ypos < pos[j].ypos) {	// y의 좌표값을 비교해서 정렬
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

	for (int a = first; a <= last; a++) {	//정렬된 좌표값들을 원래의 pos 배열에 넣어주는 부분
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
