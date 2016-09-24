
a.out:     file format elf32-i386


Disassembly of section .init:

080486e4 <_init>:
 80486e4:	53                   	push   %ebx
 80486e5:	83 ec 08             	sub    $0x8,%esp
 80486e8:	e8 33 01 00 00       	call   8048820 <__x86.get_pc_thunk.bx>
 80486ed:	81 c3 73 1e 00 00    	add    $0x1e73,%ebx
 80486f3:	8b 83 fc ff ff ff    	mov    -0x4(%ebx),%eax
 80486f9:	85 c0                	test   %eax,%eax
 80486fb:	74 05                	je     8048702 <_init+0x1e>
 80486fd:	e8 4e 00 00 00       	call   8048750 <__gmon_start__@plt>
 8048702:	e8 f9 01 00 00       	call   8048900 <frame_dummy>
 8048707:	e8 f4 07 00 00       	call   8048f00 <__do_global_ctors_aux>
 804870c:	83 c4 08             	add    $0x8,%esp
 804870f:	5b                   	pop    %ebx
 8048710:	c3                   	ret    

Disassembly of section .plt:

08048720 <_ZNSolsEi@plt-0x10>:
 8048720:	ff 35 64 a5 04 08    	pushl  0x804a564
 8048726:	ff 25 68 a5 04 08    	jmp    *0x804a568
 804872c:	00 00                	add    %al,(%eax)
	...

08048730 <_ZNSolsEi@plt>:
 8048730:	ff 25 6c a5 04 08    	jmp    *0x804a56c
 8048736:	68 00 00 00 00       	push   $0x0
 804873b:	e9 e0 ff ff ff       	jmp    8048720 <_init+0x3c>

08048740 <__cxa_atexit@plt>:
 8048740:	ff 25 70 a5 04 08    	jmp    *0x804a570
 8048746:	68 08 00 00 00       	push   $0x8
 804874b:	e9 d0 ff ff ff       	jmp    8048720 <_init+0x3c>

08048750 <__gmon_start__@plt>:
 8048750:	ff 25 74 a5 04 08    	jmp    *0x804a574
 8048756:	68 10 00 00 00       	push   $0x10
 804875b:	e9 c0 ff ff ff       	jmp    8048720 <_init+0x3c>

08048760 <_ZdlPv@plt>:
 8048760:	ff 25 78 a5 04 08    	jmp    *0x804a578
 8048766:	68 18 00 00 00       	push   $0x18
 804876b:	e9 b0 ff ff ff       	jmp    8048720 <_init+0x3c>

08048770 <_ZNSt8ios_base4InitC1Ev@plt>:
 8048770:	ff 25 7c a5 04 08    	jmp    *0x804a57c
 8048776:	68 20 00 00 00       	push   $0x20
 804877b:	e9 a0 ff ff ff       	jmp    8048720 <_init+0x3c>

08048780 <__libc_start_main@plt>:
 8048780:	ff 25 80 a5 04 08    	jmp    *0x804a580
 8048786:	68 28 00 00 00       	push   $0x28
 804878b:	e9 90 ff ff ff       	jmp    8048720 <_init+0x3c>

08048790 <_ZNSt8ios_base4InitD1Ev@plt>:
 8048790:	ff 25 84 a5 04 08    	jmp    *0x804a584
 8048796:	68 30 00 00 00       	push   $0x30
 804879b:	e9 80 ff ff ff       	jmp    8048720 <_init+0x3c>

080487a0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>:
 80487a0:	ff 25 88 a5 04 08    	jmp    *0x804a588
 80487a6:	68 38 00 00 00       	push   $0x38
 80487ab:	e9 70 ff ff ff       	jmp    8048720 <_init+0x3c>

080487b0 <_ZNSolsEPFRSoS_E@plt>:
 80487b0:	ff 25 8c a5 04 08    	jmp    *0x804a58c
 80487b6:	68 40 00 00 00       	push   $0x40
 80487bb:	e9 60 ff ff ff       	jmp    8048720 <_init+0x3c>

080487c0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@plt>:
 80487c0:	ff 25 90 a5 04 08    	jmp    *0x804a590
 80487c6:	68 48 00 00 00       	push   $0x48
 80487cb:	e9 50 ff ff ff       	jmp    8048720 <_init+0x3c>

080487d0 <__gxx_personality_v0@plt>:
 80487d0:	ff 25 94 a5 04 08    	jmp    *0x804a594
 80487d6:	68 50 00 00 00       	push   $0x50
 80487db:	e9 40 ff ff ff       	jmp    8048720 <_init+0x3c>

080487e0 <_Unwind_Resume@plt>:
 80487e0:	ff 25 98 a5 04 08    	jmp    *0x804a598
 80487e6:	68 58 00 00 00       	push   $0x58
 80487eb:	e9 30 ff ff ff       	jmp    8048720 <_init+0x3c>

Disassembly of section .text:

080487f0 <_start>:
 80487f0:	31 ed                	xor    %ebp,%ebp
 80487f2:	5e                   	pop    %esi
 80487f3:	89 e1                	mov    %esp,%ecx
 80487f5:	83 e4 f0             	and    $0xfffffff0,%esp
 80487f8:	50                   	push   %eax
 80487f9:	54                   	push   %esp
 80487fa:	52                   	push   %edx
 80487fb:	68 f0 8e 04 08       	push   $0x8048ef0
 8048800:	68 80 8e 04 08       	push   $0x8048e80
 8048805:	51                   	push   %ecx
 8048806:	56                   	push   %esi
 8048807:	68 30 89 04 08       	push   $0x8048930
 804880c:	e8 6f ff ff ff       	call   8048780 <__libc_start_main@plt>
 8048811:	f4                   	hlt    
 8048812:	66 90                	xchg   %ax,%ax
 8048814:	66 90                	xchg   %ax,%ax
 8048816:	66 90                	xchg   %ax,%ax
 8048818:	66 90                	xchg   %ax,%ax
 804881a:	66 90                	xchg   %ax,%ax
 804881c:	66 90                	xchg   %ax,%ax
 804881e:	66 90                	xchg   %ax,%ax

