ASSUME CS: CODE, DS: DATA 
DATA SEGMENT 
	A DB 5 
	FACT DW ? 
DATA ENDS 
CODE SEGMENT 
START: 
	MOV AX, DATA 
	MOV DS, AX 
	MOV CL, A 
	MOV AX, 0001H 
UP: MUL CL 
	DEC CL 
	JNZ UP 
	MOV FACT, AX 
	INT 03H 
CODE ENDS 
END START 
