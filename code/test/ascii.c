// ThIếu cmt

#include "syscall.h"

int main() {
	int i;

	for(i = 32; i < 127; i++){
		PrintNum(i);
		PrintChar('\t');
		PrintChar((char)i);
		PrintChar('\n');
	}
	Halt();
	  /* not reached */
}