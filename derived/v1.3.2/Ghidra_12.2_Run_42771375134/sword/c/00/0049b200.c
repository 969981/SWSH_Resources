/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049b200; name: FUN_0049b200
 */


int FUN_0049b200(long *param_1,long param_2,undefined4 param_3,int param_4,undefined4 param_5,
                int param_6,int param_7,undefined4 param_8,void *param_9,uint param_10,
                void *param_11,int param_12,byte param_13)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  void *__dest;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  uint *puVar20;
  float fVar21;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  uVar19 = *(uint *)(param_1 + 4);
  plVar2 = param_1 + 3;
  if (uVar19 != 0) {
    uVar12 = (int)param_2 + param_6;
    uVar6 = 0;
    if (uVar19 != 0) {
      uVar6 = uVar12 / uVar19;
    }
    for (plVar18 = *(long **)(*plVar2 + (ulong)(uVar12 - uVar6 * uVar19) * 8);
        plVar18 != (long *)0x0; plVar18 = (long *)plVar18[2]) {
      if ((*plVar18 == param_2) && ((int)plVar18[1] == param_6)) {
        if (*(uint *)(plVar18 + 0xb) == 0) goto LAB_0049b550;
        piVar16 = (int *)plVar18[10];
        lVar14 = (ulong)*(uint *)(plVar18 + 0xb) * 0x18;
        goto LAB_0049b61c;
      }
    }
  }
  plVar18 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x60);
  if (plVar18 == (long *)0x0) {
    return 0x34;
  }
  plVar18[6] = 0;
  plVar18[7] = 0;
  plVar18[4] = 0;
  plVar18[5] = 0;
  plVar18[3] = 0;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *(undefined1 *)(plVar18 + 6) = 0xff;
  *(undefined1 *)(plVar18 + 7) = 0xff;
  plVar18[8] = 0;
  *plVar18 = param_2;
  *(int *)(plVar18 + 1) = param_6;
  *(int *)(plVar18 + 9) = param_12;
  *(undefined4 *)((long)plVar18 + 0x4c) = param_5;
  plVar18[10] = 0;
  plVar18[0xb] = 0;
  memcpy(plVar18 + 3,param_11,0x30);
  uVar19 = *(uint *)(param_1 + 4);
  if ((uVar19 == 0) ||
     (fVar21 = (float)NEON_ucvtf((int)param_1[5]), DAT_01d4bee0 < fVar21 / (float)uVar19)) {
    FUN_004a3df0(plVar2);
    uVar19 = *(uint *)(param_1 + 4);
    if (uVar19 != 0) {
      lVar14 = *plVar18;
      goto LAB_0049b51c;
    }
  }
  else {
    lVar14 = param_2;
LAB_0049b51c:
    uVar12 = (int)plVar18[1] + (int)lVar14;
    uVar6 = 0;
    if (uVar19 != 0) {
      uVar6 = uVar12 / uVar19;
    }
    lVar14 = (ulong)(uVar12 - uVar6 * uVar19) * 8;
    plVar18[2] = *(long *)(*plVar2 + lVar14);
    *(long **)(*plVar2 + lVar14) = plVar18;
    *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  }
LAB_0049b550:
  bVar7 = plVar18 != (long *)0x0;
  if (param_9 == (void *)0x0) {
LAB_0049b564:
    iVar8 = 0x1f;
    if ((param_6 != 0x39) || (param_12 != 5)) goto joined_r0x0049b678;
    if (param_4 == 2) goto LAB_0049b580;
LAB_0049b5c4:
    lVar14 = FUN_0049d820(param_1,param_3);
    if (lVar14 == 0) {
      iVar8 = 0x34;
      goto joined_r0x0049b678;
    }
    iVar8 = FUN_0049c170(lVar14,plVar18,param_13 & 1);
  }
  else {
LAB_0049b358:
    if (param_10 == 0) goto LAB_0049b564;
    uVar12 = *(uint *)(plVar18 + 0xb);
    uVar19 = *(uint *)((long)plVar18 + 0x5c);
    if (uVar19 <= uVar12) {
      uVar19 = uVar19 + 1;
      lVar14 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar19 * 0x18);
      if (lVar14 == 0) {
        iVar8 = 0x34;
        goto joined_r0x0049b678;
      }
      lVar9 = plVar18[10];
      if ((lVar9 != 0) && (lVar9 != lVar14)) {
        uVar10 = (ulong)*(uint *)(plVar18 + 0xb);
        if (*(uint *)(plVar18 + 0xb) != 0) {
          lVar9 = 0;
          do {
            puVar3 = (undefined8 *)(lVar14 + lVar9);
            if (puVar3 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar14 + lVar9 + 8) = 0;
              *(undefined8 *)(lVar14 + lVar9 + 0x10) = 0;
            }
            puVar4 = (undefined8 *)(plVar18[10] + lVar9);
            lVar9 = lVar9 + 0x18;
            puVar3[2] = puVar4[2];
            puVar3[1] = puVar4[1];
            uVar10 = uVar10 - 1;
            *puVar3 = *puVar4;
          } while (uVar10 != 0);
          lVar9 = plVar18[10];
        }
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,lVar9);
      }
      plVar18[10] = lVar14;
      *(uint *)((long)plVar18 + 0x5c) = uVar19;
    }
    if (uVar19 <= uVar12) {
LAB_0049b4b0:
      iVar8 = 0x34;
      goto joined_r0x0049b678;
    }
    uVar19 = *(uint *)(plVar18 + 0xb);
    *(uint *)(plVar18 + 0xb) = uVar19 + 1;
    piVar16 = (int *)(plVar18[10] + (ulong)uVar19 * 0x18);
    if (piVar16 == (int *)0x0) goto LAB_0049b4b0;
    lVar14 = plVar18[10] + (ulong)uVar19 * 0x18;
    puVar20 = (uint *)(lVar14 + 0x10);
    puVar20[0] = 0;
    puVar20[1] = 0;
    *(undefined8 *)(lVar14 + 8) = 0;
    *(undefined4 *)(lVar14 + 4) = param_3;
    *piVar16 = param_7;
    uVar5 = *(undefined4 *)PTR_DAT_02712a90;
    puVar20[0] = 0;
    puVar20[1] = 0;
    __dest = (void *)FUN_00404690(uVar5,(ulong)param_10 * 0xc);
    *(void **)(lVar14 + 8) = __dest;
    if (__dest == (void *)0x0) {
      *puVar20 = 0;
      *(int *)(plVar18 + 0xb) = (int)plVar18[0xb] + -1;
      iVar8 = 0x34;
      goto joined_r0x0049b678;
    }
    memcpy(__dest,param_9,(ulong)(param_10 * 0xc));
    *puVar20 = param_10;
    *(undefined4 *)(lVar14 + 0x14) = param_8;
    if (param_4 != 2) goto LAB_0049b5c4;
