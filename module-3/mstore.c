
// to compile at lowest optimisation level -Og
// to convert into assembly -S
// to convert into object file -c
// objdump is the disassembler can be invoked with -d flag on object file

long mult(long a,long b){
	return a*b;
} 



void mstore(long x,long y,long *dest){
	long temp = mult(x,y);
	*dest = temp;
}



