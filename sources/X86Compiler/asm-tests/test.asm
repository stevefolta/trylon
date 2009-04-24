bits 32

; NOTE: mov dst, src

nop
push eax
mov eax,[ebp+12]
mov [ebp+12], eax
push dword [ebp+12]
push dword [ebp-12]
push dword [ebp-256]
push 0xFF012345
mov eax, 0x01234567
call [eax]
call eax
leave
ret
xor eax, eax
add esp, 12
add esp, byte 12
cmp eax, byte 0
cmp dword [ebp-8], byte 0

push ebp
mov ebp, esp
sub esp, dword 12

	jz foo
	mov eax, 0x01234567
	jmp [eax]
foo:
	xor eax, eax

jnz foo


