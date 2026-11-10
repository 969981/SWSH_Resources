/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00810400; name: FUN_00810400
 */


void FUN_00810400(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  
  pbVar11 = *(byte **)(param_1 + 8);
  if ((*pbVar11 & 1) == 0) {
    uVar5 = (ulong)(*pbVar11 >> 1);
    iVar6 = *(int *)(param_2 + 0x10);
  }
  else {
    uVar5 = *(ulong *)(pbVar11 + 8);
    iVar6 = *(int *)(param_2 + 0x10);
  }
  if (iVar6 < 5) {
    FUN_0080dfa0(param_2);
    bVar1 = *pbVar11;
  }
  else {
    pbVar7 = *(byte **)(param_2 + 8);
    uVar4 = (uint)uVar5;
    pbVar9 = pbVar7;
    if (0x7f < uVar4) {
      pbVar8 = pbVar7;
      uVar10 = uVar5 & 0xffffffff;
      do {
        bVar1 = (byte)uVar5;
        uVar5 = uVar10 >> 7;
        uVar4 = (uint)uVar5;
        uVar3 = uVar10 >> 0xe;
        pbVar9 = pbVar8 + 1;
        *pbVar8 = bVar1 | 0x80;
        pbVar8 = pbVar9;
        uVar10 = uVar5;
      } while (uVar3 != 0);
    }
    *pbVar9 = (byte)uVar4;
    iVar6 = ((int)pbVar9 + 1) - (int)pbVar7;
    *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + (long)iVar6;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar6;
    bVar1 = *pbVar11;
  }
  if ((bVar1 & 1) == 0) {
    pbVar11 = pbVar11 + 1;
    uVar5 = (ulong)(bVar1 >> 1);
    cVar2 = *(char *)(param_2 + 0x19);
  }
  else {
    uVar5 = *(ulong *)(pbVar11 + 8);
    pbVar11 = *(byte **)(pbVar11 + 0x10);
    cVar2 = *(char *)(param_2 + 0x19);
  }
  if (cVar2 == '\0') {
    FUN_0080dbe0(param_2,pbVar11,uVar5);
    return;
  }
  FUN_0080dcc0(param_2);
  return;
}


