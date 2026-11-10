/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00800190; name: FUN_00800190
 */


void FUN_00800190(ulong *param_1)

{
  char *__s;
  size_t __n;
  void *__dest;
  ulong uVar1;
  undefined1 auStack_48 [24];
  
  __s = (char *)FUN_00800240(auStack_48);
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
    if (__n == 0) goto LAB_00800214;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_00800214:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


