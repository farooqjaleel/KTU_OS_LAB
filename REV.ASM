DATA SEGMENT
  STR1 DB 'STRING_REVERSE','$'  
      STRLEN1 DW $-STR1
  STRREV DB 20 DUP(' ')
DATA ENDS

CODE SEGMENT
  ASSUME CS:CODE, DS:DATA
  BEGIN:
    MOV AX, DATA
    MOV DS, AX
    MOV ES, AX
    MOV CX, STRLEN1
    ADD CX, -2
    LEA SI, STR1
    LEA DI, STRREV
    ADD SI, STRLEN1
    ADD SI, -2
    L1:
       MOV AL, [SI]
       MOV [DI], AL
       DEC SI
       INC DI
       LOOP L1
       MOV AL, [SI]
       MOV [DI], AL
       INC DI
       MOV DL, '$'
       MOV [DI], DL
    PRINT:
       MOV AH, 09H
       LEA DX, STRREV
       INT 21H
EXIT:
       MOV AX, 4C00H
       INT 21H
CODE ENDS
END BEGIN
