/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ac8a0; name: FUN_011ac8a0
 */


int FUN_011ac8a0(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  
  pbVar8 = *(byte **)(param_1 + 0x18);
  bVar2 = *pbVar8;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_011ac8c8:
      uVar5 = (uint)*(undefined8 *)(pbVar8 + 8);
      uVar7 = (uint)(bVar2 >> 1);
      uVar1 = uVar7;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar5;
      }
      if (uVar1 < 0x80) {
        iVar3 = 2;
      }
      else {
        iVar3 = FUN_0080e440();
        bVar2 = *pbVar8;
        uVar5 = (uint)*(undefined8 *)(pbVar8 + 8);
        uVar7 = (uint)(bVar2 >> 1);
        iVar3 = iVar3 + 1;
      }
      if ((bVar2 & 1) != 0) {
        uVar7 = uVar5;
      }
      iVar3 = iVar3 + uVar7;
      pbVar8 = *(byte **)(param_1 + 0x20);
      bVar2 = *pbVar8;
      goto joined_r0x011ac8fc;
    }
  }
  else if (*(long *)(pbVar8 + 8) != 0) goto LAB_011ac8c8;
  iVar3 = 0;
  pbVar8 = *(byte **)(param_1 + 0x20);
  bVar2 = *pbVar8;
joined_r0x011ac8fc:
  if ((bVar2 & 1) == 0) {
    uVar6 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar6 = *(ulong *)(pbVar8 + 8);
  }
  if (uVar6 != 0) {
    uVar5 = (uint)*(undefined8 *)(pbVar8 + 8);
    uVar7 = (uint)(bVar2 >> 1);
    uVar1 = uVar7;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar5;
    }
    if (uVar1 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_0080e440();
      bVar2 = *pbVar8;
      uVar5 = (uint)*(undefined8 *)(pbVar8 + 8);
      uVar7 = (uint)(bVar2 >> 1);
    }
    if ((bVar2 & 1) != 0) {
      uVar7 = uVar5;
    }
    iVar3 = iVar3 + iVar4 + uVar7 + 1;
  }
  *(int *)(param_1 + 0x28) = iVar3;
  return iVar3;
}


