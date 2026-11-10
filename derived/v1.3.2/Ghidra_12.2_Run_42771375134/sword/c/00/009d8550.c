/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d8550; name: FUN_009d8550
 */


int FUN_009d8550(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  
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
  if (uVar1 == 0) {
    pbVar8 = *(byte **)(param_1 + 0x20);
    bVar2 = *pbVar8;
  }
  else if (uVar1 < 0x80) {
    iVar3 = iVar3 + 2;
    pbVar8 = *(byte **)(param_1 + 0x20);
    bVar2 = *pbVar8;
  }
  else {
    iVar4 = FUN_0080e440();
    iVar3 = iVar4 + 1 + iVar3;
    pbVar8 = *(byte **)(param_1 + 0x20);
    bVar2 = *pbVar8;
  }
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


