/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ffde0; name: FUN_007ffde0
 */


void FUN_007ffde0(ulong *param_1,long param_2)

{
  bool bVar1;
  size_t __n;
  long lVar2;
  void *__dest;
  char *__s;
  char *pcVar3;
  ulong uVar4;
  char local_3d [13];
  
  local_3d[2] = 0;
  if (param_2 < 0) {
    if (param_2 < -9) {
      lVar2 = (-10 - param_2) / 10;
      local_3d[1] = (char)(-10 - param_2) + (char)lVar2 * -10;
      lVar2 = lVar2 + 1;
      pcVar3 = local_3d;
      do {
        __s = pcVar3 + -1;
        *pcVar3 = (char)lVar2 + (char)(lVar2 / 10) * -10 + '0';
        bVar1 = 9 < lVar2;
        lVar2 = lVar2 / 10;
        pcVar3 = __s;
      } while (bVar1);
    }
    else {
      local_3d[1] = -(char)param_2;
      __s = local_3d;
    }
    local_3d[1] = local_3d[1] + '0';
    *__s = '-';
  }
  else {
    __s = local_3d + 2;
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
    if (__n == 0) goto LAB_007fff24;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar4 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_007fff24:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


