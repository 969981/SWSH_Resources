/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00593180; name: FUN_00593180
 */


ulong FUN_00593180(long param_1,long param_2,long param_3,undefined8 *param_4,ulong param_5,
                  uint param_6,float *param_7,uint param_8,byte param_9,uint param_10,uint param_11)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  float *pfVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_1e0 [36];
  undefined8 local_150;
  float local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  float local_128;
  float fStack_124;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  undefined8 local_100;
  float local_f8;
  float fStack_f4;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  undefined8 local_c0;
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  undefined8 local_a0;
  
  if (*(long **)(param_1 + 0x20) == (long *)0x0) {
    return 0xffffffff;
  }
  if ((param_8 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_1 + 0x20) + 0x140))(*(long **)(param_1 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x150))(*(long **)(param_1 + 0x20),0);
  }
  if (((param_9 & 1) == 0) &&
     ((((param_6 < 0xf && ((1 << (ulong)(param_6 & 0x1f) & 0x4924U) != 0)) ||
       ((param_6 < 0x15 && ((0x109209U >> (ulong)(param_6 & 0x1f) & 1) != 0)))) ||
      ((param_6 < 0x15 && ((1 << (ulong)(param_6 & 0x1f) & 0x106000U) != 0)))))) {
    lVar10 = param_2;
    do {
      lVar9 = lVar10;
      lVar10 = *(long *)(lVar9 + 0x120);
    } while (lVar10 != 0);
    if ((*(byte *)(*(long *)(lVar9 + 0xa8) + 0x5e) >> 1 & 1) == 0) goto LAB_0059324c;
    bVar4 = false;
    if (param_10 == 0) goto LAB_005934e0;
LAB_0059325c:
    uVar5 = param_10;
    if (param_11 != 0) goto LAB_00593264;
LAB_005934ec:
    uVar1 = *(uint *)(param_2 + 0x58);
    fVar21 = *(float *)(param_2 + 0x88);
    fVar22 = *(float *)(param_2 + 0x8c);
    fVar19 = *(float *)(param_2 + 0x90);
    fVar20 = *(float *)(param_2 + 0x94);
  }
  else {
LAB_0059324c:
    bVar4 = true;
    if (param_10 != 0) goto LAB_0059325c;
LAB_005934e0:
    uVar5 = *(uint *)(param_2 + 0x54);
    if (param_11 == 0) goto LAB_005934ec;
LAB_00593264:
    fVar21 = *(float *)(param_2 + 0x88);
    fVar22 = *(float *)(param_2 + 0x8c);
    fVar19 = *(float *)(param_2 + 0x90);
    fVar20 = *(float *)(param_2 + 0x94);
    uVar1 = param_11;
  }
  if (param_10 == 0) {
    param_10 = *(uint *)(param_3 + 0x54);
  }
  if (param_11 == 0) {
    param_11 = *(uint *)(param_3 + 0x58);
  }
  uVar8 = 9;
  if (!bVar4) {
    uVar8 = 5;
  }
  uVar12 = (ulong)uVar8;
  if (bVar4) {
    local_118 = fVar21 * 0.0;
    local_128 = -fVar21;
    fStack_124 = -fVar22;
    local_120 = 0;
    fStack_f4 = fVar22 * 0.0;
    fStack_114 = fStack_124;
    local_148 = (float)*(undefined4 *)(param_4 + 1);
    local_150 = *param_4;
    local_110 = 0;
    local_108 = fVar21;
    fStack_104 = fStack_124;
    local_100 = 0;
    local_f8 = local_128;
    local_f0 = 0;
    local_13c = *(undefined4 *)((long)param_4 + 0x14);
    local_144 = *(undefined8 *)((long)param_4 + 0xc);
    local_e8 = local_118;
    fStack_e4 = fStack_f4;
    local_e0 = 0;
    local_d8 = fVar21;
    local_d4 = fStack_f4;
    local_d0 = 0;
    local_130 = *(undefined4 *)(param_4 + 4);
    local_138 = param_4[3];
    local_c8 = local_128;
    local_c4 = fVar22;
    local_c0 = 0;
    local_b8 = local_118;
    local_b4 = fVar22;
    local_b0 = 0;
    local_a8 = fVar21;
    local_a4 = fVar22;
    local_a0 = 0;
  }
  else {
    FUN_00512360(0x3f800000,*(undefined4 *)(*(long *)(param_2 + 0x80) + 8),
                 *(undefined4 *)(*(long *)(param_2 + 0x80) + 0xc),param_4,&local_128,&local_150);
  }
  if ((param_5 & 1) != 0) {
    fVar15 = 0.0;
    lVar10 = 1 - uVar12;
    pfVar7 = (float *)&local_150;
    do {
      fVar13 = *pfVar7;
      pfVar2 = pfVar7 + 1;
      pfVar11 = pfVar7 + 2;
      pfVar3 = pfVar7 + 3;
      pfVar7 = pfVar7 + 4;
      fVar15 = fVar15 + fVar13 + *pfVar2 + *pfVar11 + *pfVar3;
      lVar10 = lVar10 + 4;
    } while (lVar10 != 0);
    lVar10 = -1;
    do {
      fVar15 = fVar15 + *pfVar7;
      lVar10 = lVar10 + 1;
      pfVar7 = pfVar7 + 1;
    } while (lVar10 != 0);
    if (fVar15 != 0.0) {
      fVar15 = 1.0 / fVar15;
      goto LAB_005933cc;
    }
  }
  fVar15 = 1.0;
LAB_005933cc:
  fVar13 = *param_7;
  fVar14 = param_7[1];
  fVar16 = param_7[2];
  fVar17 = param_7[3];
  pfVar7 = local_1e0 + 2;
  pfVar11 = (float *)&local_150;
  uVar6 = uVar12;
  do {
    fVar18 = fVar15 * *pfVar11;
    pfVar7[-2] = fVar13 * fVar18;
    pfVar7[-1] = fVar18 * fVar14;
    *pfVar7 = fVar18 * fVar16;
    pfVar7[1] = fVar18 * fVar17;
    uVar6 = uVar6 - 1;
    pfVar7 = pfVar7 + 4;
    pfVar11 = pfVar11 + 1;
  } while (uVar6 != 0);
  uVar6 = FUN_0059d300(param_3,0,0,1,0,0);
  if (-1 < (int)uVar6) {
    FUN_0059d000(0,0);
    do {
      lVar10 = param_2;
      param_2 = *(long *)(lVar10 + 0x120);
    } while (param_2 != 0);
    uVar5 = FUN_00575a10(0,0,(float)param_10,(float)param_11,0,0,fVar21 * (float)uVar5 + fVar19,
                         fVar22 * (float)uVar1 + fVar20,param_1,uVar12,&local_128,local_1e0,
                         *(undefined8 *)(lVar10 + 0xa8),param_6,0);
    uVar6 = (ulong)(uVar5 & (int)uVar5 >> 0x1f);
  }
  return uVar6;
}


