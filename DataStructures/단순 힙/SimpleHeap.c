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
	if (GetLChildIdx(idx) > ph->numOfData) { // �ڽ� ��尡 ���� ��� (���� ���� ���� Ʈ���̱⿡ ���ʸ����ε� �ڽ��� ������ Ȯ�� ����)
		return 0;
	}
	else if (GetLChildIdx(idx) == ph->numOfData) { // �ڽ� ��尡 �ϳ��� ���
		return GetLChildIdx(idx);
	}
	else {
		if (ph->heappArr[GetLChildIdx(idx)].pr > ph->heappArr[GetRChildIdx(idx)].pr) { // ������ �ڽ� ����� �켱������ ���� ���
			return GetRChildIdx(idx);
		}
		else {	// ���� �ڽ� ����� �켱������ ���� ���
			return GetLChildIdx(idx);
		}
	}
}

void HInsert(Heap* ph, HData data, Priority pr) { // ������ ����� ��ġ���� �ö��� ������ ��ģ��.
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
	HeapElem lastElem = ph->heappArr[ph->numOfData]; //������ �ܸ� ��带 ��Ʈ ���� �ø��� ����

	int parentIdx = 1;
	int childIdx;

	while (childIdx = GetHiPriChildIdx(ph, parentIdx)) {	
		if (lastElem.pr <= ph->heappArr[childIdx].pr) { // ������ ���� �ڽ� ����� �켱���� �� �κ�
			break;
		}
		ph->heappArr[parentIdx] = ph->heappArr[childIdx];
		parentIdx = childIdx;
	}

	ph->heappArr[parentIdx] = lastElem;
	ph->numOfData -= 1;
	return retData;
}
