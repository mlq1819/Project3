#include <stdio.h>


int main(int argc, char argv[]){
	FILE fp;
	if(argc>1){
		fp = fopen(argv[1], r);
		if(fp==NULL){
			goto usage ret;
		} else {
			fp = stdin;
		}
		initialize();
		
		phase0(fp);
		phase1(fp);
		phase2(fp);
		phase3(fp);
		phase4(fp);
		phase5(fp);
		phase6(fp);
		
		return 0;
		usage ret:
			printf("Usage:%s OR%s <file>\n", argv[0], argv[0]);
			return 1;
	}
}