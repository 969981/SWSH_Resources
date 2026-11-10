/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ffba0; name: FUN_007ffba0
 */


void FUN_007ffba0(ulong *param_1,int param_2)

{
  bool bVar1;
  size_t __n;
  int iVar2;
  void *__dest;
  char *__s;
  char *pcVar3;
  ulong uVar4;
  char local_47 [23];
  
  local_47[2] = 0;
  if (param_2 < 0) {
    if (param_2 < -9) {
      iVar2 = (-10 - param_2) / 10;
      local_47[1] = (char)(-10 - param_2) + (char)iVar2 * -10;
      pcVar3 = local_47;
      iVar2 = iVar2 + 1;
      do {
        __s = pcVar3 + -1;
        *pcVar3 = (char)iVar2 + (char)(iVar2 / 10) * -10 + '0';
        bVar1 = 9 < iVar2;
        pcVar3 = __s;
        iVar2 = iVar2 / 10;
      } while (bVar1);
    }
    else {
      local_47[1] = -(char)param_2;
      __s = local_47;
    }
    local_47[1] = local_47[1] + '0';
    *__s = '-';
  }
  else {
    __s = local_47 + 2;
    do {
      __s = __s + -1;
      *__s = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
      bVar1 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_007ffcf0;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar4 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_007ffcf0:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


