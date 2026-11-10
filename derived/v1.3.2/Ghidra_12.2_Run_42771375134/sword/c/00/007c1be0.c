/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c1be0; name: FUN_007c1be0
 */


bool FUN_007c1be0(long *param_1)

{
  undefined *puVar1;
  short sVar2;
  short *psVar3;
  long lVar4;
  ushort *puVar5;
  ushort uVar6;
  short sVar7;
  
  puVar1 = PTR_DAT_02716b80;
  if (*(long *)PTR_DAT_02716b80 == 0) {
    return false;
  }
  psVar3 = (short *)(**(code **)(*param_1 + 0x10))();
  if (psVar3 == (short *)0x0) {
    sVar7 = 0;
  }
  else {
    sVar7 = *psVar3;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  sVar2 = FUN_0075dcb0(lVar4 + 2,0x166);
  if (sVar7 != sVar2) {
    return false;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (ushort)*(byte *)(lVar4 + 2) | (*(byte *)(lVar4 + 3) & 0xf) << 8;
  }
  if (((*(ushort *)PTR_DAT_02716b88 ^ uVar6) & 0xfff) == 0) {
    return false;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (ushort)*(byte *)(lVar4 + 2) | (*(byte *)(lVar4 + 3) & 0xf) << 8;
  }
  puVar5 = (ushort *)FUN_007c26b0(*(undefined8 *)puVar1);
  uVar6 = *puVar5 ^ uVar6;
  if ((uVar6 & 0xf) != 0) {
    return false;
  }
  if ((uVar6 & 0xf0) == 0) {
    return (uVar6 & 0xf00) == 0;
  }
  return true;
}