08048820 <__x86.get_pc_thunk.bx>:
 8048820:	8b 1c 24             	mov    (%esp),%ebx
 8048823:	c3                   	ret    
 8048824:	66 90                	xchg   %ax,%ax
 8048826:	66 90                	xchg   %ax,%ax
 8048828:	66 90                	xchg   %ax,%ax
 804882a:	66 90                	xchg   %ax,%ax
 804882c:	66 90                	xchg   %ax,%ax
 804882e:	66 90                	xchg   %ax,%ax

08048830 <deregister_tm_clones>:
 8048830:	b8 a7 a5 04 08       	mov    $0x804a5a7,%eax
 8048835:	2d a4 a5 04 08       	sub    $0x804a5a4,%eax
 804883a:	83 f8 06             	cmp    $0x6,%eax
 804883d:	77 01                	ja     8048840 <deregister_tm_clones+0x10>
 804883f:	c3                   	ret    
 8048840:	b8 00 00 00 00       	mov    $0x0,%eax
 8048845:	85 c0                	test   %eax,%eax
 8048847:	74 f6                	je     804883f <deregister_tm_clones+0xf>
 8048849:	55                   	push   %ebp
 804884a:	89 e5                	mov    %esp,%ebp
 804884c:	83 ec 18             	sub    $0x18,%esp
 804884f:	c7 04 24 a4 a5 04 08 	movl   $0x804a5a4,(%esp)
 8048856:	ff d0                	call   *%eax
 8048858:	c9                   	leave  
 8048859:	c3                   	ret    
 804885a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

08048860 <register_tm_clones>:
 8048860:	b8 a4 a5 04 08       	mov    $0x804a5a4,%eax
 8048865:	2d a4 a5 04 08       	sub    $0x804a5a4,%eax
 804886a:	c1 f8 02             	sar    $0x2,%eax
 804886d:	89 c2                	mov    %eax,%edx
 804886f:	c1 ea 1f             	shr    $0x1f,%edx
 8048872:	01 d0                	add    %edx,%eax
 8048874:	d1 f8                	sar    %eax
 8048876:	75 01                	jne    8048879 <register_tm_clones+0x19>
 8048878:	c3                   	ret    
 8048879:	ba 00 00 00 00       	mov    $0x0,%edx
 804887e:	85 d2                	test   %edx,%edx
 8048880:	74 f6                	je     8048878 <register_tm_clones+0x18>
 8048882:	55                   	push   %ebp
 8048883:	89 e5                	mov    %esp,%ebp
 8048885:	83 ec 18             	sub    $0x18,%esp
 8048888:	89 44 24 04          	mov    %eax,0x4(%esp)
 804888c:	c7 04 24 a4 a5 04 08 	movl   $0x804a5a4,(%esp)
 8048893:	ff d2                	call   *%edx
 8048895:	c9                   	leave  
 8048896:	c3                   	ret    
 8048897:	89 f6                	mov    %esi,%esi
 8048899:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

080488a0 <__do_global_dtors_aux>:
 80488a0:	80 3d 0c a7 04 08 00 	cmpb   $0x0,0x804a70c
 80488a7:	75 50                	jne    80488f9 <__do_global_dtors_aux+0x59>
 80488a9:	55                   	push   %ebp
 80488aa:	89 e5                	mov    %esp,%ebp
 80488ac:	53                   	push   %ebx
 80488ad:	bb 74 a4 04 08       	mov    $0x804a474,%ebx
 80488b2:	83 ec 04             	sub    $0x4,%esp
 80488b5:	a1 10 a7 04 08       	mov    0x804a710,%eax
 80488ba:	81 eb 70 a4 04 08    	sub    $0x804a470,%ebx
 80488c0:	c1 fb 02             	sar    $0x2,%ebx
 80488c3:	83 eb 01             	sub    $0x1,%ebx
 80488c6:	39 d8                	cmp    %ebx,%eax
 80488c8:	73 1e                	jae    80488e8 <__do_global_dtors_aux+0x48>
 80488ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 80488d0:	83 c0 01             	add    $0x1,%eax
 80488d3:	a3 10 a7 04 08       	mov    %eax,0x804a710
 80488d8:	ff 14 85 70 a4 04 08 	call   *0x804a470(,%eax,4)
 80488df:	a1 10 a7 04 08       	mov    0x804a710,%eax
 80488e4:	39 d8                	cmp    %ebx,%eax
 80488e6:	72 e8                	jb     80488d0 <__do_global_dtors_aux+0x30>
 80488e8:	e8 43 ff ff ff       	call   8048830 <deregister_tm_clones>
 80488ed:	c6 05 0c a7 04 08 01 	movb   $0x1,0x804a70c
 80488f4:	83 c4 04             	add    $0x4,%esp
 80488f7:	5b                   	pop    %ebx
 80488f8:	5d                   	pop    %ebp
 80488f9:	c3                   	ret    
 80488fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

08048900 <frame_dummy>:
 8048900:	a1 78 a4 04 08       	mov    0x804a478,%eax
 8048905:	85 c0                	test   %eax,%eax
 8048907:	74 1f                	je     8048928 <frame_dummy+0x28>
 8048909:	b8 00 00 00 00       	mov    $0x0,%eax
 804890e:	85 c0                	test   %eax,%eax
 8048910:	74 16                	je     8048928 <frame_dummy+0x28>
 8048912:	55                   	push   %ebp
 8048913:	89 e5                	mov    %esp,%ebp
 8048915:	83 ec 18             	sub    $0x18,%esp
 8048918:	c7 04 24 78 a4 04 08 	movl   $0x804a478,(%esp)
 804891f:	ff d0                	call   *%eax
 8048921:	c9                   	leave  
 8048922:	e9 39 ff ff ff       	jmp    8048860 <register_tm_clones>
 8048927:	90                   	nop
 8048928:	e9 33 ff ff ff       	jmp    8048860 <register_tm_clones>
 804892d:	66 90                	xchg   %ax,%ax
 804892f:	90                   	nop

