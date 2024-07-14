	.file	"zoro27.cpp"
	.section .rdata,"dr"
__ZStL19piecewise_construct:
	.space 1
__ZStL13allocator_arg:
	.space 1
__ZStL6ignore:
	.space 1
.lcomm __ZStL8__ioinit,1,1
	.align 4
__ZN9__gnu_cxxL21__default_lock_policyE:
	.long	2
__ZStL10defer_lock:
	.space 1
__ZStL11try_to_lock:
	.space 1
__ZStL10adopt_lock:
	.space 1
	.align 4
__ZNSt15regex_constantsL5icaseE:
	.long	1
	.align 4
__ZNSt15regex_constantsL6nosubsE:
	.long	2
	.align 4
__ZNSt15regex_constantsL8optimizeE:
	.long	4
	.align 4
__ZNSt15regex_constantsL7collateE:
	.long	8
	.align 4
__ZNSt15regex_constantsL10ECMAScriptE:
	.long	16
	.align 4
__ZNSt15regex_constantsL5basicE:
	.long	32
	.align 4
__ZNSt15regex_constantsL8extendedE:
	.long	64
	.align 4
__ZNSt15regex_constantsL3awkE:
	.long	128
	.align 4
__ZNSt15regex_constantsL4grepE:
	.long	256
	.align 4
__ZNSt15regex_constantsL5egrepE:
	.long	512
	.align 4
__ZNSt15regex_constantsL12__polynomialE:
	.long	1024
	.align 4
__ZNSt15regex_constantsL13match_defaultE:
	.space 4
	.align 4
__ZNSt15regex_constantsL13match_not_bolE:
	.long	1
	.align 4
__ZNSt15regex_constantsL13match_not_eolE:
	.long	2
	.align 4
__ZNSt15regex_constantsL13match_not_bowE:
	.long	4
	.align 4
__ZNSt15regex_constantsL13match_not_eowE:
	.long	8
	.align 4
__ZNSt15regex_constantsL9match_anyE:
	.long	16
	.align 4
__ZNSt15regex_constantsL14match_not_nullE:
	.long	32
	.align 4
__ZNSt15regex_constantsL16match_continuousE:
	.long	64
	.align 4
__ZNSt15regex_constantsL16match_prev_availE:
	.long	128
	.align 4
__ZNSt15regex_constantsL14format_defaultE:
	.space 4
	.align 4
__ZNSt15regex_constantsL10format_sedE:
	.long	256
	.align 4
__ZNSt15regex_constantsL14format_no_copyE:
	.long	512
	.align 4
__ZNSt15regex_constantsL17format_first_onlyE:
	.long	1024
	.align 4
__ZNSt15regex_constantsL13error_collateE:
	.space 4
	.align 4
__ZNSt15regex_constantsL11error_ctypeE:
	.long	1
	.align 4
__ZNSt15regex_constantsL12error_escapeE:
	.long	2
	.align 4
__ZNSt15regex_constantsL13error_backrefE:
	.long	3
	.align 4
__ZNSt15regex_constantsL11error_brackE:
	.long	4
	.align 4
__ZNSt15regex_constantsL11error_parenE:
	.long	5
	.align 4
__ZNSt15regex_constantsL11error_braceE:
	.long	6
	.align 4
__ZNSt15regex_constantsL14error_badbraceE:
	.long	7
	.align 4
__ZNSt15regex_constantsL11error_rangeE:
	.long	8
	.align 4
__ZNSt15regex_constantsL11error_spaceE:
	.long	9
	.align 4
__ZNSt15regex_constantsL15error_badrepeatE:
	.long	10
	.align 4
__ZNSt15regex_constantsL16error_complexityE:
	.long	11
	.align 4
__ZNSt15regex_constantsL11error_stackE:
	.long	12
	.align 4
__ZNSt8__detailL19_S_invalid_state_idE:
	.long	-1
	.section	.text$_ZN13mathexceptionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,"x"
	.linkonce discard
	.align 2
	.globl	__ZN13mathexceptionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.def	__ZN13mathexceptionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE;	.scl	2;	.type	32;	.endef
__ZN13mathexceptionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
LFB7687:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA7687
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$36, %esp
	.cfi_offset 3, -12
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
LEHB0:
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
LEHE0:
	subl	$4, %esp
	jmp	L4
L3:
	movl	%eax, %ebx
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movl	%ebx, %eax
	movl	%eax, (%esp)
LEHB1:
	call	__Unwind_Resume
