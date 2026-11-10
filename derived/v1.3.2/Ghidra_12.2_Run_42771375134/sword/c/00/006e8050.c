/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e8050; name: FUN_006e8050
 */


void FUN_006e8050(long param_1,ulong param_2,int param_3)

{
  size_t __n;
  void *__s;
  ulong uVar1;
  ulong uVar2;
  
  if (param_3 != 0) {
    if (param_3 == 2) {
      param_2 = *(long *)(param_1 + 0x98) + param_2;
    }
    else {
      uVar1 = *(ulong *)(param_1 + 0xa0);
      if (param_3 != 1) goto LAB_006e809c;
      param_2 = *(ulong *)(param_1 + 0xa0) + param_2;
    }
  }
  *(ulong *)(param_1 + 0xa0) = param_2;
  uVar1 = param_2;
LAB_006e809c:
  uVar2 = *(ulong *)(param_1 + 0x98);
  if (*(char *)(param_1 + 0xa8) == '\0') {
    uVar1 = uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
    if ((long)uVar1 <= (long)uVar2) {
      uVar2 = uVar1;
    }
    *(ulong *)(param_1 + 0xa0) = uVar2;
  }
  else {
    __n = uVar1 - uVar2;
    if (__n != 0 && (long)uVar2 <= (long)uVar1) {
      __s = (void *)(**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),__n,8);
                    /* WARNING: Subroutine does not return */
      memset(__s,0,__n);
    }
  }
  return;
}


