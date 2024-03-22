; Initializes memory, i.e. M.
LXI H   21  2051

; Move Memory to A
MOV A,M 7E

; Increment memory pointer.
INX H   23

; Move Memory to B
MOV B,M 46

; ADD B to A
ADD B   80

; Terminate the program
HLT     76

; Set data as Follows
; 2051 47
; 2052 98
; After successful execution of this program, Register A will contain,
; Sum of 47Hex and 98Hex
; (4+9)(7+8)=DF

; Note :- Sign flag is set when MSB of result is 1, and it will reset when MSB is zero.
; Equivalent binary will be 1101 1111, MSB is 1 hence Sign flag will be set.
