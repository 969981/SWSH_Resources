/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2f670; name: FUN_00f2f670
 */


ulong FUN_00f2f670(long param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  long local_70;
  float afStack_68 [2];
  
  puVar3 = PTR_DAT_02710920;
  uVar1 = (ulong)(*(int *)(param_1 + 0x70) - 1);
  pfVar11 = afStack_68 + uVar1 * -4 + -2;
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar12 = 0;
    uVar8 = 0;
    do {
      plVar5 = *(long **)(param_1 + 0x48);
      if ((int)uVar8 < 0) {
        lVar7 = (long)(int)uVar8;
        do {
          plVar6 = plVar5;
          plVar9 = (long *)*plVar5;
          if ((long *)*plVar5 == (long *)0x0) {
            do {
              plVar5 = (long *)plVar6[2];
              bVar4 = (long *)*plVar5 == plVar6;
              plVar6 = plVar5;
            } while (bVar4);
          }
          else {
            do {
              plVar5 = plVar9;
              plVar9 = (long *)plVar5[1];
            } while ((long *)plVar5[1] != (long *)0x0);
          }
          bVar4 = lVar7 < -1;
          lVar7 = lVar7 + 1;
        } while (bVar4);
      }
      else if (uVar8 != 0) {
        plVar6 = plVar5;
        lVar7 = (long)(int)uVar8;
        do {
          while (plVar9 = (long *)plVar6[1], (long *)plVar6[1] != (long *)0x0) {
            do {
              plVar5 = plVar9;
              plVar9 = (long *)*plVar5;
            } while ((long *)*plVar5 != (long *)0x0);
LAB_00f2f720:
            lVar14 = lVar7 + -1;
            bVar4 = lVar7 < 1;
            plVar6 = plVar5;
            lVar7 = lVar14;
            if (lVar14 == 0 || bVar4) goto LAB_00f2f778;
          }
          plVar9 = plVar6 + 2;
          plVar5 = (long *)*plVar9;
          if ((long *)*plVar5 != plVar6) {
            do {
              lVar14 = *plVar9;
              plVar9 = (long *)(lVar14 + 0x10);
              plVar5 = (long *)*plVar9;
            } while (*plVar5 != lVar14);
            goto LAB_00f2f720;
          }
          lVar14 = lVar7 + -1;
          bVar4 = 0 < lVar7;
          plVar6 = plVar5;
          lVar7 = lVar14;
        } while (lVar14 != 0 && bVar4);
      }
LAB_00f2f778:
      lVar14 = plVar5[5];
      lVar7 = *(long *)(lVar14 + 0x20);
      plVar5 = (long *)puVar3;
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 0x58);
      }
      if ((*plVar5 != *param_2) &&
         (local_70 = *plVar5, fVar15 = (float)FUN_00f37420(param_1 + 0x10,param_2,&local_70),
         0.0 <= fVar15)) {
        lVar7 = *(long *)(lVar14 + 0x20);
        puVar2 = (undefined8 *)puVar3;
        if (lVar7 != 0) {
          puVar2 = (undefined8 *)(lVar7 + 0x58);
        }
        uVar10 = *puVar2;
        lVar7 = uVar12 * 4;
        uVar12 = (ulong)((int)uVar12 + 1);
        pfVar11[lVar7] = fVar15;
        *(undefined8 *)(pfVar11 + lVar7 + 2) = uVar10;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x70));
    uVar13 = uVar12;
    if ((param_3 == 0) || ((int)uVar12 == 0)) goto LAB_00f2f840;
    FUN_00f38680(pfVar11,pfVar11 + uVar12 * 4,afStack_68);
    if (param_4 != 0) {
      uVar13 = 0;
      pfVar11 = afStack_68 + uVar1 * -4;
      do {
        *(undefined8 *)(param_3 + uVar13 * 8) = *(undefined8 *)pfVar11;
        uVar13 = uVar13 + 1;
        if (param_4 <= uVar13) break;
        pfVar11 = pfVar11 + 4;
      } while (uVar13 < uVar12);
      goto LAB_00f2f840;
    }
  }
  uVar13 = 0;
LAB_00f2f840:
  return uVar13 & 0xffffffff;
}


