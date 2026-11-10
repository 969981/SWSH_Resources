/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f9e850; name: FUN_00f9e850
 */


void FUN_00f9e850(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_48 [8];
  
  lVar9 = *param_1;
  if (lVar9 == 0) {
    FUN_01760310(0);
  }
  else {
    FUN_01760c90(lVar9,0xfff0b9d8,(long)(int)param_1[1]);
    if (*param_1 != lVar9) {
      FUN_0175edc0(*param_1,lVar9,1);
    }
  }
  lVar10 = *param_1;
  piVar1 = (int *)*param_3;
  uVar2 = param_3[1];
  uVar6 = FUN_0175ef10(lVar10);
  iVar5 = *piVar1;
  lVar9 = FUN_00f54af0();
  pbVar8 = (byte *)(lVar9 + (long)iVar5 * 0x18);
  bVar4 = *pbVar8;
  if ((bVar4 & 1) == 0) {
    pbVar8 = pbVar8 + 1;
    uVar7 = (ulong)(bVar4 >> 1);
  }
  else {
    lVar9 = lVar9 + (long)iVar5 * 0x18;
    uVar7 = *(ulong *)(lVar9 + 8);
    pbVar8 = *(byte **)(lVar9 + 0x10);
  }
  FUN_01760370(lVar10,pbVar8,uVar7);
  FUN_01760580(lVar10,uVar2,0);
  FUN_01761260(lVar10,uVar6);
  lVar9 = *param_1;
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar6 = FUN_0175ef10(lVar9);
  FUN_00f9e970(auStack_48,lVar9,uVar2,uVar3,uVar6);
  FUN_0175ef30(*param_1,0xfffffffe);
  return;
}


