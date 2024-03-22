; We can use any register.
MVI C   0E 03
; MOV Destination Source, M stands for memory.
MVI A   3E 05
; DCR is Decrement
DCR C   0D
; Adds memory to acumulator i.e. Register A.
ADI     C6 05
DCR C   0D
; JNZ stands for Jump No Zero, 
; i.e Jumps Program Counter to given address if above register value is not zero.
JNZ     C2
; HLT stands for halt, stops processing.
HLT     76