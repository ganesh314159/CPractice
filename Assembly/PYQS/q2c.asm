; Move 07H to Accmulator
MVI A   3E  07

; Rotate Accumulator to right, Which will transfer unit place digit to carry.
RAR     1F
; Accmulator consists 07 Hex
; Which is equivalent of 0000 0111 in Binary
; If we rotate it to right, unit place's 1 will go to carry
; And Accumulator will show 03 as the data in Accumulator is 0000 0011,
; Which is equivalent of 03 in Hex.

; Perform bitwise OR Operation of A with A
ORA A   B7
; Here A contains 03 which is 11 in binary
; OR Operation = (1+1)(1+1)=11

; Terminate Program
HLT     76

