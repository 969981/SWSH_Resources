/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e8da0; name: FUN_007e8da0
 */


void FUN_007e8da0(ulong *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  size_t __n;
  long lVar3;
  void *__dest;
  char *__s;
  ulong uVar4;
  
  puVar2 = PTR_PTR_02716e30;
  uVar1 = *(uint *)(param_2 + 0x3c);
  if (uVar1 == 0xe) {
    lVar3 = *(long *)(param_2 + 0x70);
LAB_007e8dd4:
    std::operator+(".",*(string **)(lVar3 + 8));
    return;
  }
  if (uVar1 == 0xb) {
    lVar3 = *(long *)(param_2 + 0x68);
    goto LAB_007e8dd4;
  }
  *param_1 = 0;
  __s = *(char **)(puVar2 + (ulong)uVar1 * 8);
  param_1[1] = 0;
  param_1[2] = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_007e8e64;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar4 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_007e8e64:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


