/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008157a0; name: FUN_008157a0
 */


void FUN_008157a0(int param_1,byte *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  uVar6 = param_1 << 3 | 2;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_0080dfa0(param_3);
    bVar1 = *param_2;
  }
  else {
    pbVar8 = *(byte **)(param_3 + 8);
    if (uVar6 < 0x80) {
      pbVar11 = pbVar8;
    }
    else {
      pbVar10 = pbVar8;
      uVar12 = uVar6;
      do {
        uVar6 = uVar12 >> 7;
        uVar2 = uVar12 >> 0xe;
        pbVar11 = pbVar10 + 1;
        *pbVar10 = (byte)uVar12 | 0x80;
        pbVar10 = pbVar11;
        uVar12 = uVar6;
      } while (uVar2 != 0);
    }
    *pbVar11 = (byte)uVar6;
    iVar7 = ((int)pbVar11 + 1) - (int)pbVar8;
    *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar7;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar7;
    bVar1 = *param_2;
  }
  uVar9 = (ulong)bVar1;
  if ((bVar1 & 1) == 0) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    if (*(ulong *)(param_2 + 8) >> 0x1f != 0) {
      FUN_00801270(auStack_50,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/wire_format_lite.cc"
                   ,0x1a8);
      uVar5 = FUN_00800f30(auStack_50,"CHECK failed: (value.size()) <= (kint32max): ");
      FUN_00800fa0(auStack_58,uVar5);
      FUN_00801290(auStack_50);
      uVar9 = (ulong)*param_2;
      bVar4 = (*param_2 & 1) == 0;
    }
  }
  uVar9 = uVar9 >> 1;
  if (!bVar4) {
    uVar9 = *(ulong *)(param_2 + 8);
  }
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_0080dfa0(param_3);
  }
  else {
    pbVar10 = *(byte **)(param_3 + 8);
    uVar13 = uVar9 & 0xffffffff;
    uVar6 = (uint)uVar9;
    pbVar8 = pbVar10;
    pbVar11 = pbVar10;
    if (0x7f < uVar6) {
      do {
        bVar1 = (byte)uVar13;
        uVar13 = uVar9 >> 7 & 0x1ffffff;
        uVar6 = (uint)uVar13;
        uVar3 = uVar9 >> 0xe;
        pbVar11 = pbVar8 + 1;
        *pbVar8 = bVar1 | 0x80;
        uVar9 = uVar13;
        pbVar8 = pbVar11;
      } while ((uVar3 & 0x3ffff) != 0);
    }
    *pbVar11 = (byte)uVar6;
    iVar7 = ((int)pbVar11 + 1) - (int)pbVar10;
    *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar7;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar7;
  }
  pbVar8 = *(byte **)(param_2 + 0x10);
  bVar4 = (*param_2 & 1) == 0;
  if (bVar4) {
    pbVar8 = param_2 + 1;
  }
  uVar6 = (uint)(*param_2 >> 1);
  if (!bVar4) {
    uVar6 = *(uint *)(param_2 + 8);
  }
  if (*(char *)(param_3 + 0x19) == '\0') {
    FUN_0080dbe0(param_3,pbVar8,uVar6);
    return;
  }
  FUN_0080dcc0(param_3);
  return;
}