08048930 <main>:
 8048930:	55                   	push   %ebp
 8048931:	89 e5                	mov    %esp,%ebp
 8048933:	53                   	push   %ebx
 8048934:	83 e4 f0             	and    $0xfffffff0,%esp
 8048937:	83 ec 50             	sub    $0x50,%esp
 804893a:	8d 44 24 48          	lea    0x48(%esp),%eax
 804893e:	89 04 24             	mov    %eax,(%esp)
 8048941:	e8 f8 00 00 00       	call   8048a3e <_ZN1AC1Ev>
 8048946:	8d 44 24 3c          	lea    0x3c(%esp),%eax
 804894a:	89 04 24             	mov    %eax,(%esp)
 804894d:	e8 aa 01 00 00       	call   8048afc <_ZN1BC1Ev>
 8048952:	8d 44 24 30          	lea    0x30(%esp),%eax
 8048956:	89 04 24             	mov    %eax,(%esp)
 8048959:	e8 a8 02 00 00       	call   8048c06 <_ZN1CC1Ev>
 804895e:	8d 44 24 14          	lea    0x14(%esp),%eax
 8048962:	89 04 24             	mov    %eax,(%esp)
 8048965:	e8 a6 03 00 00       	call   8048d10 <_ZN1DC1Ev>
 804896a:	bb 00 00 00 00       	mov    $0x0,%ebx
 804896f:	8d 44 24 14          	lea    0x14(%esp),%eax
 8048973:	89 04 24             	mov    %eax,(%esp)
 8048976:	e8 39 04 00 00       	call   8048db4 <_ZN1DD1Ev>
 804897b:	8d 44 24 30          	lea    0x30(%esp),%eax
 804897f:	89 04 24             	mov    %eax,(%esp)
 8048982:	e8 f9 02 00 00       	call   8048c80 <_ZN1CD1Ev>
 8048987:	8d 44 24 3c          	lea    0x3c(%esp),%eax
 804898b:	89 04 24             	mov    %eax,(%esp)
 804898e:	e8 e3 01 00 00       	call   8048b76 <_ZN1BD1Ev>
 8048993:	8d 44 24 48          	lea    0x48(%esp),%eax
 8048997:	89 04 24             	mov    %eax,(%esp)
 804899a:	e8 f5 00 00 00       	call   8048a94 <_ZN1AD1Ev>
 804899f:	89 d8                	mov    %ebx,%eax
 80489a1:	eb 3a                	jmp    80489dd <main+0xad>
 80489a3:	89 c3                	mov    %eax,%ebx
 80489a5:	8d 44 24 30          	lea    0x30(%esp),%eax
 80489a9:	89 04 24             	mov    %eax,(%esp)
 80489ac:	e8 cf 02 00 00       	call   8048c80 <_ZN1CD1Ev>
 80489b1:	eb 02                	jmp    80489b5 <main+0x85>
 80489b3:	89 c3                	mov    %eax,%ebx
 80489b5:	8d 44 24 3c          	lea    0x3c(%esp),%eax
 80489b9:	89 04 24             	mov    %eax,(%esp)
 80489bc:	e8 b5 01 00 00       	call   8048b76 <_ZN1BD1Ev>
 80489c1:	eb 02                	jmp    80489c5 <main+0x95>
 80489c3:	89 c3                	mov    %eax,%ebx
 80489c5:	8d 44 24 48          	lea    0x48(%esp),%eax
 80489c9:	89 04 24             	mov    %eax,(%esp)
 80489cc:	e8 c3 00 00 00       	call   8048a94 <_ZN1AD1Ev>
 80489d1:	89 d8                	mov    %ebx,%eax
 80489d3:	eb 00                	jmp    80489d5 <main+0xa5>
 80489d5:	89 04 24             	mov    %eax,(%esp)
 80489d8:	e8 03 fe ff ff       	call   80487e0 <_Unwind_Resume@plt>
 80489dd:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80489e0:	c9                   	leave  
 80489e1:	c3                   	ret    

080489e2 <_Z41__static_initialization_and_destruction_0ii>:
 80489e2:	55                   	push   %ebp
 80489e3:	89 e5                	mov    %esp,%ebp
 80489e5:	83 ec 18             	sub    $0x18,%esp
 80489e8:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
 80489ec:	75 31                	jne    8048a1f <_Z41__static_initialization_and_destruction_0ii+0x3d>
 80489ee:	81 7d 0c ff ff 00 00 	cmpl   $0xffff,0xc(%ebp)
 80489f5:	75 28                	jne    8048a1f <_Z41__static_initialization_and_destruction_0ii+0x3d>
 80489f7:	c7 04 24 14 a7 04 08 	movl   $0x804a714,(%esp)
 80489fe:	e8 6d fd ff ff       	call   8048770 <_ZNSt8ios_base4InitC1Ev@plt>
 8048a03:	c7 44 24 08 a0 a5 04 	movl   $0x804a5a0,0x8(%esp)
 8048a0a:	08 
 8048a0b:	c7 44 24 04 14 a7 04 	movl   $0x804a714,0x4(%esp)
 8048a12:	08 
 8048a13:	c7 04 24 90 87 04 08 	movl   $0x8048790,(%esp)
 8048a1a:	e8 21 fd ff ff       	call   8048740 <__cxa_atexit@plt>
 8048a1f:	c9                   	leave  
 8048a20:	c3                   	ret    

08048a21 <_GLOBAL__sub_I_main>:
 8048a21:	55                   	push   %ebp
 8048a22:	89 e5                	mov    %esp,%ebp
 8048a24:	83 ec 18             	sub    $0x18,%esp
 8048a27:	c7 44 24 04 ff ff 00 	movl   $0xffff,0x4(%esp)
 8048a2e:	00 
 8048a2f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8048a36:	e8 a7 ff ff ff       	call   80489e2 <_Z41__static_initialization_and_destruction_0ii>
 8048a3b:	c9                   	leave  
 8048a3c:	c3                   	ret    
 8048a3d:	90                   	nop

