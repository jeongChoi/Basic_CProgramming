#ifndef __MAN_H__
#define __MAN_H__

typedef struct _man {
	char num[30];
	char name[10];
}Man;

Man* makeMan(char* num, char* name);

#endif
