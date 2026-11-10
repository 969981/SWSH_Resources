/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00194060; name: FUN_00194060
 */


void FUN_00194060(long *param_1,int *param_2,undefined8 param_3,long param_4,long *param_5,
                 undefined8 param_6,long *param_7)

{
  long lVar1;
  float *pfVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  int *piVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar7 = *param_1;
  lVar10 = 0;
  do {
    lVar1 = lVar7 + lVar10;
    lVar10 = lVar10 + 0x40;
    *(undefined4 *)(lVar1 + 8) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x18) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x28) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x38) = 0xffffffff;
  } while (lVar10 != 0x4000);
  *(undefined4 *)(lVar7 + 0x4008) = 0;
  fVar25 = *(float *)(param_1 + 2);
  lVar10 = param_5[1];
  uVar20 = *(uint *)((long)param_1 + 0x14);
  *param_2 = 0;
  uVar16 = (int)lVar10 << 5;
  if (uVar16 == 0) {
    lVar10 = 0;
    uVar16 = *(uint *)(param_5 + 1);
    puVar5 = PTR_DAT_02710c28;
  }
  else {
    plVar6 = (long *)FUN_00400d30();
    lVar10 = (**(code **)(*plVar6 + 0x10))
                       (plVar6,(ulong)uVar16 << 1,"NonTrackedAlloc",
                        "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtSpatialHash.cpp"
                        ,0x66);
    uVar16 = *(uint *)(param_5 + 1);
    puVar5 = PTR_DAT_02710c28;
  }
  uVar16 = uVar16 & 0x7fffffff;
  PTR_DAT_02710c28 = puVar5;
  if (uVar16 != 0) {
    uVar8 = 0;
    fVar25 = fVar25 / (float)(uint)(1 << (ulong)(uVar20 & 0x1f));
    uVar19 = 0;
    do {
      uVar20 = *(uint *)(*param_5 + uVar19 * 4);
      if (uVar20 != 0) {
        uVar8 = *(uint *)(puVar5 + (ulong)((uVar20 & -uVar20) * 0x77cb531 >> 0x1b) * 4) | uVar8;
        uVar20 = uVar20 - 1 & uVar20;
        if (uVar20 != 0) goto joined_r0x00194408;
        uVar12 = uVar19 + 1;
        goto LAB_001941b4;
      }
      uVar19 = uVar19 + 1;
      uVar8 = uVar8 + 0x20;
    } while (uVar19 < uVar16);
  }
  goto LAB_0019440c;
  while( true ) {
    uVar20 = *(uint *)(*param_5 + (uVar12 & 0xffffffff) * 4);
    uVar12 = (ulong)((uint)uVar12 + 1);
    if (uVar20 != 0) break;
LAB_001941b4:
    uVar19 = uVar12 & 0xffffffff;
    if (uVar16 <= (uint)uVar12) {
      uVar20 = 0;
      break;
    }
  }
joined_r0x00194408:
  if (uVar8 != 0xffffffff) {
    uVar16 = 0;
    do {
      uVar12 = (ulong)uVar8;
      pfVar2 = (float *)(param_4 + uVar12 * 0x20);
      pfVar21 = pfVar2 + 7;
      if ((*(byte *)pfVar21 >> 4 & 1) == 0) {
        fVar23 = pfVar2[1];
        fVar24 = pfVar2[2];
        fVar22 = floorf(fVar25 * *pfVar2);
        uVar18 = (uint)fVar22;
        fVar22 = floorf(fVar25 * fVar23);
        uVar17 = (uint)fVar22;
        fVar22 = floorf(fVar25 * fVar24);
        uVar9 = (uint)fVar22;
        lVar7 = *param_1;
        uVar13 = *(int *)((long)param_1 + 0xc) - 1;
        uVar8 = uVar18 + uVar17 * 0x65 + uVar9 * 0x1eef & uVar13;
        uVar15 = (ulong)uVar8;
        piVar14 = (int *)(lVar7 + uVar15 * 0x10 + 8);
        iVar11 = *piVar14;
        if (iVar11 != -1) {
          do {
            if ((((uint)*(ushort *)(lVar7 + uVar15 * 0x10) == (uVar18 & 0xffff)) &&
                (lVar1 = lVar7 + uVar15 * 0x10, (uint)*(ushort *)(lVar1 + 2) == (uVar17 & 0xffff)))
               && ((uint)*(ushort *)(lVar1 + 4) == (uVar9 & 0xffff))) {
              piVar14 = (int *)(lVar7 + uVar15 * 0x10 + 8);
              *(short *)(lVar10 + uVar12 * 2) = (short)uVar15;
              goto LAB_00194378;
            }
            uVar8 = (int)uVar15 + 1U & uVar13;
            uVar15 = (ulong)uVar8;
            piVar14 = (int *)(lVar7 + uVar15 * 0x10 + 8);
            iVar11 = *piVar14;
          } while (iVar11 != -1);
        }
        *(short *)(lVar10 + uVar12 * 2) = (short)uVar8;
        if (uVar16 < 0x39c) {
          puVar3 = (undefined2 *)(lVar7 + uVar15 * 0x10);
          iVar11 = 0;
          uVar16 = uVar16 + 1;
          *puVar3 = (short)uVar18;
          puVar3[1] = (short)uVar17;
          puVar3[2] = (short)uVar9;
          *piVar14 = 0;
LAB_00194378:
          *piVar14 = iVar11 + 1;
          *param_2 = *param_2 + 1;
        }
        else {
          *(ushort *)pfVar21 = *(ushort *)pfVar21 | 0x10;
          *(ushort *)((long)pfVar2 + 0x1e) = *(ushort *)((long)pfVar2 + 0x1e) & 0xfffc;
          *(int *)(lVar7 + 0x4008) = *(int *)(lVar7 + 0x4008) + 1;
          *(undefined2 *)(lVar10 + uVar12 * 2) = 0x400;
        }
      }
      else {
        lVar7 = *param_1;
        *(int *)(lVar7 + 0x4008) = *(int *)(lVar7 + 0x4008) + 1;
        *(undefined2 *)(lVar10 + uVar12 * 2) = 0x400;
      }
      if (uVar20 == 0) break;
      uVar13 = (uint)uVar19;
      uVar8 = *(uint *)(puVar5 + (ulong)((uVar20 & -uVar20) * 0x77cb531 >> 0x1b) * 4) | uVar13 << 5;
      uVar20 = uVar20 - 1 & uVar20;
      if (uVar20 == 0) {
        do {
          uVar13 = uVar13 + 1;
          uVar19 = (ulong)uVar13;
          if ((*(uint *)(param_5 + 1) & 0x7fffffff) <= uVar13) {
            uVar20 = 0;
            break;
          }
          uVar20 = *(uint *)(*param_5 + (ulong)uVar13 * 4);
        } while (uVar20 == 0);
      }
    } while (uVar8 != 0xffffffff);
    goto LAB_00194414;
  }
LAB_0019440c:
  lVar7 = *param_1;
  uVar16 = 0;
LAB_00194414:
  iVar11 = 0;
  piVar14 = (int *)(lVar7 + 8);
  lVar7 = 0x401;
  *(uint *)(param_1 + 1) = uVar16;
  do {
    iVar4 = *piVar14;
    if (iVar4 != -1) {
      *piVar14 = 0;
      piVar14[1] = iVar11;
      iVar11 = iVar4 + iVar11;
    }
    piVar14 = piVar14 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  FUN_001944a0(param_1,param_3,iVar11,param_5,lVar10);
  if (lVar10 != 0) {
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x0019449c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_7 + 0x28))();
  return;
}