LAB_0049b580:
    iVar8 = FUN_00477ae0(*(undefined8 *)PTR_DAT_02712dc0,param_3,plVar18);
  }
  if (iVar8 == 1) {
    FUN_0049d930(param_1,plVar18,param_3);
    return 1;
  }
joined_r0x0049b678:
  if ((bVar7) && ((int)plVar18[0xb] == 0)) {
    uVar19 = *(uint *)(param_1 + 4);
    if (uVar19 != 0) {
      uVar12 = (int)param_2 + param_6;
      uVar6 = 0;
      if (uVar19 != 0) {
        uVar6 = uVar12 / uVar19;
      }
      plVar2 = (long *)(*plVar2 + (ulong)(uVar12 - uVar6 * uVar19) * 8);
      plVar17 = (long *)*plVar2;
      if (plVar17 != (long *)0x0) {
        plVar13 = (long *)0x0;
        do {
          if ((*plVar17 == param_2) && ((int)plVar17[1] == param_6)) {
            if (plVar13 != (long *)0x0) {
              plVar2 = plVar13 + 2;
            }
            *plVar2 = plVar17[2];
            *(int *)(param_1 + 5) = (int)param_1[5] + -1;
            break;
          }
          plVar1 = plVar17 + 2;
          plVar13 = plVar17;
          plVar17 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
    }
    FUN_0049b020(param_1,plVar18);
    uVar5 = *(undefined4 *)PTR_DAT_02712a90;
    if (plVar18[10] != 0) {
      *(undefined4 *)(plVar18 + 0xb) = 0;
      FUN_00404870(uVar5);
      plVar18[10] = 0;
      *(undefined4 *)((long)plVar18 + 0x5c) = 0;
    }
    FUN_00404870(uVar5,plVar18);
  }
  return iVar8;
LAB_0049b61c:
  if (*piVar16 != param_7) goto code_r0x0049b628;
  uVar19 = piVar16[1];
  if (*(long *)(piVar16 + 2) != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    piVar16[2] = 0;
    piVar16[3] = 0;
  }
  piVar16[4] = 0;
  piVar16[5] = 0;
  uVar12 = *(uint *)(plVar18 + 0xb);
  piVar11 = (int *)(plVar18[10] + (ulong)uVar12 * 0x18 + -0x18);
  if (piVar16 < piVar11) {
    do {
      piVar15 = piVar16 + 6;
      *(undefined8 *)piVar16 = *(undefined8 *)piVar15;
      *(undefined8 *)(piVar16 + 2) = *(undefined8 *)(piVar16 + 8);
      *(undefined8 *)(piVar16 + 4) = *(undefined8 *)(piVar16 + 10);
      piVar16 = piVar15;
    } while (piVar15 < piVar11);
    uVar12 = *(uint *)(plVar18 + 0xb);
  }
  *(uint *)(plVar18 + 0xb) = uVar12 - 1;
  uVar12 = *(uint *)(param_1 + 1);
  if (uVar12 != 0) {
    uVar6 = 0;
    if (uVar12 != 0) {
      uVar6 = uVar19 / uVar12;
    }
    for (puVar20 = *(uint **)(*param_1 + (ulong)(uVar19 - uVar6 * uVar12) * 8);
        puVar20 != (uint *)0x0; puVar20 = *(uint **)(puVar20 + 2)) {
      if (*puVar20 == uVar19) {
        FUN_0049c400(puVar20,plVar18);
        break;
      }
    }
  }
  if (uVar19 != 0) {
    FUN_00477e90(*(undefined8 *)PTR_DAT_02712dc0,plVar18,uVar19);
  }
  if (plVar18 == (long *)0x0) {
    return 0x1f;
  }
  bVar7 = true;
  if (param_9 != (void *)0x0) goto LAB_0049b358;
  goto LAB_0049b564;
code_r0x0049b628:
  piVar16 = piVar16 + 6;
  lVar14 = lVar14 + -0x18;
  if (lVar14 == 0) goto LAB_0049b550;
  goto LAB_0049b61c;
}


