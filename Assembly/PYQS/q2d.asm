; Move FF to A
MVI A   3E  FF

; Move FF to B
MVI B   06  FF

; Compare B with A
CMP B   B8
; This is a 1-byte instruction. It compares the data byte in the register or memory with the contents of accumulator.
; If A less than (Register/Memory), the CY(Carry) flag is set(1) and Zero flag is reset(0).
; If A equals to (R/M), the Zero flag is set(1) and CY(Carry) flag is reset(0).
; If A greater than (R/M), the CY(Carry) and Zero flag are reset(0).
; In this case, Zero=1, CY(Carry)=0

; Terminate Programm
HLT     76

 