08048a3e <_ZN1AC1Ev>:
 8048a3e:	55                   	push   %ebp
 8048a3f:	89 e5                	mov    %esp,%ebp
 8048a41:	53                   	push   %ebx
 8048a42:	83 ec 14             	sub    $0x14,%esp
 8048a45:	8b 45 08             	mov    0x8(%ebp),%eax
 8048a48:	c7 00 c8 8f 04 08    	movl   $0x8048fc8,(%eax)
 8048a4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8048a51:	c7 40 04 09 00 00 00 	movl   $0x9,0x4(%eax)
 8048a58:	8b 45 08             	mov    0x8(%ebp),%eax
 8048a5b:	8b 58 04             	mov    0x4(%eax),%ebx
 8048a5e:	c7 44 24 04 68 8f 04 	movl   $0x8048f68,0x4(%esp)
 8048a65:	08 
 8048a66:	c7 04 24 00 a6 04 08 	movl   $0x804a600,(%esp)
 8048a6d:	e8 2e fd ff ff       	call   80487a0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
 8048a72:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8048a76:	89 04 24             	mov    %eax,(%esp)
 8048a79:	e8 b2 fc ff ff       	call   8048730 <_ZNSolsEi@plt>
 8048a7e:	c7 44 24 04 c0 87 04 	movl   $0x80487c0,0x4(%esp)
 8048a85:	08 
 8048a86:	89 04 24             	mov    %eax,(%esp)
 8048a89:	e8 22 fd ff ff       	call   80487b0 <_ZNSolsEPFRSoS_E@plt>
 8048a8e:	83 c4 14             	add    $0x14,%esp
 8048a91:	5b                   	pop    %ebx
 8048a92:	5d                   	pop    %ebp
 8048a93:	c3                   	ret    

08048a94 <_ZN1AD1Ev>:
 8048a94:	55                   	push   %ebp
 8048a95:	89 e5                	mov    %esp,%ebp
 8048a97:	83 ec 18             	sub    $0x18,%esp
 8048a9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8048a9d:	c7 00 c8 8f 04 08    	movl   $0x8048fc8,(%eax)
 8048aa3:	c7 44 24 04 6b 8f 04 	movl   $0x8048f6b,0x4(%esp)
 8048aaa:	08 
 8048aab:	c7 04 24 00 a6 04 08 	movl   $0x804a600,(%esp)
 8048ab2:	e8 e9 fc ff ff       	call   80487a0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
 8048ab7:	c7 44 24 04 c0 87 04 	movl   $0x80487c0,0x4(%esp)
 8048abe:	08 
 8048abf:	89 04 24             	mov    %eax,(%esp)
 8048ac2:	e8 e9 fc ff ff       	call   80487b0 <_ZNSolsEPFRSoS_E@plt>
 8048ac7:	b8 00 00 00 00       	mov    $0x0,%eax
 8048acc:	85 c0                	test   %eax,%eax
 8048ace:	74 0b                	je     8048adb <_ZN1AD1Ev+0x47>
 8048ad0:	8b 45 08             	mov    0x8(%ebp),%eax
 8048ad3:	89 04 24             	mov    %eax,(%esp)
 8048ad6:	e8 85 fc ff ff       	call   8048760 <_ZdlPv@plt>
 8048adb:	c9                   	leave  
 8048adc:	c3                   	ret    
 8048add:	90                   	nop

08048ade <_ZN1AD0Ev>:
 8048ade:	55                   	push   %ebp
 8048adf:	89 e5                	mov    %esp,%ebp
 8048ae1:	83 ec 18             	sub    $0x18,%esp
 8048ae4:	8b 45 08             	mov    0x8(%ebp),%eax
 8048ae7:	89 04 24             	mov    %eax,(%esp)
 8048aea:	e8 a5 ff ff ff       	call   8048a94 <_ZN1AD1Ev>
 8048aef:	8b 45 08             	mov    0x8(%ebp),%eax
 8048af2:	89 04 24             	mov    %eax,(%esp)
 8048af5:	e8 66 fc ff ff       	call   8048760 <_ZdlPv@plt>
 8048afa:	c9                   	leave  
 8048afb:	c3                   	ret    

08048afc <_ZN1BC1Ev>:
 8048afc:	55                   	push   %ebp
 8048afd:	89 e5                	mov    %esp,%ebp
 8048aff:	53                   	push   %ebx
 8048b00:	83 ec 14             	sub    $0x14,%esp
 8048b03:	8b 45 08             	mov    0x8(%ebp),%eax
 8048b06:	89 04 24             	mov    %eax,(%esp)
 8048b09:	e8 30 ff ff ff       	call   8048a3e <_ZN1AC1Ev>
 8048b0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8048b11:	c7 00 b8 8f 04 08    	movl   $0x8048fb8,(%eax)
 8048b17:	8b 45 08             	mov    0x8(%ebp),%eax
 8048b1a:	c7 40 08 0a 00 00 00 	movl   $0xa,0x8(%eax)
 8048b21:	8b 45 08             	mov    0x8(%ebp),%eax
 8048b24:	8b 58 08             	mov    0x8(%eax),%ebx
 8048b27:	c7 44 24 04 6e 8f 04 	movl   $0x8048f6e,0x4(%esp)
 8048b2e:	08 
 8048b2f:	c7 04 24 00 a6 04 08 	movl   $0x804a600,(%esp)
 8048b36:	e8 65 fc ff ff       	call   80487a0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
 8048b3b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8048b3f:	89 04 24             	mov    %eax,(%esp)
 8048b42:	e8 e9 fb ff ff       	call   8048730 <_ZNSolsEi@plt>
 8048b47:	c7 44 24 04 c0 87 04 	movl   $0x80487c0,0x4(%esp)
 8048b4e:	08 
 8048b4f:	89 04 24             	mov    %eax,(%esp)
 8048b52:	e8 59 fc ff ff       	call   80487b0 <_ZNSolsEPFRSoS_E@plt>
 8048b57:	eb 17                	jmp    8048b70 <_ZN1BC1Ev+0x74>
 8048b59:	89 c3                	mov    %eax,%ebx
 8048b5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8048b5e:	89 04 24             	mov    %eax,(%esp)
 8048b61:	e8 2e ff ff ff       	call   8048a94 <_ZN1AD1Ev>
 8048b66:	89 d8                	mov    %ebx,%eax
 8048b68:	89 04 24             	mov    %eax,(%esp)
 8048b6b:	e8 70 fc ff ff       	call   80487e0 <_Unwind_Resume@plt>
 8048b70:	83 c4 14             	add    $0x14,%esp
 8048b73:	5b                   	pop    %ebx
 8048b74:	5d                   	pop    %ebp
 8048b75:	c3                   	ret    

