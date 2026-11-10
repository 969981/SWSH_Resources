/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009af910; name: FUN_009af910
 */


void FUN_009af910(byte *param_1,uint param_2,void *param_3,byte param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*param_1;
  if (*param_1 == 0) {
    uVar3 = 2;
    param_1[3] = 1;
    *param_1 = 2;
  }
  uVar2 = 1 << (ulong)(param_2 & 0x1f);
  if ((uVar2 & param_1[1]) != 0) {
    return;
  }
  uVar1 = ((ulong)param_4 << 3 | 1) + uVar3;
  if (uVar1 < 0x3e9) {
    param_1[1] = param_1[1] | (byte)uVar2;
    param_1[2] = param_1[2] + 1;
    param_1[uVar3 + 6] = param_4 | (byte)(param_2 << 5);
    memcpy(param_1 + uVar3 + 7,param_3,(ulong)param_4 << 3);
    *param_1 = (byte)uVar1;
    return;
  }
  param_1[5] = 1;
  return;
}


