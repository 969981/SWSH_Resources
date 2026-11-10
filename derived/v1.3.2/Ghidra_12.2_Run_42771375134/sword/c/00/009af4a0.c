/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009af4a0; name: FUN_009af4a0
 */


void FUN_009af4a0(ushort *param_1,char *param_2,int param_3)

{
  uint uVar1;
  
  if (((param_3 == 0) || ((char)param_1[1] != '\0')) || (-1 < *param_2)) {
    return;
  }
  uVar1 = (param_3 - 1U) + (uint)*param_1;
  if (uVar1 < 0xc01) {
    memcpy((void *)((long)param_1 + (ulong)*param_1 + 4),param_2 + 1,(ulong)(param_3 - 1U));
    *param_1 = (ushort)uVar1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


