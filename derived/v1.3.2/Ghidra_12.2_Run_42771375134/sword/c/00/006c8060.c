/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c8060; name: FUN_006c8060
 */


int FUN_006c8060(long param_1,undefined8 *param_2,undefined8 param_3,uint param_4,undefined8 param_5
                ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                undefined8 *param_10,byte param_11,byte param_12)

{
  long *plVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  float fVar23;
  int local_64;
  
  puVar5 = PTR_DAT_02715298;
  puVar4 = PTR_DAT_02715290;
  lVar9 = *(long *)(*(long *)(param_1 + 0xa8) + 0x48);
  if (lVar9 == 0) {
    iVar10 = 0;
  }
  else {
    plVar12 = *(long **)(*(long *)(param_1 + 0xa8) + 0x40);
    plVar1 = plVar12 + lVar9;
    iVar10 = 0;
    if (param_10 == (undefined8 *)0x0) {
      local_64 = 0;
      do {
        if ((*plVar12 != 0) &&
           (puVar11 = *(undefined8 **)(*plVar12 + 0x60), puVar11 != (undefined8 *)0x0)) {
          plVar8 = (long *)(**(code **)*puVar11)(puVar11);
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            uVar7 = FUN_01590a70();
            *(undefined8 *)puVar5 = uVar7;
            __cxa_guard_release(puVar4);
          }
          for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            if (plVar8 == (long *)puVar5) {
              if ((((*(int *)(puVar11 + 8) == 4) && (*(char *)(puVar11 + 2) != '\0')) &&
                  ((*(uint *)(puVar11 + 0x2c) & param_4) != 0)) && (puVar11[0x20] != 0)) {
                iVar6 = FUN_006c8a00(param_1,param_2,param_3,puVar11[0x20],param_5,param_6,param_7,
                                     param_8,param_9,0,param_11 & 1);
                if (iVar6 == -1) {
                  local_64 = local_64 + 1;
                }
                iVar2 = 0;
                if (iVar6 != -1) {
                  iVar2 = iVar6;
                }
                iVar10 = iVar2 + iVar10;
              }
              break;
            }
          }
        }
        uVar22 = 0;
        uVar7 = 0;
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar1);
    }
    else {
      local_64 = 0;
      uVar13 = 0;
      uVar15 = 0;
      uVar17 = 0;
      uVar19 = 0;
      fVar23 = DAT_01d4c18c;
      do {
        if ((*plVar12 != 0) &&
           (puVar11 = *(undefined8 **)(*plVar12 + 0x60), puVar11 != (undefined8 *)0x0)) {
          plVar8 = (long *)(**(code **)*puVar11)(puVar11);
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            uVar7 = FUN_01590a70();
            *(undefined8 *)puVar5 = uVar7;
            __cxa_guard_release(puVar4);
          }
          for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            if (plVar8 == (long *)puVar5) {
              if (((*(int *)(puVar11 + 8) == 4) && (*(char *)(puVar11 + 2) != '\0')) &&
                 (((*(uint *)(puVar11 + 0x2c) & param_4) != 0 && (puVar11[0x20] != 0)))) {
                iVar6 = FUN_006c8a00(param_1,param_2,param_3,puVar11[0x20],param_5,param_6,param_7,
                                     param_8,param_9,param_10,param_11 & 1);
                if (iVar6 == -1) {
                  local_64 = local_64 + 1;
                }
                iVar2 = 0;
                if (iVar6 != -1) {
                  iVar2 = iVar6;
                }
                iVar10 = iVar2 + iVar10;
                if ((0 < iVar6) && ((param_12 & 1) != 0)) {
                  uVar22 = param_10[1];
                  uVar7 = *param_10;
                  fVar14 = (float)*param_2 - (float)uVar7;
                  fVar16 = (float)((ulong)*param_2 >> 0x20) - (float)((ulong)uVar7 >> 0x20);
                  fVar18 = (float)param_2[1] - (float)uVar22;
                  fVar20 = (float)((ulong)param_2[1] >> 0x20) - (float)((ulong)uVar22 >> 0x20);
                  fVar14 = fVar14 * fVar14;
                  fVar16 = fVar16 * fVar16;
                  fVar18 = fVar18 * fVar18;
                  fVar20 = fVar20 * fVar20;
                  auVar21._4_4_ = fVar16;
                  auVar21._0_4_ = fVar14;
                  auVar21._8_4_ = fVar18;
                  auVar21._12_4_ = fVar20;
                  auVar3._4_4_ = fVar16;
                  auVar3._0_4_ = fVar14;
                  auVar3._8_4_ = fVar18;
                  auVar3._12_4_ = fVar20;
                  auVar21 = NEON_ext(auVar21,auVar3,8,1);
                  fVar14 = auVar21._0_4_ + fVar14 + auVar21._4_4_ + fVar16;
                  if (fVar14 < fVar23) goto LAB_006c8218;
                }
              }
              break;
            }
          }
        }
        uVar22 = CONCAT44(uVar19,uVar17);
        uVar7 = CONCAT44(uVar15,uVar13);
        fVar14 = fVar23;
LAB_006c8218:
        uVar17 = (undefined4)uVar22;
        uVar19 = (undefined4)((ulong)uVar22 >> 0x20);
        uVar13 = (undefined4)uVar7;
        uVar15 = (undefined4)((ulong)uVar7 >> 0x20);
        plVar12 = plVar12 + 1;
        fVar23 = fVar14;
      } while (plVar12 != plVar1);
    }
    if (((param_10 == (undefined8 *)0x0) || (iVar10 < 1)) || ((param_12 & 1) == 0)) {
      if (iVar10 < 1) {
        iVar10 = -(uint)(0 < local_64);
      }
    }
    else {
      param_10[1] = uVar22;
      *param_10 = uVar7;
    }
  }
  return iVar10;
}


