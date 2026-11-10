/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00582460; name: FUN_00582460
 */


undefined8
FUN_00582460(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,float *param_6,
            undefined4 param_7,uint param_8,float *param_9,byte param_10)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
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
  float fVar28;
  float fVar29;
  int local_2c4;
  float local_2bc;
  uint local_2b8 [2];
  undefined8 local_2b0 [31];
  int local_1b8 [2];
  float afStack_1b0 [62];
  long local_b8 [3];
  
  fVar19 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x58));
  fVar19 = param_6[1] * fVar19;
  fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x54));
  fVar17 = *param_6 * fVar17;
  fVar18 = fVar17 * fVar17 + fVar19 * fVar19;
  bVar2 = true;
  if ((fVar18 != 0.0) && (bVar2 = false, !NAN(fVar18))) {
    bVar2 = fVar18 == 1.0;
  }
  if (!bVar2) {
    fVar25 = SQRT(fVar18);
    if (!NAN(fVar25)) goto LAB_005824f8;
    fVar18 = sqrtf(fVar18);
  }
  fVar25 = fVar18;
LAB_005824f8:
  iVar5 = 5;
  if (1 < *(int *)(param_2 + 0x29a64)) {
    iVar5 = *(int *)(param_2 + 0x29a64) + 1;
  }
  piVar6 = (int *)(param_2 + (-(ulong)(param_8 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_8 << 2)
                             + (long)iVar5 * 0x58 + 0x98);
  uVar7 = (long)iVar5;
  do {
    iVar5 = *piVar6;
    uVar12 = uVar7 - 1;
    if ((long)uVar7 < 3) break;
    piVar6 = piVar6 + -0x16;
    uVar7 = uVar12;
  } while (iVar5 == 0);
  FUN_00511d20(fVar25,param_1,uVar12 & 0xffffffff,0,param_7,local_1b8,local_2b8,local_b8);
  local_2c4 = local_1b8[0];
  if (local_1b8[0] == 0) {
    if (param_3 == param_4) {
      return 0;
    }
    fVar17 = 0.0;
    fVar18 = 0.0;
    uVar15 = 1;
    local_2c4 = 1;
  }
  else {
    fVar17 = -(fVar17 * ((float)local_b8[0] / fVar25));
    fVar18 = -(fVar19 * ((float)local_b8[0] / fVar25));
    uVar15 = local_2b8[0];
  }
  uVar1 = 0;
  if (local_2c4 != 1 || uVar15 != 1) {
    uVar1 = param_8;
  }
  if ((param_10 & 1) != 0) {
    (**(code **)(**(long **)(param_2 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_2 + 0x20) + 0x140))(*(long **)(param_2 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_2 + 0x20) + 0x150))(*(long **)(param_2 + 0x20),0);
  }
  fVar29 = *(float *)(param_3 + 0x88);
  fVar27 = *(float *)(param_3 + 0x8c);
  fVar25 = *(float *)(param_3 + 0x90);
  fVar19 = *(float *)(param_3 + 0x94);
  local_b8[0] = param_5;
  local_b8[1] = param_3;
  if (0 < local_2c4) {
    fVar20 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x54));
    fVar21 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x58));
    fVar22 = (float)(int)(uint)uVar12;
    uVar13 = 0;
    do {
      if (uVar13 == local_2c4 - 1U) {
        fVar26 = *param_9;
        local_2bc = param_9[1];
        fVar28 = param_9[2];
        fVar24 = param_9[3];
        lVar14 = param_4;
        uVar16 = uVar15;
        fVar23 = (float)(int)uVar15;
      }
      else {
        fVar24 = 1.0;
        lVar14 = local_b8[uVar13 & 1];
        fVar28 = 1.0;
        fVar26 = 1.0;
        local_2bc = 1.0;
        uVar16 = (uint)uVar12;
        fVar23 = fVar22;
      }
      FUN_0059d300(lVar14,0,0,1,0,0);
      FUN_0059d000(0,0);
      lVar9 = param_3;
      if (0 < (int)uVar16) {
        fVar23 = 1.0 / fVar23;
        uVar7 = 0;
        pfVar10 = afStack_1b0;
        puVar11 = local_2b0;
        do {
          iVar5 = (int)uVar7;
          uVar7 = uVar7 + 1;
          pfVar10[-2] = fVar26 * fVar23;
          pfVar10[-1] = local_2bc * fVar23;
          *pfVar10 = fVar28 * fVar23;
          pfVar10[1] = fVar24 * fVar23;
          *puVar11 = 0;
          *(float *)(puVar11 + -1) = fVar29 * (float)iVar5 * fVar17;
          *(float *)((long)puVar11 + -4) = fVar27 * (float)iVar5 * fVar18;
          puVar11 = puVar11 + 2;
          pfVar10 = pfVar10 + 4;
        } while (uVar16 != uVar7);
      }
      do {
        lVar8 = lVar9;
        lVar9 = *(long *)(lVar8 + 0x120);
      } while (lVar9 != 0);
      uVar3 = (**(code **)(**(long **)(lVar8 + 0xa8) + 0x80))();
      lVar9 = param_3;
      do {
        lVar8 = lVar9;
        lVar9 = *(long *)(lVar8 + 0x120);
      } while (lVar9 != 0);
      plVar4 = *(long **)(lVar8 + 0xa8);
      (**(code **)(*plVar4 + 0x78))(plVar4,4);
      lVar9 = param_3;
      do {
        lVar8 = lVar9;
        lVar9 = *(long *)(lVar8 + 0x120);
      } while (lVar9 != 0);
      FUN_00575a10(0,0,fVar20,fVar21,0,0,fVar29 * fVar20 + fVar25,fVar27 * fVar21 + fVar19,param_2,
                   uVar16,local_2b8,local_1b8,*(undefined8 *)(lVar8 + 0xa8),uVar1,0);
      do {
        lVar9 = param_3;
        param_3 = *(long *)(lVar9 + 0x120);
      } while (param_3 != 0);
      plVar4 = *(long **)(lVar9 + 0xa8);
      (**(code **)(*plVar4 + 0x78))(plVar4,uVar3);
      if ((int)uVar13 < (int)(local_2c4 - 1U)) {
        FUN_0053fd40(*(undefined8 *)(param_2 + 0x20));
      }
      fVar17 = fVar17 * fVar22;
      fVar18 = fVar18 * fVar22;
      uVar13 = uVar13 + 1;
      param_3 = lVar14;
    } while ((int)uVar13 < local_2c4);
  }
  return 0;
}


