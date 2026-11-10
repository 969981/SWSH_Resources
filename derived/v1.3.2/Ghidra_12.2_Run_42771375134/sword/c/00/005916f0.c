/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005916f0; name: FUN_005916f0
 */


ulong FUN_005916f0(float param_1,float param_2,long param_3,long param_4,long param_5,long param_6,
                  int param_7,undefined4 param_8,float *param_9,long param_10,undefined8 param_11,
                  byte param_12,uint param_13,uint param_14)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong extraout_x9;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_108;
  float local_104;
  undefined8 local_100;
  float local_f8;
  float local_f4;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  
  if (*(long **)(param_3 + 0x20) == (long *)0x0) {
    uVar7 = 0xffffffff;
  }
  else {
    if ((param_12 & 1) != 0) {
      (**(code **)(**(long **)(param_3 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_3 + 0x20) + 0x140))(*(long **)(param_3 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_3 + 0x20) + 0x150))(*(long **)(param_3 + 0x20),0);
    }
    fVar14 = powf(param_2,1.0 / ((float)param_7 + (float)param_7));
    if (0 < param_7) {
      fVar14 = fVar14 * DAT_01d4bd24;
      iVar11 = 0;
      uVar7 = extraout_x9;
      lVar12 = param_4;
      uVar9 = 0;
      do {
        fVar15 = powf(3.0,(float)iVar11);
        fVar16 = cosf(param_1);
        fVar17 = sinf(param_1);
        uVar13 = param_13;
        if (param_13 == 0) {
          uVar13 = *(uint *)(lVar12 + 0x54);
        }
        uVar4 = param_14;
        if (param_14 == 0) {
          uVar4 = *(uint *)(lVar12 + 0x58);
        }
        fVar19 = fVar17 * 0.0;
        fVar18 = fVar16 * 0.0;
        fVar25 = *(float *)(lVar12 + 0x88);
        fVar26 = *(float *)(lVar12 + 0x8c);
        fVar23 = *(float *)(lVar12 + 0x90);
        fVar24 = *(float *)(lVar12 + 0x94);
        uVar10 = param_13;
        if (param_13 == 0) {
          uVar10 = *(uint *)(param_5 + 0x54);
        }
        fVar22 = fVar16 * -fVar15 - fVar19;
        fVar27 = fVar18 - fVar17 * fVar15;
        fVar21 = fVar16 * fVar15 * 0.0 - fVar19;
        fVar20 = fVar18 + fVar17 * fVar15 * 0.0;
        fVar19 = fVar16 * fVar15 - fVar19;
        fVar18 = fVar18 + fVar17 * fVar15;
        uVar8 = param_14;
        if (param_14 == 0) {
          uVar8 = *(uint *)(param_5 + 0x58);
        }
        fVar15 = *(float *)(param_4 + 0x88);
        fVar16 = *(float *)(param_4 + 0x8c);
        local_104 = fVar16 * fVar27;
        local_100 = 0;
        local_f0 = 0;
        local_108 = fVar15 * fVar22;
        local_f8 = fVar15 * fVar21;
        local_f4 = fVar16 * fVar20;
        local_e8 = fVar15 * fVar19;
        local_e4 = fVar16 * fVar18;
        local_e0 = 0;
        local_d8 = fVar14;
        fStack_d4 = fVar14;
        local_d0 = fVar14;
        fStack_cc = fVar14;
        local_c8 = fVar14;
        fStack_c4 = fVar14;
        local_c0 = fVar14;
        fStack_bc = fVar14;
        local_b8 = fVar14;
        fStack_b4 = fVar14;
        local_b0 = fVar14;
        fStack_ac = fVar14;
        uVar3 = FUN_0059d300(param_5,0,0,1,0,0);
        if ((int)uVar3 < 0) goto LAB_00591c20;
        fVar23 = fVar25 * (float)uVar13 + fVar23;
        fVar24 = fVar26 * (float)uVar4 + fVar24;
        FUN_0059d000(0,0);
        do {
          lVar6 = lVar12;
          lVar12 = *(long *)(lVar6 + 0x120);
        } while (lVar12 != 0);
        uVar5 = *(undefined8 *)(lVar6 + 0xa8);
        if (param_10 == 0) {
          uVar3 = FUN_00575a10(0,0,(float)uVar10,(float)uVar8,0,0,fVar23,fVar24,param_3,3,&local_108
                               ,&local_d8,uVar5,uVar9,0);
        }
        else {
          lVar12 = param_10;
          do {
            lVar6 = lVar12;
            lVar12 = *(long *)(lVar6 + 0x120);
          } while (lVar12 != 0);
          uVar3 = FUN_00576340(0,0,(float)uVar10,(float)uVar8,0,0,fVar23,fVar24,param_3,3,&local_108
                               ,&local_d8,param_11,uVar5,*(undefined8 *)(lVar6 + 0xa8),uVar9,0);
        }
        if ((int)uVar3 < 0) goto LAB_00591c20;
        if (param_13 == 0) {
          uVar13 = *(uint *)(param_5 + 0x54);
          if (param_14 != 0) goto LAB_005919bc;
LAB_00591b8c:
          uVar4 = *(uint *)(param_5 + 0x58);
          fVar17 = *(float *)(param_5 + 0x88);
          fVar23 = *(float *)(param_5 + 0x8c);
          fVar24 = *(float *)(param_5 + 0x90);
          fVar25 = *(float *)(param_5 + 0x94);
        }
        else {
          uVar13 = param_13;
          if (param_14 == 0) goto LAB_00591b8c;
LAB_005919bc:
          fVar17 = *(float *)(param_5 + 0x88);
          fVar23 = *(float *)(param_5 + 0x8c);
          fVar24 = *(float *)(param_5 + 0x90);
          fVar25 = *(float *)(param_5 + 0x94);
          uVar4 = param_14;
        }
        uVar10 = param_13;
        if (param_13 == 0) {
          uVar10 = *(uint *)(param_6 + 0x54);
        }
        uVar8 = param_14;
        if (param_14 == 0) {
          uVar8 = *(uint *)(param_6 + 0x58);
        }
        local_108 = -(fVar15 * fVar27);
        bVar2 = iVar11 != param_7 + -1;
        local_104 = fVar16 * fVar22;
        fStack_d4 = fVar14 * param_9[1];
        if (bVar2) {
          fStack_d4 = fVar14;
        }
        local_f8 = -(fVar15 * fVar20);
        local_d8 = fVar14 * *param_9;
        if (bVar2) {
          local_d8 = fVar14;
        }
        local_e8 = -(fVar15 * fVar18);
        local_f4 = fVar16 * fVar21;
        fStack_cc = fVar14 * param_9[3];
        local_d0 = fVar14 * param_9[2];
        if (bVar2) {
          fStack_cc = fVar14;
          local_d0 = fVar14;
        }
        local_100 = 0;
        local_f0 = 0;
        local_e0 = 0;
        local_e4 = fVar16 * fVar19;
        local_c8 = local_d8;
        fStack_c4 = fStack_d4;
        local_c0 = local_d0;
        fStack_bc = fStack_cc;
        local_b8 = local_d8;
        fStack_b4 = fStack_d4;
        local_b0 = local_d0;
        fStack_ac = fStack_cc;
        uVar3 = FUN_0059d300(param_6,0,0,1,0,0);
        if ((int)uVar3 < 0) {
LAB_00591c20:
          return (ulong)uVar3;
        }
        lVar12 = param_5;
        do {
          lVar6 = lVar12;
          lVar12 = *(long *)(lVar6 + 0x120);
        } while (lVar12 != 0);
        uVar5 = *(undefined8 *)(lVar6 + 0xa8);
        uVar1 = param_8;
        if (iVar11 != param_7 + -1) {
          uVar1 = uVar9;
        }
        if (param_10 == 0) {
          uVar4 = FUN_00575a10(0,0,(float)uVar10,(float)uVar8,0,0,fVar17 * (float)uVar13 + fVar24,
                               fVar23 * (float)uVar4 + fVar25,param_3,3,&local_108,&local_d8,uVar5,
                               uVar1,0);
          uVar13 = uVar4;
          if (-1 < (int)uVar4) {
            uVar13 = (uint)uVar7;
          }
        }
        else {
          lVar12 = param_10;
          do {
            lVar6 = lVar12;
            lVar12 = *(long *)(lVar6 + 0x120);
          } while (lVar12 != 0);
          uVar4 = FUN_00576340(0,0,(float)uVar10,(float)uVar8,0,0,param_3,3,&local_108,&local_d8,
                               param_11,uVar5,*(undefined8 *)(lVar6 + 0xa8),uVar1,0);
          uVar13 = uVar4;
          if (-1 < (int)uVar4) {
            uVar13 = (uint)uVar7;
          }
        }
        uVar7 = (ulong)uVar13;
        if ((int)uVar4 < 0) {
          return uVar7;
        }
        iVar11 = iVar11 + 1;
        lVar12 = param_6;
        uVar9 = uVar1;
      } while (iVar11 < param_7);
    }
    uVar7 = 0;
  }
  return uVar7;
}


