; Initializes memory, i.e. M.
LXI H   21  2051
; MOV Destination Source, M stands for memory.
MOV A,M 7E
; Set counter to 00 for carry
MVI C   0E  00
; Increment memory pointer
INX H   23
; Subtract Memory from Accumulator
SUB M   96
; Jump if no carry
JNC     D2  C00C
; If carry exists, then do complement of result in Accumulator.
CM  A   2F
; Increment A
INR A   3C
; Increment Carry
INR C   0C
; Store Result to destinantion
STA     32  2055
; Move Carry to Accumulator
MOV A,C 79
; Store Carry to detination
STA     32  2056
; Terminate the program
HLT     76  

