/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00800020; name: FUN_00800020
 */


void FUN_00800020(ulong *param_1,double param_2)

{
  size_t __n;
  void *__dest;
  ulong uVar1;
  char local_58 [32];
  double local_38;
  
  if (param_2 == DAT_01cd52c0) {
    builtin_strncpy(local_58,"inf",4);
  }
  else if (param_2 == DAT_01cd5380) {
    builtin_strncpy(local_58,"-inf",5);
  }
  else if ((ulong)ABS(param_2) < 0x7ff0000000000001) {
    snprintf(local_58,0x20,"%.*g",param_2,0xf);
    local_38 = strtod(local_58,(char **)0x0);
    if (local_38 != param_2) {
      snprintf(local_58,0x20,"%.*g",param_2,0x11);
    }
    FUN_00800370(local_58);
  }
  else {
    builtin_strncpy(local_58,"nan",4);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  __n = strlen(local_58);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0080016c;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
  }
  memcpy(__dest,local_58,__n);
LAB_0080016c:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