08048b76 <_ZN1BD1Ev>:
 8048b76:	55                   	push   %ebp
 8048b77:	89 e5                	mov    %esp,%ebp
 8048b79:	53                   	push   %ebx
 8048b7a:	83 ec 14             	sub    $0x14,%esp
 8048b7d:	8b 45 08             	mov    0x8(%ebp),%eax
 8048b80:	c7 00 b8 8f 04 08    	movl   $0x8048fb8,(%eax)
 8048b86:	c7 44 24 04 71 8f 04 	movl   $0x8048f71,0x4(%esp)
 8048b8d:	08 
 8048b8e:	c7 04 24 00 a6 04 08 	movl   $0x804a600,(%esp)
 8048b95:	e8 06 fc ff ff       	call   80487a0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
 8048b9a:	c7 44 24 04 c0 87 04 	movl   $0x80487c0,0x4(%esp)
 8048ba1:	08 
 8048ba2:	89 04 24             	mov    %eax,(%esp)
 8048ba5:	e8 06 fc ff ff       	call   80487b0 <_ZNSolsEPFRSoS_E@plt>
 8048baa:	8b 45 08             	mov    0x8(%ebp),%eax
 8048bad:	89 04 24             	mov    %eax,(%esp)
 8048bb0:	e8 df fe ff ff       	call   8048a94 <_ZN1AD1Ev>
 8048bb5:	b8 00 00 00 00       	mov    $0x0,%eax
 8048bba:	85 c0                	test   %eax,%eax
 8048bbc:	74 24                	je     8048be2 <_ZN1BD1Ev+0x6c>
 8048bbe:	8b 45 08             	mov    0x8(%ebp),%eax
 8048bc1:	89 04 24             	mov    %eax,(%esp)
 8048bc4:	e8 97 fb ff ff       	call   8048760 <_ZdlPv@plt>
 8048bc9:	eb 17                	jmp    8048be2 <_ZN1BD1Ev+0x6c>
 8048bcb:	89 c3                	mov    %eax,%ebx
 8048bcd:	8b 45 08             	mov    0x8(%ebp),%eax
 8048bd0:	89 04 24             	mov    %eax,(%esp)
 8048bd3:	e8 bc fe ff ff       	call   8048a94 <_ZN1AD1Ev>
 8048bd8:	89 d8                	mov    %ebx,%eax
 8048bda:	89 04 24             	mov    %eax,(%esp)
 8048bdd:	e8 fe fb ff ff       	call   80487e0 <_Unwind_Resume@plt>
 8048be2:	83 c4 14             	add    $0x14,%esp
 8048be5:	5b                   	pop    %ebx
 8048be6:	5d                   	pop    %ebp
 8048be7:	c3                   	ret    

08048be8 <_ZN1BD0Ev>:
 8048be8:	55                   	push   %ebp
 8048be9:	89 e5                	mov    %esp,%ebp
 8048beb:	83 ec 18             	sub    $0x18,%esp
 8048bee:	8b 45 08             	mov    0x8(%ebp),%eax
 8048bf1:	89 04 24             	mov    %eax,(%esp)
 8048bf4:	e8 7d ff ff ff       	call   8048b76 <_ZN1BD1Ev>
 8048bf9:	8b 45 08             	mov    0x8(%ebp),%eax
 8048bfc:	89 04 24             	mov    %eax,(%esp)
 8048bff:	e8 5c fb ff ff       	call   8048760 <_ZdlPv@plt>
 8048c04:	c9                   	leave  
 8048c05:	c3                   	ret    

08048c06 <_ZN1CC1Ev>:
 8048c06:	55                   	push   %ebp
 8048c07:	89 e5                	mov    %esp,%ebp
 8048c09:	53                   	push   %ebx
 8048c0a:	83 ec 14             	sub    $0x14,%esp
 8048c0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8048c10:	89 04 24             	mov    %eax,(%esp)
 8048c13:	e8 26 fe ff ff       	call   8048a3e <_ZN1AC1Ev>
 8048c18:	8b 45 08             	mov    0x8(%ebp),%eax
 8048c1b:	c7 00 a8 8f 04 08    	movl   $0x8048fa8,(%eax)
 8048c21:	8b 45 08             	mov    0x8(%ebp),%eax
 8048c24:	c7 40 08 0b 00 00 00 	movl   $0xb,0x8(%eax)
 8048c2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8048c2e:	8b 58 08             	mov    0x8(%eax),%ebx
 8048c31:	c7 44 24 04 74 8f 04 	movl   $0x8048f74,0x4(%esp)
 8048c38:	08 
 8048c39:	c7 04 24 00 a6 04 08 	movl   $0x804a600,(%esp)
 8048c40:	e8 5b fb ff ff       	call   80487a0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
 8048c45:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8048c49:	89 04 24             	mov    %eax,(%esp)
 8048c4c:	e8 df fa ff ff       	call   8048730 <_ZNSolsEi@plt>
 8048c51:	c7 44 24 04 c0 87 04 	movl   $0x80487c0,0x4(%esp)
 8048c58:	08 
 8048c59:	89 04 24             	mov    %eax,(%esp)
 8048c5c:	e8 4f fb ff ff       	call   80487b0 <_ZNSolsEPFRSoS_E@plt>
 8048c61:	eb 17                	jmp    8048c7a <_ZN1CC1Ev+0x74>
 8048c63:	89 c3                	mov    %eax,%ebx
 8048c65:	8b 45 08             	mov    0x8(%ebp),%eax
 8048c68:	89 04 24             	mov    %eax,(%esp)
 8048c6b:	e8 24 fe ff ff       	call   8048a94 <_ZN1AD1Ev>
 8048c70:	89 d8                	mov    %ebx,%eax
 8048c72:	89 04 24             	mov    %eax,(%esp)
 8048c75:	e8 66 fb ff ff       	call   80487e0 <_Unwind_Resume@plt>
 8048c7a:	83 c4 14             	add    $0x14,%esp
 8048c7d:	5b                   	pop    %ebx
 8048c7e:	5d                   	pop    %ebp
 8048c7f:	c3                   	ret    

