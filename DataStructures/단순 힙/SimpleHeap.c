#include "SimpleHeap.h"

void HeapInit(Heap* ph) {
	ph->numOfData = 0;
}

int HIsEmpty(Heap* ph) {
	if (ph->numOfData == 0) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

int GetParentIdx(int idx) {
	return idx / 2;
}

int GetLChildIdx(int idx) {
	return idx * 2;
}

int GetRChildIdx(int idx) {
	return GetLChildIdx(idx)+1;	
}

int GetHiPriChildIdx(Heap* ph, int idx) {
	if (GetLChildIdx(idx) > ph->numOfData) { // 자식 노드가 없는 경우 (힙은 완전 이진 트리이기에 왼쪽만으로도 자식의 유무를 확인 가능)
		return 0;
	}
	else if (GetLChildIdx(idx) == ph->numOfData) { // 자식 노드가 하나인 경우
		return GetLChildIdx(idx);
	}
	else {
		if (ph->heappArr[GetLChildIdx(idx)].pr > ph->heappArr[GetRChildIdx(idx)].pr) { // 오른쪽 자식 노드의 우선순위가 높은 경우
			return GetRChildIdx(idx);
		}
		else {	// 왼쪽 자식 노드의 우선순위가 높은 경우
			return GetLChildIdx(idx);
		}
	}
}

void HInsert(Heap* ph, HData data, Priority pr) { // 마지막 노드의 위치부터 올라기는 과정을 거친다.
	int idx = ph->numOfData + 1;
	HeapElem nelem = { pr, data };

	while (idx != 1) {
		if (pr < ph->heappArr[GetParentIdx(idx)].pr) {
			ph->heappArr[idx] = ph->heappArr[GetParentIdx(idx)];
			idx = GetParentIdx(idx);
		}
		else {
			break;
		}
	}

	ph->heappArr[idx] = nelem;
	ph->numOfData++;
}

HData HDelete(Heap* ph) {
	HData retData = (ph->heappArr[1]).data;
	HeapElem lastElem = ph->heappArr[ph->numOfData]; //마지막 단말 노드를 루트 노드로 올리기 위해

	int parentIdx = 1;
	int childIdx;

	while (childIdx = GetHiPriChildIdx(ph, parentIdx)) {	
		if (lastElem.pr <= ph->heappArr[childIdx].pr) { // 마지막 노드와 자식 노드의 우선순위 비교 부분
			break;
		}
		ph->heappArr[parentIdx] = ph->heappArr[childIdx];
		parentIdx = childIdx;
	}

	ph->heappArr[parentIdx] = lastElem;
	ph->numOfData -= 1;
	return retData;
}
