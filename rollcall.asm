; Algorithm
; Predefined commands.
; Assembly
; Hex
; Initializes memory, i.e. M.
LXI H   21 C100
; MOV Destination Source, M stands for memory.
MOV A,M 7E
; We can use any register.
MOV C,A 4F
; DCR is Decrement
DCR C   0D
; Adds memory to acumulator i.e. Register A.
ADD M   86
DCR C   0D
; JNZ stands for Jump No Zero, 
; i.e Jumps Program Counter to given address if above register value is not zero.
JNZ     C2
; Store A to given register/memory address.
STA     32 C101
; HLT stands for halt, stops processing.
HLT     76

25
0