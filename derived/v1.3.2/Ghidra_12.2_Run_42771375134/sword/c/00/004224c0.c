/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004224c0; name: FUN_004224c0
 */


/* WARNING: Removing unreachable block (ram,0x00422774) */
/* WARNING: Removing unreachable block (ram,0x00422804) */

undefined8 FUN_004224c0(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  size_t __nmemb;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int local_3d0 [16];
  float local_390 [16];
  undefined4 local_350 [4];
  undefined4 auStack_340 [60];
  undefined4 local_250 [64];
  float local_150 [64];
  
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)*(uint *)(param_1 + 0x128) * 0xa8);
  *(long *)(param_1 + 0x140) = lVar2;
  if (lVar2 == 0) {
    return 0x34;
  }
  uVar6 = *(uint *)(param_1 + 0x128);
  if (uVar6 == 0) {
LAB_00422588:
    *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  }
  else {
    lVar9 = 0;
    uVar10 = 1;
    lVar5 = lVar2;
    while( true ) {
      if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        memset((void *)(lVar2 + lVar9),0,0xa8);
      }
      if (uVar6 <= uVar10) break;
      lVar2 = *(long *)(param_1 + 0x140);
      lVar9 = lVar9 + 0xa8;
      uVar10 = uVar10 + 1;
      lVar5 = lVar2 + lVar9;
    }
    if (uVar6 < 2) goto LAB_00422588;
    *(float *)(param_1 + 0x124) = 1.0 / SQRT((float)uVar6);
  }
  if ((uVar6 & 0x3fffffff) == 0) {
    __nmemb = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x158);
    fVar12 = *(float *)(lVar2 + 0x9c) +
             (*(float *)(lVar2 + 0xa0) - *(float *)(lVar2 + 0x9c)) *
             *(float *)(lVar2 + 0x6c) * DAT_01d4c4d4;
    fVar11 = (*(float *)(lVar2 + 0xa8) +
             (*(float *)(lVar2 + 0xac) - *(float *)(lVar2 + 0xa8)) *
             *(float *)(lVar2 + 0x70) * DAT_01d4c4d4) * fVar12;
    fVar13 = 1.0 / (float)(uVar6 * 4 - 1);
    uVar10 = 0;
    __nmemb = (size_t)(uVar6 * 4);
    uVar6 = 0x6b4cc7;
    do {
      uVar6 = uVar6 * 0xbb38435 + 0x3619636b;
      fVar14 = fVar11 + (float)(uVar10 & 0xffffffff) * (fVar12 - fVar11) * (fVar13 + fVar13);
      local_150[uVar10] = fVar14 + fVar14 * *(float *)(lVar2 + 0xa4) * DAT_01d4bc38 * (float)uVar6;
      uVar10 = uVar10 + 1;
    } while (__nmemb != uVar10);
  }
  qsort(local_150,__nmemb,4,(__compar_fn_t)&LAB_00428560);
  FUN_00428440(local_150,*(undefined4 *)(param_1 + 0x130),*(int *)(param_1 + 0x128) << 2,local_250);
  uVar6 = *(uint *)(param_1 + 0x128);
  if (uVar6 == 0) {
    return 1;
  }
  local_350[0] = local_250[0];
  local_350[1] = local_250[uVar6];
  local_350[2] = local_250[uVar6 * 2];
  local_350[3] = local_250[uVar6 * 3];
  if (uVar6 == 1) {
    lVar2 = *(long *)(param_1 + 0x158);
    uVar4 = 1;
  }
  else {
    uVar4 = 7;
    uVar10 = 1;
    do {
      local_350[uVar4 - 3] = local_250[uVar10];
      iVar7 = (int)uVar10;
      local_350[uVar4 - 2] = local_250[uVar6 + iVar7];
      local_350[uVar4 - 1] = local_250[uVar6 * 2 + iVar7];
      uVar10 = uVar10 + 1;
      local_350[uVar4] = local_250[uVar6 * 3 + iVar7];
      uVar4 = uVar4 + 4;
    } while (uVar10 < uVar6);
    lVar2 = *(long *)(param_1 + 0x158);
    uVar4 = uVar6;
    if (uVar6 == 0) goto LAB_00422884;
  }
  uVar10 = (ulong)uVar4;
  fVar11 = *(float *)(lVar2 + 0xc0) * (1.0 / (float)uVar4);
  fVar12 = *(float *)(lVar2 + 0xc4) * DAT_01d4bc38 * fVar11;
  if (uVar4 == 1) {
    lVar5 = 0;
    fVar13 = DAT_01d4c470;
LAB_004227d8:
    local_390[lVar5] = fVar12 * fVar13 + fVar11;
  }
  else {
    uVar8 = 0x1bc0f99;
    lVar9 = 0;
    do {
      uVar1 = uVar8 * 0xbb38435 + 0x3619636b;
      uVar8 = uVar1 * 0xbb38435 + 0x3619636b;
      lVar5 = lVar9 + 2;
      local_390[lVar9] = fVar11 + (float)uVar1 * fVar12;
      local_390[lVar9 + 1] = fVar11 + (float)uVar8 * fVar12;
      lVar9 = lVar5;
    } while (uVar10 - (uVar10 & 1) != lVar5);
    fVar13 = (float)(uVar8 * 0xbb38435 + 0x3619636b);
    if ((uVar4 & 1) != 0) goto LAB_004227d8;
  }
  fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
  if (uVar4 == 1) {
    lVar5 = 0;
  }
  else {
    lVar9 = 0;
    do {
      lVar5 = lVar9 + 2;
      fVar12 = local_390[lVar9 + 1];
      local_3d0[lVar9] = (int)(local_390[lVar9] * DAT_01d4c6ac * fVar11);
      local_3d0[lVar9 + 1] = (int)(fVar12 * DAT_01d4c6ac * fVar11);
      lVar9 = lVar5;
    } while (uVar10 - (uVar10 & 1) != lVar5);
    if ((uVar4 & 1) == 0) goto LAB_00422884;
  }
  local_3d0[lVar5] = (int)(local_390[lVar5] * DAT_01d4c6ac * fVar11);
LAB_00422884:
  if (uVar6 != 0) {
    uVar3 = FUN_00428fb0(*(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc),
                         *(undefined8 *)(param_1 + 0x140),param_2,local_350,
                         *(undefined4 *)(param_1 + 0x130));
    if ((int)uVar3 != 1) {
      return uVar3;
    }
    uVar10 = 0;
    while( true ) {
      uVar3 = FUN_0042b140(*(long *)(param_1 + 0x140) + uVar10 * 0xa8 + 0x90,param_2,
                           local_3d0[uVar10]);
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      uVar10 = uVar10 + 1;
      if (*(uint *)(param_1 + 0x128) <= uVar10) break;
      uVar3 = FUN_00428fb0(*(undefined4 *)(*(long *)(param_1 + 0x158) + 8),
                           *(undefined4 *)(*(long *)(param_1 + 0x158) + 0xc),
                           *(long *)(param_1 + 0x140) + uVar10 * 0xa8,param_2,
                           (long)local_350 + (uVar10 * 0x10 & 0x3fffffff0),
                           *(undefined4 *)(param_1 + 0x130));
      if ((int)uVar3 != 1) {
        return uVar3;
      }
    }
  }
  return 1;
}


