/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00533320; name: FUN_00533320
 */


uint FUN_00533320(long param_1)

{
  float *pfVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float local_14;
  
  if (*(char *)(param_1 + 0x106e) == '\0') {
    return 0;
  }
  iVar9 = *(int *)(param_1 + 0x630);
  lVar7 = *(long *)(param_1 + 400);
  if (iVar9 == -1) {
    iVar9 = *(int *)(lVar7 + 0x90);
    iVar8 = *(int *)(lVar7 + 0x30);
    if (iVar9 < iVar8) goto LAB_00533348;
LAB_00533378:
    lVar4 = 0;
    iVar9 = *(int *)(param_1 + 0x634);
    if (iVar9 == -1) goto LAB_005333a8;
LAB_00533388:
    if (iVar8 <= iVar9) goto LAB_005333b4;
LAB_00533390:
    uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + (long)iVar9 * 8);
    iVar9 = *(int *)(param_1 + 0x638);
    if (iVar9 != -1) goto LAB_005333c4;
LAB_005333d8:
    iVar9 = *(int *)(lVar7 + 0x90);
    if (iVar8 <= iVar9) goto LAB_005333e4;
  }
  else {
    iVar8 = *(int *)(lVar7 + 0x30);
    if (iVar8 <= iVar9) goto LAB_00533378;
LAB_00533348:
    lVar4 = *(long *)(*(long *)(lVar7 + 0x38) + (long)iVar9 * 8);
    iVar9 = *(int *)(param_1 + 0x634);
    if (iVar9 != -1) goto LAB_00533388;
LAB_005333a8:
    iVar9 = *(int *)(lVar7 + 0x90);
    if (iVar9 < iVar8) goto LAB_00533390;
LAB_005333b4:
    uVar5 = 0;
    iVar9 = *(int *)(param_1 + 0x638);
    if (iVar9 == -1) goto LAB_005333d8;
LAB_005333c4:
    if (iVar8 <= iVar9) {
LAB_005333e4:
      uVar6 = 0;
      goto LAB_005333e8;
    }
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + (long)iVar9 * 8);
LAB_005333e8:
  fVar10 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x58));
  local_18 = 5.0;
  local_14 = *(float *)(param_1 + 0x1070) * fVar10 * DAT_01d4c294;
  if (*(char *)(param_1 + 0xc78) == '\0') {
    bVar2 = true;
    if ((*(int *)(param_1 + 0x568) == 0) && (bVar2 = false, !NAN(local_14))) {
      bVar2 = local_14 < 5.0;
    }
    pfVar1 = &local_14;
    if (!bVar2) {
      pfVar1 = &local_18;
    }
    local_28 = *pfVar1;
    fStack_24 = local_28;
    local_20 = local_28;
    local_14 = local_28;
  }
  else {
    if (*(int *)(param_1 + 0x568) == 0) {
      local_28 = 4.776911;
      pfVar1 = &local_14;
      if (DAT_01d4c498 <= local_14) {
        pfVar1 = &local_28;
      }
      local_14 = *pfVar1;
    }
    local_28 = local_14 * DAT_01d4bd4c;
    fStack_24 = local_14 * DAT_01d4c5d4;
    local_20 = local_14 * DAT_01d4c318;
  }
  local_28 = -local_28;
  fStack_1c = local_14;
  uVar3 = FUN_00532d50(DAT_01d4c6b4,param_1,lVar4,uVar5,0,uVar6,&local_28,2,1,1);
  return uVar3 & (int)uVar3 >> 0x1f;
}


