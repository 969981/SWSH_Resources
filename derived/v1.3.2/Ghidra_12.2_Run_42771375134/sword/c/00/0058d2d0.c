/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058d2d0; name: FUN_0058d2d0
 */


ulong FUN_0058d2d0(float param_1,long param_2,long param_3,uint param_4,long *param_5,float *param_6
                  ,undefined4 param_7,uint param_8)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 local_268 [16];
  float local_228 [64];
  undefined8 local_128 [17];
  
  if (*(long **)(param_2 + 0x20) == (long *)0x0) {
    return 0xffffffff;
  }
  uVar11 = (ulong)param_4;
  if ((param_8 & 1) != 0) {
    (**(code **)(**(long **)(param_2 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_2 + 0x20) + 0x140))(*(long **)(param_2 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_2 + 0x20) + 0x150))(*(long **)(param_2 + 0x20),0);
  }
  lVar12 = *param_5;
  if (param_1 == 1.0) {
LAB_0058d3f0:
    bVar1 = 0 < (int)param_4;
    if (0 < (int)param_4) {
      uVar6 = 0;
      lVar14 = lVar12;
      while( true ) {
        lVar10 = lVar14;
        do {
          lVar9 = lVar10;
          lVar10 = *(long *)(lVar9 + 0x120);
        } while (lVar10 != 0);
        plVar13 = *(long **)(lVar9 + 0xa8);
        uVar4 = (**(code **)(*plVar13 + 0x80))(plVar13);
        local_268[uVar6] = uVar4;
        if (*(int *)(lVar14 + 0x54) == *(int *)(param_3 + 0x54)) {
          bVar3 = *(int *)(lVar14 + 0x58) == *(int *)(param_3 + 0x58);
        }
        else {
          bVar3 = false;
        }
        (**(code **)(*plVar13 + 0x88))(plVar13,bVar3);
        (**(code **)(*plVar13 + 0x90))(plVar13,1);
        uVar6 = uVar6 + 1;
        if (uVar6 == uVar11) break;
        lVar14 = param_5[uVar6];
      }
      goto LAB_0058d4b0;
    }
  }
  else {
    if (0 < (int)param_4) {
      uVar6 = (ulong)param_4;
      if (param_6 == (float *)0x0) {
        pfVar8 = local_228 + 2;
        do {
          pfVar8[-2] = param_1;
          pfVar8[-1] = param_1;
          uVar6 = uVar6 - 1;
          *pfVar8 = param_1;
          pfVar8[1] = param_1;
          pfVar8 = pfVar8 + 4;
        } while (uVar6 != 0);
      }
      else {
        pfVar8 = local_228 + 2;
        pfVar7 = param_6 + 2;
        do {
          fVar15 = pfVar7[-2];
          fVar17 = pfVar7[-1];
          fVar19 = *pfVar7;
          pfVar8[1] = pfVar7[1] * param_1;
          pfVar8[-1] = fVar17 * param_1;
          *pfVar8 = fVar19 * param_1;
          pfVar8[-2] = fVar15 * param_1;
          uVar6 = uVar6 - 1;
          pfVar8 = pfVar8 + 4;
          pfVar7 = pfVar7 + 4;
        } while (uVar6 != 0);
      }
      param_6 = local_228;
      goto LAB_0058d3f0;
    }
    param_6 = local_228;
  }
  bVar1 = false;
LAB_0058d4b0:
  uVar4 = *(undefined4 *)(lVar12 + 0x54);
  uVar20 = *(undefined4 *)(lVar12 + 0x58);
  fVar17 = *(float *)(lVar12 + 0x88);
  fVar19 = *(float *)(lVar12 + 0x8c);
  fVar21 = *(float *)(lVar12 + 0x90);
  fVar15 = *(float *)(lVar12 + 0x94);
  uVar5 = *(uint *)(param_3 + 0x54);
  uVar2 = *(uint *)(param_3 + 0x58);
  uVar6 = FUN_0059d300(param_3,0,0,1,0,0);
  if (-1 < (int)uVar6) {
    fVar16 = (float)NEON_ucvtf(uVar4);
    fVar18 = (float)NEON_ucvtf(uVar20);
    FUN_0059d000(0,0);
    if (bVar1) {
      uVar6 = 0;
      do {
        lVar12 = param_5[uVar6];
        do {
          lVar14 = lVar12;
          lVar12 = *(long *)(lVar14 + 0x120);
        } while (lVar12 != 0);
        local_128[uVar6] = *(undefined8 *)(lVar14 + 0xa8);
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar11);
    }
    uVar5 = FUN_00576c70(0,0,(float)uVar5,(float)uVar2,0,0,fVar17 * fVar16 + fVar21,
                         fVar19 * fVar18 + fVar15,param_2,uVar11,local_128,param_6,param_7,0);
    if (bVar1) {
      uVar6 = 0;
      do {
        lVar12 = param_5[uVar6];
        do {
          lVar14 = lVar12;
          lVar12 = *(long *)(lVar14 + 0x120);
        } while (lVar12 != 0);
        plVar13 = *(long **)(lVar14 + 0xa8);
        (**(code **)(*plVar13 + 0x78))(plVar13,local_268[uVar6]);
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar11);
    }
    uVar6 = (ulong)(uVar5 & (int)uVar5 >> 0x1f);
  }
  return uVar6;
}


