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
lea eax, [ebp+12]

push ebp
mov ebp, esp
sub esp, dword 12

jmp eax
jmp [eax]
jmp dword foo

	jz foo
	mov eax, 0x01234567
	jmp eax
foo:
	xor eax, eax

jnz foo

; Stupid NASM doesn't accept "jz dword foo1"
	jz near foo1
foo1:
	jnz near foo2
foo2:

	jnz was_true
	mov eax, 0x01234567
	jmp short not_complete
was_true:
	xor eax, eax
not_complete:

mov eax, hello

hello: db 'hello'

and esp, byte -16
sub esp, byte (3 * 4)
add esp, byte -(3 * 4)

; Field getter
mov	eax, [esp+4] 	; eax <- object
mov eax, [eax + 4]
ret

; Field setter
mov eax, [esp + 8]	; eax <- new-value
mov edx, [esp + 4]	; edx <- object
mov [edx + 4], eax
ret

mov [edx + 256], eax
mov eax, [eax + 256]

; Location getter
mov eax, 0x12345678
mov eax, [eax]
ret

; Location setter
mov eax, [esp + 4] 	; eax <- new-value
mov edx, 0xFFFFFFFF
mov [edx], eax
ret


