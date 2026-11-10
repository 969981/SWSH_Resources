/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00100930; name: calloc
 */


void * calloc(size_t __nmemb,size_t __size)

{
  ulong uVar1;
  long *plVar2;
  void *__s;
  
  uVar1 = FUN_0075ede0();
  if ((uVar1 & 1) != 0) {
    nn::diag::detail::OnAssertionFailure(2,&DAT_01d38550,&DAT_01d38550,&DAT_01d38550,0);
  }
  plVar2 = (long *)FUN_0075ecb0();
  __s = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,__size * __nmemb,8);
  if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,__size * __nmemb);
  }
  FUN_0075ef10();
  return (void *)0x0;
}


