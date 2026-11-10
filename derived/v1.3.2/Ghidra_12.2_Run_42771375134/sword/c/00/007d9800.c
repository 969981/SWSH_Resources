/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d9800; name: FUN_007d9800
 */


int FUN_007d9800(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  
  if (*(uint *)(param_1 + 0x14) == 0) {
    iVar3 = 0;
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  else if (*(uint *)(param_1 + 0x14) < 0x80) {
    iVar3 = 2;
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  else {
    iVar3 = FUN_0080e440();
    iVar3 = iVar3 + 1;
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  if (uVar1 != 0) {
    if (uVar1 < 0x80) {
      iVar4 = 2;
    }
    else {
      iVar4 = FUN_0080e440();
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar4 + iVar3;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar4 = FUN_0080e480();
    iVar3 = iVar3 + iVar4 + 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar4 = FUN_0080e480();
    iVar3 = iVar3 + iVar4 + 1;
  }
  pbVar7 = *(byte **)(param_1 + 0x30);
  bVar2 = *pbVar7;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_007d9900;
  }
  else if (*(long *)(pbVar7 + 8) == 0) goto LAB_007d9900;
  uVar5 = (uint)*(undefined8 *)(pbVar7 + 8);
  uVar6 = (uint)(bVar2 >> 1);
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 < 0x80) {
    iVar4 = 1;
  }
  else {
    iVar4 = FUN_0080e440();
    bVar2 = *pbVar7;
    uVar5 = (uint)*(undefined8 *)(pbVar7 + 8);
    uVar6 = (uint)(bVar2 >> 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar6 = uVar5;
  }
  iVar3 = iVar3 + iVar4 + uVar6 + 1;
LAB_007d9900:
  *(int *)(param_1 + 0x38) = iVar3;
  return iVar3;
}


