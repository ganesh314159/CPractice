; Initializes memory, i.e. M.
LXI H   21  2051
; MOV Destination Source, M stands for memory.
MOV A,M 7E
; Increment memory pointer
INX H   23
; Subtract Memory from Accumulator
SUB M   96
; Terminate the program
HLT     76  

; Set Memory as follows
; 2051 77
; 2052 54

; Result of this subtraction will be,
; (7-5)(7-4)=23