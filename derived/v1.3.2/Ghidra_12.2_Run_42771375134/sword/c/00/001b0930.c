/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b0930; name: FUN_001b0930
 */


void FUN_001b0930(undefined8 *param_1,long *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  long lVar12;
  float fVar13;
  int local_38;
  int iStack_34;
  undefined4 local_30;
  uint uStack_2c;
  long *local_28;
  
  if ((char)param_2[1] != '\0') {
    param_1[1] = 0;
    param_1[2] = param_2;
    *param_1 = 0;
    return;
  }
  local_38 = *(int *)((long)param_2 + 0xc);
  iStack_34 = *(int *)((long)param_2 + 0x14);
  iVar1 = *(int *)(*(long *)(*param_2 + 0x10) + 0x3c);
  uStack_2c = iStack_34 + iVar1 * local_38;
  local_30 = 0;
  local_28 = param_2;
  if ((int)param_2[3] + (int)param_2[2] * iVar1 != uStack_2c) {
    lVar12 = *(long *)(*(long *)(*param_2 + 0x10) + 0x50);
    if ((~*(byte *)(lVar12 + (ulong)(uStack_2c & 0x7fffffff) * 4 + 2) & 0x7f) != 0) {
      fVar4 = (float)(int)*(short *)(lVar12 + (ulong)(uStack_2c + iVar1) * 4);
      fVar5 = (float)(int)*(short *)(lVar12 + (ulong)(uStack_2c + iVar1 + 1) * 4);
      fVar13 = *(float *)(param_2 + 4);
      fVar2 = (float)(int)*(short *)(lVar12 + (ulong)uStack_2c * 4);
      fVar3 = (float)(int)*(short *)(lVar12 + (ulong)(uStack_2c + 1) * 4);
      bVar6 = false;
      if ((fVar13 < fVar5) && (bVar6 = false, !NAN(fVar13) && !NAN(fVar4))) {
        bVar6 = fVar13 < fVar4;
      }
      bVar7 = false;
      if ((bVar6) && (bVar7 = false, !NAN(fVar13) && !NAN(fVar2))) {
        bVar7 = fVar13 < fVar2;
      }
      bVar6 = false;
      if ((bVar7) && (bVar6 = false, !NAN(fVar13) && !NAN(fVar3))) {
        bVar6 = fVar13 < fVar3;
      }
      if (!bVar6) {
        fVar13 = *(float *)((long)param_2 + 0x1c);
        bVar6 = false;
        bVar7 = true;
        bVar10 = false;
        if (fVar5 < fVar13) {
          bVar6 = false;
          bVar7 = false;
          bVar10 = true;
          if (!NAN(fVar13) && !NAN(fVar4)) {
            bVar6 = fVar13 < fVar4;
            bVar7 = fVar13 == fVar4;
            bVar10 = false;
          }
        }
        bVar8 = false;
        bVar9 = true;
        bVar11 = false;
        if (!bVar7 && bVar6 == bVar10) {
          bVar8 = false;
          bVar9 = false;
          bVar11 = true;
          if (!NAN(fVar13) && !NAN(fVar2)) {
            bVar8 = fVar13 < fVar2;
            bVar9 = fVar13 == fVar2;
            bVar11 = false;
          }
        }
        bVar6 = false;
        bVar7 = true;
        bVar10 = false;
        if (!bVar9 && bVar8 == bVar11) {
          bVar6 = false;
          bVar7 = false;
          bVar10 = true;
          if (!NAN(fVar13) && !NAN(fVar3)) {
            bVar6 = fVar13 < fVar3;
            bVar7 = fVar13 == fVar3;
            bVar10 = false;
          }
        }
        if (bVar7 || bVar6 != bVar10) goto LAB_001b0a3c;
      }
    }
    FUN_001b0a60(&local_38);
  }
LAB_001b0a3c:
  param_1[1] = CONCAT44(uStack_2c,local_30);
  param_1[2] = local_28;
  *param_1 = CONCAT44(iStack_34,local_38);
  return;
}


