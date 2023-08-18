MVI B,70H
MVI C,2DH
MVI D,5EH
MVI E,13H
MVI H,FFH
loop1:MOV A,B
 loop2:CMP C
 Jp:branch
 branch:MOV B,C
 MOV C,A
 INX C
 JNZ loop2
 INX B
 JNZ loop1
HLT