08048c80 <_ZN1CD1Ev>:
 8048c80:	55                   	push   %ebp
 8048c81:	89 e5                	mov    %esp,%ebp
 8048c83:	53                   	push   %ebx
 8048c84:	83 ec 14             	sub    $0x14,%esp
 8048c87:	8b 45 08             	mov    0x8(%ebp),%eax
 8048c8a:	c7 00 a8 8f 04 08    	movl   $0x8048fa8,(%eax)
 8048c90:	c7 44 24 04 77 8f 04 	movl   $0x8048f77,0x4(%esp)
 8048c97:	08 
 8048c98:	c7 04 24 00 a6 04 08 	movl   $0x804a600,(%esp)
 8048c9f:	e8 fc fa ff ff       	call   80487a0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
 8048ca4:	c7 44 24 04 c0 87 04 	movl   $0x80487c0,0x4(%esp)
 8048cab:	08 
 8048cac:	89 04 24             	mov    %eax,(%esp)
 8048caf:	e8 fc fa ff ff       	call   80487b0 <_ZNSolsEPFRSoS_E@plt>
 8048cb4:	8b 45 08             	mov    0x8(%ebp),%eax
 8048cb7:	89 04 24             	mov    %eax,(%esp)
 8048cba:	e8 d5 fd ff ff       	call   8048a94 <_ZN1AD1Ev>
 8048cbf:	b8 00 00 00 00       	mov    $0x0,%eax
 8048cc4:	85 c0                	test   %eax,%eax
 8048cc6:	74 24                	je     8048cec <_ZN1CD1Ev+0x6c>
 8048cc8:	8b 45 08             	mov    0x8(%ebp),%eax
 8048ccb:	89 04 24             	mov    %eax,(%esp)
 8048cce:	e8 8d fa ff ff       	call   8048760 <_ZdlPv@plt>
 8048cd3:	eb 17                	jmp    8048cec <_ZN1CD1Ev+0x6c>
 8048cd5:	89 c3                	mov    %eax,%ebx
 8048cd7:	8b 45 08             	mov    0x8(%ebp),%eax
 8048cda:	89 04 24             	mov    %eax,(%esp)
 8048cdd:	e8 b2 fd ff ff       	call   8048a94 <_ZN1AD1Ev>
 8048ce2:	89 d8                	mov    %ebx,%eax
 8048ce4:	89 04 24             	mov    %eax,(%esp)
 8048ce7:	e8 f4 fa ff ff       	call   80487e0 <_Unwind_Resume@plt>
 8048cec:	83 c4 14             	add    $0x14,%esp
 8048cef:	5b                   	pop    %ebx
 8048cf0:	5d                   	pop    %ebp
 8048cf1:	c3                   	ret    

08048cf2 <_ZN1CD0Ev>:
 8048cf2:	55                   	push   %ebp
 8048cf3:	89 e5                	mov    %esp,%ebp
 8048cf5:	83 ec 18             	sub    $0x18,%esp
 8048cf8:	8b 45 08             	mov    0x8(%ebp),%eax
 8048cfb:	89 04 24             	mov    %eax,(%esp)
 8048cfe:	e8 7d ff ff ff       	call   8048c80 <_ZN1CD1Ev>
 8048d03:	8b 45 08             	mov    0x8(%ebp),%eax
 8048d06:	89 04 24             	mov    %eax,(%esp)
 8048d09:	e8 52 fa ff ff       	call   8048760 <_ZdlPv@plt>
 8048d0e:	c9                   	leave  
 8048d0f:	c3                   	ret    

08048d10 <_ZN1DC1Ev>:
 8048d10:	55                   	push   %ebp
 8048d11:	89 e5                	mov    %esp,%ebp
 8048d13:	53                   	push   %ebx
 8048d14:	83 ec 14             	sub    $0x14,%esp
 8048d17:	8b 45 08             	mov    0x8(%ebp),%eax
 8048d1a:	89 04 24             	mov    %eax,(%esp)
 8048d1d:	e8 da fd ff ff       	call   8048afc <_ZN1BC1Ev>
 8048d22:	8b 45 08             	mov    0x8(%ebp),%eax
 8048d25:	83 c0 0c             	add    $0xc,%eax
 8048d28:	89 04 24             	mov    %eax,(%esp)
 8048d2b:	e8 d6 fe ff ff       	call   8048c06 <_ZN1CC1Ev>
 8048d30:	8b 45 08             	mov    0x8(%ebp),%eax
 8048d33:	c7 00 88 8f 04 08    	movl   $0x8048f88,(%eax)
 8048d39:	8b 45 08             	mov    0x8(%ebp),%eax
 8048d3c:	c7 40 0c 98 8f 04 08 	movl   $0x8048f98,0xc(%eax)
 8048d43:	8b 45 08             	mov    0x8(%ebp),%eax
 8048d46:	c7 40 18 0c 00 00 00 	movl   $0xc,0x18(%eax)
 8048d4d:	8b 45 08             	mov    0x8(%ebp),%eax
 8048d50:	8b 58 18             	mov    0x18(%eax),%ebx
 8048d53:	c7 44 24 04 7a 8f 04 	movl   $0x8048f7a,0x4(%esp)
 8048d5a:	08 
 8048d5b:	c7 04 24 00 a6 04 08 	movl   $0x804a600,(%esp)
 8048d62:	e8 39 fa ff ff       	call   80487a0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
 8048d67:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8048d6b:	89 04 24             	mov    %eax,(%esp)
 8048d6e:	e8 bd f9 ff ff       	call   8048730 <_ZNSolsEi@plt>
 8048d73:	c7 44 24 04 c0 87 04 	movl   $0x80487c0,0x4(%esp)
 8048d7a:	08 
 8048d7b:	89 04 24             	mov    %eax,(%esp)
 8048d7e:	e8 2d fa ff ff       	call   80487b0 <_ZNSolsEPFRSoS_E@plt>
 8048d83:	eb 29                	jmp    8048dae <_ZN1DC1Ev+0x9e>
 8048d85:	89 c3                	mov    %eax,%ebx
 8048d87:	8b 45 08             	mov    0x8(%ebp),%eax
 8048d8a:	83 c0 0c             	add    $0xc,%eax
 8048d8d:	89 04 24             	mov    %eax,(%esp)
 8048d90:	e8 eb fe ff ff       	call   8048c80 <_ZN1CD1Ev>
 8048d95:	eb 02                	jmp    8048d99 <_ZN1DC1Ev+0x89>
 8048d97:	89 c3                	mov    %eax,%ebx
 8048d99:	8b 45 08             	mov    0x8(%ebp),%eax
 8048d9c:	89 04 24             	mov    %eax,(%esp)
 8048d9f:	e8 d2 fd ff ff       	call   8048b76 <_ZN1BD1Ev>
 8048da4:	89 d8                	mov    %ebx,%eax
 8048da6:	89 04 24             	mov    %eax,(%esp)
 8048da9:	e8 32 fa ff ff       	call   80487e0 <_Unwind_Resume@plt>
 8048dae:	83 c4 14             	add    $0x14,%esp
 8048db1:	5b                   	pop    %ebx
 8048db2:	5d                   	pop    %ebp
 8048db3:	c3                   	ret    

