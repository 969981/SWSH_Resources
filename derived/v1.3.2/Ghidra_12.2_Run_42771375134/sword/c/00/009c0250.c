/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c0250; name: FUN_009c0250
 */


int FUN_009c0250(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  
  pbVar7 = *(byte **)(param_1 + 0x18);
  bVar2 = *pbVar7;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_009c029c:
      iVar3 = 0;
      uVar1 = *(uint *)(param_1 + 0x20);
      goto joined_r0x009c02e0;
    }
  }
  else if (*(long *)(pbVar7 + 8) == 0) goto LAB_009c029c;
  uVar5 = (uint)*(undefined8 *)(pbVar7 + 8);
  uVar6 = (uint)(bVar2 >> 1);
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 < 0x80) {
    iVar3 = 2;
  }
  else {
    iVar3 = FUN_0080e440();
    bVar2 = *pbVar7;
    uVar5 = (uint)*(undefined8 *)(pbVar7 + 8);
    uVar6 = (uint)(bVar2 >> 1);
    iVar3 = iVar3 + 1;
  }
  if ((bVar2 & 1) != 0) {
    uVar6 = uVar5;
  }
  iVar3 = iVar3 + uVar6;
  uVar1 = *(uint *)(param_1 + 0x20);
joined_r0x009c02e0:
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
  *(int *)(param_1 + 0x24) = iVar3;
  return iVar3;
}