LEHE1:
L4:
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE7687:
	.def	___gxx_personality_v0;	.scl	2;	.type	32;	.endef
	.section	.gcc_except_table,"w"
LLSDA7687:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE7687-LLSDACSB7687
LLSDACSB7687:
	.uleb128 LEHB0-LFB7687
	.uleb128 LEHE0-LEHB0
	.uleb128 L3-LFB7687
	.uleb128 0
	.uleb128 LEHB1-LFB7687
	.uleb128 LEHE1-LEHB1
	.uleb128 0
	.uleb128 0
LLSDACSE7687:
	.section	.text$_ZN13mathexceptionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,"x"
	.linkonce discard
	.section	.text$_ZN13mathexceptionD2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN13mathexceptionD2Ev
	.def	__ZN13mathexceptionD2Ev;	.scl	2;	.type	32;	.endef
__ZN13mathexceptionD2Ev:
LFB7692:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7692:
	.section	.text$_ZN10zerodivideC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,"x"
	.linkonce discard
	.align 2
	.globl	__ZN10zerodivideC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.def	__ZN10zerodivideC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE;	.scl	2;	.type	32;	.endef
__ZN10zerodivideC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
LFB7695:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZN13mathexceptionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	subl	$4, %esp 
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE7695:
	.section	.text$_ZN9operationC1Eii,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9operationC1Eii
	.def	__ZN9operationC1Eii;	.scl	2;	.type	32;	.endef