08048db4 <_ZN1DD1Ev>:
 8048db4:	55                   	push   %ebp
 8048db5:	89 e5                	mov    %esp,%ebp
 8048db7:	53                   	push   %ebx
 8048db8:	83 ec 14             	sub    $0x14,%esp
 8048dbb:	8b 45 08             	mov    0x8(%ebp),%eax
 8048dbe:	c7 00 88 8f 04 08    	movl   $0x8048f88,(%eax)
 8048dc4:	8b 45 08             	mov    0x8(%ebp),%eax
 8048dc7:	c7 40 0c 98 8f 04 08 	movl   $0x8048f98,0xc(%eax)
 8048dce:	c7 44 24 04 7d 8f 04 	movl   $0x8048f7d,0x4(%esp)
 8048dd5:	08 
 8048dd6:	c7 04 24 00 a6 04 08 	movl   $0x804a600,(%esp)
 8048ddd:	e8 be f9 ff ff       	call   80487a0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
 8048de2:	c7 44 24 04 c0 87 04 	movl   $0x80487c0,0x4(%esp)
 8048de9:	08 
 8048dea:	89 04 24             	mov    %eax,(%esp)
 8048ded:	e8 be f9 ff ff       	call   80487b0 <_ZNSolsEPFRSoS_E@plt>
 8048df2:	8b 45 08             	mov    0x8(%ebp),%eax
 8048df5:	83 c0 0c             	add    $0xc,%eax
 8048df8:	89 04 24             	mov    %eax,(%esp)
 8048dfb:	e8 80 fe ff ff       	call   8048c80 <_ZN1CD1Ev>
 8048e00:	8b 45 08             	mov    0x8(%ebp),%eax
 8048e03:	89 04 24             	mov    %eax,(%esp)
 8048e06:	e8 6b fd ff ff       	call   8048b76 <_ZN1BD1Ev>
 8048e0b:	b8 00 00 00 00       	mov    $0x0,%eax
 8048e10:	85 c0                	test   %eax,%eax
 8048e12:	74 36                	je     8048e4a <_ZN1DD1Ev+0x96>
 8048e14:	8b 45 08             	mov    0x8(%ebp),%eax
 8048e17:	89 04 24             	mov    %eax,(%esp)
 8048e1a:	e8 41 f9 ff ff       	call   8048760 <_ZdlPv@plt>
 8048e1f:	eb 29                	jmp    8048e4a <_ZN1DD1Ev+0x96>
 8048e21:	89 c3                	mov    %eax,%ebx
 8048e23:	8b 45 08             	mov    0x8(%ebp),%eax
 8048e26:	83 c0 0c             	add    $0xc,%eax
 8048e29:	89 04 24             	mov    %eax,(%esp)
 8048e2c:	e8 4f fe ff ff       	call   8048c80 <_ZN1CD1Ev>
 8048e31:	eb 02                	jmp    8048e35 <_ZN1DD1Ev+0x81>
 8048e33:	89 c3                	mov    %eax,%ebx
 8048e35:	8b 45 08             	mov    0x8(%ebp),%eax
 8048e38:	89 04 24             	mov    %eax,(%esp)
 8048e3b:	e8 36 fd ff ff       	call   8048b76 <_ZN1BD1Ev>
 8048e40:	89 d8                	mov    %ebx,%eax
 8048e42:	89 04 24             	mov    %eax,(%esp)
 8048e45:	e8 96 f9 ff ff       	call   80487e0 <_Unwind_Resume@plt>
 8048e4a:	83 c4 14             	add    $0x14,%esp
 8048e4d:	5b                   	pop    %ebx
 8048e4e:	5d                   	pop    %ebp
 8048e4f:	c3                   	ret    

08048e50 <_ZThn12_N1DD1Ev>:
 8048e50:	83 6c 24 04 0c       	subl   $0xc,0x4(%esp)
 8048e55:	e9 5a ff ff ff       	jmp    8048db4 <_ZN1DD1Ev>

