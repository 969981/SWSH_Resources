/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00475870; name: FUN_00475870
 */


void FUN_00475870(long param_1,int param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_68 [8];
  
  *(undefined4 *)(param_3 + 1) = 0xffffffff;
  fVar6 = *(float *)(param_1 + 0x44);
  fVar9 = *(float *)(param_1 + 0x48);
  iVar1 = *(int *)(param_1 + 0x4c);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x40);
  param_3[3] = uVar5;
  *(int *)((long)param_3 + 0x2c) = iVar1;
  param_3[6] = uVar4;
  *(float *)((long)param_3 + 0x24) = fVar6;
  *(float *)(param_3 + 5) = fVar9;
  if (iVar1 == 0) {
    fVar7 = DAT_01d4bdf4;
LAB_004758f4:
    fVar6 = fmodf(fVar6,fVar7);
    *(float *)((long)param_3 + 0x24) = fVar6;
  }
  else if (iVar1 != 5) {
    fVar7 = 1.0;
    goto LAB_004758f4;
  }
  fVar8 = *(float *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 0x1c);
  fVar7 = fVar8;
  if (uVar2 - param_2 < uVar3) {
    fVar7 = (fVar8 * (float)(uVar2 - param_2)) / (float)uVar3;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    if (uVar2 < uVar3) {
      fVar8 = (fVar8 * (float)uVar2) / (float)uVar3;
    }
    FUN_00475a00(fVar8,fVar7,*(undefined4 *)(param_1 + 0x30),param_3 + 3,param_4,param_2,auStack_68)
    ;
    *(undefined4 *)((long)param_3 + 0xc) = *(undefined4 *)(param_4 + (ulong)(param_2 - 1) * 4);
    *(float *)(param_3 + 2) = fVar8;
    return;
  }
  fVar6 = fVar6 + (float)(param_2 - 1) * fVar9;
  *param_3 = 0;
  *(float *)((long)param_3 + 0x24) = fVar6;
  if (iVar1 == 0) {
    fVar9 = DAT_01d4bdf4;
  }
  else {
    if (iVar1 == 5) goto LAB_004759b4;
    fVar9 = 1.0;
  }
  fVar6 = fmodf(fVar6,fVar9);
  *(float *)((long)param_3 + 0x24) = fVar6;
LAB_004759b4:
  FUN_00475a00(fVar7,fVar7,*(undefined4 *)(param_1 + 0x30),param_3 + 3,(long)param_3 + 0xc,1,
               auStack_68);
  *(undefined4 *)(param_3 + 2) = *(undefined4 *)((long)param_3 + 0xc);
  return;
}


