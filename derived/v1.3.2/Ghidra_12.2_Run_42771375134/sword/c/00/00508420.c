/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00508420; name: FUN_00508420
 */


undefined4 FUN_00508420(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = 1 << (ulong)(param_2 & 0x1f);
  iVar2 = 1 << (ulong)(param_3 & 0x1f);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar3 = 0xffffff7b;
  if ((iVar1 <= iVar2 && 0x3f < iVar1) && iVar2 < 0x2001) {
    uVar3 = 0;
  }
  *param_1 = iVar1;
  param_1[1] = iVar2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return uVar3;
}


