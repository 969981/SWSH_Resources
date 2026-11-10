/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00591c60; name: FUN_00591c60
 */


undefined8
FUN_00591c60(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            long param_7,long param_8,long param_9,long param_10,undefined8 param_11,ulong param_12,
            long param_13,int param_14,undefined4 param_15,float *param_16,long param_17,
            undefined8 param_18,byte param_19,uint param_20,uint param_21)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 local_440 [8];
  float local_438 [98];
  undefined1 local_2b0 [8];
  undefined8 local_2a8 [49];
  float local_11c [25];
  long local_b8 [3];
  
  if (*(long **)(param_7 + 0x20) == (long *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar15 = param_12 & 0xffffffff;
    if ((param_19 & 1) != 0) {
      (**(code **)(**(long **)(param_7 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_7 + 0x20) + 0x140))(*(long **)(param_7 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_7 + 0x20) + 0x150))(*(long **)(param_7 + 0x20),0);
    }
    fVar21 = powf(param_2,1.0 / (float)param_14);
    uVar3 = param_20;
    if (param_20 == 0) {
      uVar3 = *(uint *)(param_8 + 0x54);
    }
    uVar18 = param_21;
    if (param_21 == 0) {
      uVar18 = *(uint *)(param_8 + 0x58);
    }
    fVar22 = *(float *)(param_8 + 0x88);
    fVar34 = *(float *)(param_8 + 0x94);
    fVar23 = *(float *)(param_8 + 0x8c);
    fVar35 = *(float *)(param_8 + 0x90);
    if (param_20 == 0) {
      param_20 = *(uint *)(param_9 + 0x54);
    }
    if (param_21 == 0) {
      param_21 = *(uint *)(param_9 + 0x58);
    }
    local_b8[0] = param_10;
    local_b8[1] = param_11;
    fVar24 = sinf(param_1);
    fVar25 = cosf(param_1);
    iVar2 = param_14 + -1;
    if (0 < param_14) {
      uVar10 = param_12 & 3;
      fVar35 = fVar22 * (float)uVar3 + fVar35;
      iVar20 = 0;
      fVar34 = fVar23 * (float)uVar18 + fVar34;
      uVar17 = 0;
      uVar16 = 0;
      do {
        fVar26 = powf(param_4,(float)iVar20);
        lVar19 = param_9;
        fVar27 = param_5;
        if (iVar20 != iVar2) {
          lVar19 = local_b8[uVar17];
          fVar27 = param_6;
        }
        if (0 < (int)param_12) {
          if (uVar15 - 1 < 3) {
            fVar28 = 0.0;
            lVar7 = 0;
          }
          else {
            fVar28 = 0.0;
            lVar7 = 0;
            pfVar12 = local_11c + 2;
            do {
              bVar4 = lVar7 != 0;
              lVar7 = lVar7 + 4;
              fVar29 = fVar21 * fVar27;
              if (bVar4) {
                fVar29 = fVar21;
              }
              fVar28 = fVar28 + fVar29 + fVar21 + fVar21 + fVar21;
              pfVar12[-2] = fVar29;
              pfVar12[-1] = fVar21;
              *pfVar12 = fVar21;
              pfVar12[1] = fVar21;
              pfVar12 = pfVar12 + 4;
            } while (uVar15 - uVar10 != lVar7);
          }
          if (uVar10 != 0) {
            lVar11 = -uVar10;
            do {
              fVar29 = fVar21 * fVar27;
              if (lVar7 != 0) {
                fVar29 = fVar21;
              }
              lVar11 = lVar11 + 1;
              fVar28 = fVar28 + fVar29;
              local_11c[lVar7] = fVar29;
              lVar7 = lVar7 + 1;
            } while (lVar11 != 0);
          }
          if (0 < (int)param_12) {
            fVar27 = fVar22 * fVar26 * param_3;
            fVar26 = fVar23 * fVar26 * param_3;
            if (iVar20 == iVar2) {
              fVar29 = *param_16;
              fVar30 = param_16[1];
              fVar31 = param_16[2];
              fVar32 = param_16[3];
              pfVar8 = local_11c;
              pfVar12 = (float *)(param_13 + 4);
              pfVar9 = local_438;
              puVar13 = local_2a8;
              uVar14 = uVar15;
              do {
                fVar33 = (1.0 / fVar28) * *pfVar8;
                pfVar9[-2] = fVar33 * fVar29;
                pfVar9[-1] = fVar33 * fVar30;
                *pfVar9 = fVar33 * fVar31;
                pfVar9[1] = fVar33 * fVar32;
                uVar14 = uVar14 - 1;
                fVar33 = pfVar12[-1];
                fVar36 = *pfVar12;
                *puVar13 = 0;
                pfVar12 = pfVar12 + 4;
                *(float *)(puVar13 + -1) = fVar27 * (fVar25 * fVar33 - fVar24 * fVar36);
                *(float *)((long)puVar13 + -4) = fVar26 * (fVar24 * fVar33 + fVar25 * fVar36);
                puVar13 = puVar13 + 2;
                pfVar9 = pfVar9 + 4;
                pfVar8 = pfVar8 + 1;
              } while (uVar14 != 0);
            }
            else {
              pfVar9 = local_11c;
              pfVar8 = local_438;
              puVar13 = local_2a8;
              pfVar12 = (float *)(param_13 + 4);
              uVar14 = uVar15;
              do {
                fVar29 = (1.0 / fVar28) * *pfVar9;
                pfVar8[-2] = fVar29;
                pfVar8[-1] = fVar29;
                uVar14 = uVar14 - 1;
                *pfVar8 = fVar29;
                pfVar8[1] = fVar29;
                fVar29 = pfVar12[-1];
                fVar30 = *pfVar12;
                *puVar13 = 0;
                pfVar12 = pfVar12 + 4;
                *(float *)(puVar13 + -1) = fVar27 * (fVar25 * fVar29 - fVar24 * fVar30);
                *(float *)((long)puVar13 + -4) = fVar26 * (fVar24 * fVar29 + fVar25 * fVar30);
                puVar13 = puVar13 + 2;
                pfVar9 = pfVar9 + 1;
                pfVar8 = pfVar8 + 4;
              } while (uVar14 != 0);
            }
          }
        }
        uVar6 = FUN_0059d300(lVar19,0,0,1,0,0);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        do {
          lVar7 = param_8;
          param_8 = *(long *)(lVar7 + 0x120);
        } while (param_8 != 0);
        uVar6 = *(undefined8 *)(lVar7 + 0xa8);
        uVar1 = param_15;
        if (iVar20 != iVar2) {
          uVar1 = uVar16;
        }
        if (param_17 == 0) {
          uVar6 = FUN_00575a10(0,0,(float)param_20,(float)param_21,0,0,fVar35,fVar34,param_7,uVar15,
                               local_2b0,local_440,uVar6,uVar1,0);
          iVar5 = (int)uVar6;
        }
        else {
          lVar7 = param_17;
          do {
            lVar11 = lVar7;
            lVar7 = *(long *)(lVar11 + 0x120);
          } while (lVar7 != 0);
          uVar6 = FUN_00576340(0,0,(float)param_20,(float)param_21,0,0,fVar35,fVar34,param_7,uVar15,
                               local_2b0,local_440,param_18,uVar6,*(undefined8 *)(lVar11 + 0xa8),
                               uVar1,0);
          iVar5 = (int)uVar6;
        }
        if (iVar5 < 0) {
          return uVar6;
        }
        uVar17 = (ulong)(~(uint)uVar17 & 1);
        iVar20 = iVar20 + 1;
        param_8 = lVar19;
        uVar16 = uVar1;
      } while (iVar20 < param_14);
    }
    uVar6 = 0;
  }
  return uVar6;
}