__ZN9operationC1Eii:
LFB7701:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%eax)
	movl	-4(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%edx, 4(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE7701:
	.section	.text$_ZN10zerodivideD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN10zerodivideD1Ev
	.def	__ZN10zerodivideD1Ev;	.scl	2;	.type	32;	.endef
__ZN10zerodivideD1Ev:
LFB7705:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN13mathexceptionD2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7705:
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "Divide by zero is not possible\0"
	.section	.text$_ZN9operation14print_divisionEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9operation14print_divisionEv
	.def	__ZN9operation14print_divisionEv;	.scl	2;	.type	32;	.endef
__ZN9operation14print_divisionEv:
LFB7702:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA7702
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%esi
	pushl	%ebx
	subl	$64, %esp
	.cfi_offset 6, -12
	.cfi_offset 3, -16
	movl	%ecx, -44(%ebp)
	movl	-44(%ebp), %eax
	movl	4(%eax), %eax
	testl	%eax, %eax
	jne	L10
	movl	$24, (%esp)
	call	___cxa_allocate_exception
	movl	%eax, %ebx
	leal	-9(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIcEC1Ev
	leal	-36(%ebp), %eax
	leal	-9(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	$LC0, (%esp)
	movl	%eax, %ecx
LEHB2:
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
LEHE2:
	subl	$8, %esp
	leal	-36(%ebp), %eax
	movl	%eax, (%esp)
	movl	%ebx, %ecx
LEHB3:
	call	__ZN10zerodivideC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
LEHE3:
	subl	$4, %esp
	leal	-36(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leal	-9(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIcED1Ev
	movl	$__ZN10zerodivideD1Ev, 8(%esp)
	movl	$__ZTI10zerodivide, 4(%esp)
	movl	%ebx, (%esp)
LEHB4:
	call	___cxa_throw
L10:
	movl	-44(%ebp), %eax
	movl	(%eax), %eax
	movl	-44(%ebp), %edx
	movl	4(%edx), %ebx
	cltd
	idivl	%ebx
	movl	%eax, (%esp)
	movl	$__ZSt4cout, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)
	movl	%eax, %ecx
	call	__ZNSolsEPFRSoS_E
	subl	$4, %esp
	jmp	L15
L14:
	movl	%eax, %esi
	leal	-36(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	L12
L13:
	movl	%eax, %esi
L12:
	leal	-9(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIcED1Ev
	movl	%ebx, (%esp)
	call	___cxa_free_exception
	movl	%esi, %eax
	movl	%eax, (%esp)
	call	__Unwind_Resume
LEHE4:
L15:
	leal	-8(%ebp), %esp
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7702:
	.section	.gcc_except_table,"w"
LLSDA7702:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE7702-LLSDACSB7702
LLSDACSB7702:
	.uleb128 LEHB2-LFB7702
	.uleb128 LEHE2-LEHB2
	.uleb128 L13-LFB7702
	.uleb128 0
	.uleb128 LEHB3-LFB7702
	.uleb128 LEHE3-LEHB3
	.uleb128 L14-LFB7702
	.uleb128 0
	.uleb128 LEHB4-LFB7702
	.uleb128 LEHE4-LEHB4
	.uleb128 0
	.uleb128 0
LLSDACSE7702:
	.section	.text$_ZN9operation14print_divisionEv,"x"
	.linkonce discard
	.def	___main;	.scl	2;	.type	32;	.endef
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB7712:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA7712
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$36, %esp
	call	___main
	leal	-24(%ebp), %eax
	movl	$0, 4(%esp)
	movl	$4, (%esp)
	movl	%eax, %ecx
	call	__ZN9operationC1Eii
	subl	$8, %esp
	leal	-24(%ebp), %eax
	movl	%eax, %ecx
LEHB5:
	call	__ZN9operation14print_divisionEv
LEHE5:
L22:
	movl	$0, %eax
	jmp	L24
L23:
	cmpl	$1, %edx
	je	L20
	cmpl	$2, %edx
	je	L21
	movl	%eax, (%esp)
LEHB6:
	call	__Unwind_Resume
LEHE6:
L20:
	movl	%eax, (%esp)
	call	___cxa_begin_catch
	movl	%eax, -12(%ebp)
	call	___cxa_end_catch
	jmp	L22
L21:
	movl	%eax, (%esp)
	call	___cxa_begin_catch
	movl	%eax, -16(%ebp)
	call	___cxa_end_catch
	jmp	L22
L24:
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7712:
	.section	.gcc_except_table,"w"
	.align 4
LLSDA7712:
	.byte	0xff
	.byte	0
	.uleb128 LLSDATT7712-LLSDATTD7712
LLSDATTD7712:
	.byte	0x1
	.uleb128 LLSDACSE7712-LLSDACSB7712
LLSDACSB7712:
	.uleb128 LEHB5-LFB7712
	.uleb128 LEHE5-LEHB5
	.uleb128 L23-LFB7712
	.uleb128 0x3
	.uleb128 LEHB6-LFB7712
	.uleb128 LEHE6-LEHB6
	.uleb128 0
	.uleb128 0
LLSDACSE7712:
	.byte	0x2
	.byte	0
	.byte	0x1
	.byte	0x7d
	.align 4
	.long	__ZTI13mathexception
	.long	__ZTI10zerodivide
LLSDATT7712:
	.text
	.globl	__ZTI13mathexception
	.section	.rdata$_ZTI13mathexception,"dr"
	.linkonce same_size
	.align 4
__ZTI13mathexception:
	.long	__ZTVN10__cxxabiv117__class_type_infoE+8
	.long	__ZTS13mathexception
	.globl	__ZTS13mathexception
	.section	.rdata$_ZTS13mathexception,"dr"
	.linkonce same_size
	.align 4
__ZTS13mathexception:
	.ascii "13mathexception\0"
	.globl	__ZTI10zerodivide
	.section	.rdata$_ZTI10zerodivide,"dr"
	.linkonce same_size
	.align 4
__ZTI10zerodivide:
	.long	__ZTVN10__cxxabiv120__si_class_type_infoE+8
	.long	__ZTS10zerodivide
	.long	__ZTI13mathexception
	.globl	__ZTS10zerodivide
	.section	.rdata$_ZTS10zerodivide,"dr"
	.linkonce same_size
	.align 4
__ZTS10zerodivide:
	.ascii "10zerodivide\0"
	.text
	.def	___tcf_0;	.scl	3;	.type	32;	.endef
___tcf_0:
LFB8265:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitD1Ev
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8265:
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
LFB8264:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	L28
	cmpl	$65535, 12(%ebp)
	jne	L28
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitC1Ev
	movl	$___tcf_0, (%esp)
	call	_atexit
L28:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8264:
	.def	__GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I_main:
LFB8266:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8266:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I_main
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_;	.scl	2;	.type	32;	.endef
	.def	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev;	.scl	2;	.type	32;	.endef
	.def	__Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	___cxa_allocate_exception;	.scl	2;	.type	32;	.endef
	.def	__ZNSaIcEC1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_;	.scl	2;	.type	32;	.endef
	.def	__ZNSaIcED1Ev;	.scl	2;	.type	32;	.endef
	.def	___cxa_throw;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	___cxa_free_exception;	.scl	2;	.type	32;	.endef
	.def	___cxa_begin_catch;	.scl	2;	.type	32;	.endef
	.def	___cxa_end_catch;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	_atexit;	.scl	2;	.type	32;	.endef
