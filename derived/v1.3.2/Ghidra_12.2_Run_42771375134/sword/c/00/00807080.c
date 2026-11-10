/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00807080; name: FUN_00807080
 */


void FUN_00807080(ulong *param_1,byte *param_2,byte *param_3)

{
  size_t __n;
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  char *__dest;
  ulong uVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  bVar1 = *param_3;
  uVar4 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar4 = *(ulong *)(param_3 + 8);
  }
  bVar2 = (*param_2 & 1) != 0;
  pbVar3 = *(byte **)(param_2 + 0x10);
  __n = (ulong)(*param_2 >> 1);
  if (bVar2) {
    __n = *(size_t *)(param_2 + 8);
  }
  uVar4 = uVar4 + __n;
  if (!bVar2) {
    pbVar3 = param_2 + 1;
  }
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar4 < 0x17) {
    __dest = (char *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
  }
  else {
    uVar4 = uVar4 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    *param_1 = uVar4 | 1;
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
  }
  if (__n != 0) {
    memcpy(__dest,pbVar3,__n);
  }
  __dest[__n] = '\0';
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((bVar1 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
  std::string::append((char *)param_1,(ulong)pbVar3);
  return;
}