08048e5a <_ZN1DD0Ev>:
 8048e5a:	55                   	push   %ebp
 8048e5b:	89 e5                	mov    %esp,%ebp
 8048e5d:	83 ec 18             	sub    $0x18,%esp
 8048e60:	8b 45 08             	mov    0x8(%ebp),%eax
 8048e63:	89 04 24             	mov    %eax,(%esp)
 8048e66:	e8 49 ff ff ff       	call   8048db4 <_ZN1DD1Ev>
 8048e6b:	8b 45 08             	mov    0x8(%ebp),%eax
 8048e6e:	89 04 24             	mov    %eax,(%esp)
 8048e71:	e8 ea f8 ff ff       	call   8048760 <_ZdlPv@plt>
 8048e76:	c9                   	leave  
 8048e77:	c3                   	ret    

08048e78 <_ZThn12_N1DD0Ev>:
 8048e78:	83 6c 24 04 0c       	subl   $0xc,0x4(%esp)
 8048e7d:	eb db                	jmp    8048e5a <_ZN1DD0Ev>
 8048e7f:	90                   	nop

08048e80 <__libc_csu_init>:
 8048e80:	55                   	push   %ebp
 8048e81:	57                   	push   %edi
 8048e82:	31 ff                	xor    %edi,%edi
 8048e84:	56                   	push   %esi
 8048e85:	53                   	push   %ebx
 8048e86:	e8 95 f9 ff ff       	call   8048820 <__x86.get_pc_thunk.bx>
 8048e8b:	81 c3 d5 16 00 00    	add    $0x16d5,%ebx
 8048e91:	83 ec 1c             	sub    $0x1c,%esp
 8048e94:	8b 6c 24 30          	mov    0x30(%esp),%ebp
 8048e98:	8d b3 02 ff ff ff    	lea    -0xfe(%ebx),%esi
 8048e9e:	e8 41 f8 ff ff       	call   80486e4 <_init>
 8048ea3:	8d 83 02 ff ff ff    	lea    -0xfe(%ebx),%eax
 8048ea9:	29 c6                	sub    %eax,%esi
 8048eab:	c1 fe 02             	sar    $0x2,%esi
 8048eae:	85 f6                	test   %esi,%esi
 8048eb0:	74 27                	je     8048ed9 <__libc_csu_init+0x59>
 8048eb2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8048eb8:	8b 44 24 38          	mov    0x38(%esp),%eax
 8048ebc:	89 2c 24             	mov    %ebp,(%esp)
 8048ebf:	89 44 24 08          	mov    %eax,0x8(%esp)
 8048ec3:	8b 44 24 34          	mov    0x34(%esp),%eax
 8048ec7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8048ecb:	ff 94 bb 02 ff ff ff 	call   *-0xfe(%ebx,%edi,4)
 8048ed2:	83 c7 01             	add    $0x1,%edi
 8048ed5:	39 f7                	cmp    %esi,%edi
 8048ed7:	75 df                	jne    8048eb8 <__libc_csu_init+0x38>
 8048ed9:	83 c4 1c             	add    $0x1c,%esp
 8048edc:	5b                   	pop    %ebx
 8048edd:	5e                   	pop    %esi
 8048ede:	5f                   	pop    %edi
 8048edf:	5d                   	pop    %ebp
 8048ee0:	c3                   	ret    
 8048ee1:	eb 0d                	jmp    8048ef0 <__libc_csu_fini>
 8048ee3:	90                   	nop
 8048ee4:	90                   	nop
 8048ee5:	90                   	nop
 8048ee6:	90                   	nop
 8048ee7:	90                   	nop
 8048ee8:	90                   	nop
 8048ee9:	90                   	nop
 8048eea:	90                   	nop
 8048eeb:	90                   	nop
 8048eec:	90                   	nop
 8048eed:	90                   	nop
 8048eee:	90                   	nop
 8048eef:	90                   	nop

08048ef0 <__libc_csu_fini>:
 8048ef0:	f3 c3                	repz ret 
 8048ef2:	66 90                	xchg   %ax,%ax
 8048ef4:	66 90                	xchg   %ax,%ax
 8048ef6:	66 90                	xchg   %ax,%ax
 8048ef8:	66 90                	xchg   %ax,%ax
 8048efa:	66 90                	xchg   %ax,%ax
 8048efc:	66 90                	xchg   %ax,%ax
 8048efe:	66 90                	xchg   %ax,%ax

08048f00 <__do_global_ctors_aux>:
 8048f00:	55                   	push   %ebp
 8048f01:	89 e5                	mov    %esp,%ebp
 8048f03:	53                   	push   %ebx
 8048f04:	bb 68 a4 04 08       	mov    $0x804a468,%ebx
 8048f09:	83 ec 04             	sub    $0x4,%esp
 8048f0c:	a1 68 a4 04 08       	mov    0x804a468,%eax
 8048f11:	83 f8 ff             	cmp    $0xffffffff,%eax
 8048f14:	74 0e                	je     8048f24 <__do_global_ctors_aux+0x24>
 8048f16:	66 90                	xchg   %ax,%ax
 8048f18:	83 eb 04             	sub    $0x4,%ebx
 8048f1b:	ff d0                	call   *%eax
 8048f1d:	8b 03                	mov    (%ebx),%eax
 8048f1f:	83 f8 ff             	cmp    $0xffffffff,%eax
 8048f22:	75 f4                	jne    8048f18 <__do_global_ctors_aux+0x18>
 8048f24:	83 c4 04             	add    $0x4,%esp
 8048f27:	5b                   	pop    %ebx
 8048f28:	5d                   	pop    %ebp
 8048f29:	c3                   	ret    
 8048f2a:	66 90                	xchg   %ax,%ax

Disassembly of section .fini:

08048f2c <_fini>:
 8048f2c:	53                   	push   %ebx
 8048f2d:	83 ec 08             	sub    $0x8,%esp
 8048f30:	e8 eb f8 ff ff       	call   8048820 <__x86.get_pc_thunk.bx>
 8048f35:	81 c3 2b 16 00 00    	add    $0x162b,%ebx
 8048f3b:	e8 60 f9 ff ff       	call   80488a0 <__do_global_dtors_aux>
 8048f40:	83 c4 08             	add    $0x8,%esp
 8048f43:	5b                   	pop    %ebx
 8048f44:	c3                   	ret    
