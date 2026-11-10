/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ff3c0; name: FUN_007ff3c0
 */


void FUN_007ff3c0(ulong *param_1,byte *param_2)

{
  uint uVar1;
  void *__src;
  void *__dest;
  size_t __n;
  ulong uVar2;
  
  if ((*param_2 & 1) == 0) {
    __src = operator_new__((ulong)(*param_2 >> 1) + 1);
    param_2 = param_2 + 1;
  }
  else {
    __src = operator_new__(*(long *)(param_2 + 8) + 1);
    param_2 = *(byte **)(param_2 + 0x10);
  }
  uVar1 = FUN_007ff0e0(param_2,__src);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (0xffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __n = (size_t)(int)uVar1;
  if (uVar1 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)(uVar1 << 1);
    if (uVar1 == 0) goto LAB_007ff470;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_007ff470:
  *(undefined1 *)((long)__dest + __n) = 0;
  operator_delete__(__src);
  return;
}


