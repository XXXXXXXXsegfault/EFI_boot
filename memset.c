#ifndef _My_OS_memset_
#define _My_OS_memset_
void *memset(void *ptr,int value,unsigned long long int size);
asm("memset:");
asm("push %rdi");
asm("push %rsi");
asm("push %rdx");
asm("mov %sil,%al");
asm("cmp $8,%rdx");
asm("jb _memset_X1");
asm("mov %al,%ah");
asm("mov %dil,%al");
asm("xchg %al,%ah");
asm("and $7,%ah");
asm("je _memset_X3");
asm("or $0xf8,%ah");
asm("mov %al,(%rdi)");
asm("inc %rdi");
asm("dec %rdx");
asm("inc %ah");
asm("je _memset_X3");
asm("mov %al,(%rdi)");
asm("inc %rdi");
asm("dec %rdx");
asm("inc %ah");
asm("je _memset_X3");
asm("mov %al,(%rdi)");
asm("inc %rdi");
asm("dec %rdx");
asm("inc %ah");
asm("je _memset_X3");
asm("mov %al,(%rdi)");
asm("inc %rdi");
asm("dec %rdx");
asm("inc %ah");
asm("je _memset_X3");
asm("mov %al,(%rdi)");
asm("inc %rdi");
asm("dec %rdx");
asm("inc %ah");
asm("je _memset_X3");
asm("mov %al,(%rdi)");
asm("inc %rdi");
asm("dec %rdx");
asm("inc %ah");
asm("je _memset_X3");
asm("mov %al,(%rdi)");
asm("inc %rdi");
asm("dec %rdx");
asm("_memset_X3:");
asm("movzbl %al,%eax");
asm("mov %rdx,%rsi");
asm("movabs $0x101010101010101,%rdx");
asm("mul %rdx");
asm("mov %rsi,%rdx");
asm("_memset_X4:");
asm("sub $64,%rdx");
asm("jb _memset_X5");
asm("mov %rax,(%rdi)");
asm("mov %rax,8(%rdi)");
asm("mov %rax,16(%rdi)");
asm("mov %rax,24(%rdi)");
asm("mov %rax,32(%rdi)");
asm("mov %rax,40(%rdi)");
asm("mov %rax,48(%rdi)");
asm("mov %rax,56(%rdi)");
asm("lea 64(%rdi),%rdi");
asm("jmp _memset_X4");
asm("_memset_X5:");
asm("test $32,%dl");
asm("je _memset_Y1");
asm("mov %rax,(%rdi)");
asm("mov %rax,8(%rdi)");
asm("mov %rax,16(%rdi)");
asm("mov %rax,24(%rdi)");
asm("lea 32(%rdi),%rdi");
asm("_memset_Y1:");
asm("test $16,%dl");
asm("je _memset_Y2");
asm("mov %rax,(%rdi)");
asm("mov %rax,8(%rdi)");
asm("lea 16(%rdi),%rdi");
asm("_memset_Y2:");
asm("test $8,%dl");
asm("je _memset_Y3");
asm("mov %rax,(%rdi)");
asm("lea 8(%rdi),%rdi");
asm("_memset_Y3:");
asm("and $7,%dl");
asm("_memset_X1:");
asm("test %dl,%dl");
asm("je _memset_X2");
asm("mov %al,(%rdi)");
asm("inc %rdi");
asm("dec %dl");
asm("je _memset_X2");
asm("mov %al,(%rdi)");
asm("inc %rdi");
asm("dec %dl");
asm("je _memset_X2");
asm("mov %al,(%rdi)");
asm("inc %rdi");
asm("dec %dl");
asm("je _memset_X2");
asm("mov %al,(%rdi)");
asm("inc %rdi");
asm("dec %dl");
asm("je _memset_X2");
asm("mov %al,(%rdi)");
asm("inc %rdi");
asm("dec %dl");
asm("je _memset_X2");
asm("mov %al,(%rdi)");
asm("inc %rdi");
asm("dec %dl");
asm("je _memset_X2");
asm("mov %al,(%rdi)");
asm("inc %rdi");
asm("_memset_X2:");
asm("mov %rdi,%rax");
asm("pop %rdx");
asm("pop %rsi");
asm("pop %rdi");
asm("ret");
#endif
