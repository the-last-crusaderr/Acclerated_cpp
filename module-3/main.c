// to invoke till the linker stager, use the flag -o
/*   byte - b
 *   word - w
 *   double word (int) - l
 *   quad word (pointer,long int) - q
 *   float - s
 *   double - l
 *
 *
 */

#include <stdio.h>


void mstore(long,long,long *);


int main(){
	long dest;
	mstore(2,3,&dest);
	printf("2*3=%ld",dest);
	return 0;

}






