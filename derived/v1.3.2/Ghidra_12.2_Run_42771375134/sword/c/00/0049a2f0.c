/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049a2f0; name: FUN_0049a2f0
 */


void FUN_0049a2f0(long param_1,ulong *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  
  puVar9 = PTR_DAT_02712b18;
  puVar8 = PTR_DAT_02712a90;
  uVar17 = *param_2;
  if (((((uVar17 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
      (((char)param_2[3] == -1 && ((char)param_2[4] == -1)))) && (param_2[5] == 0)) {
    plVar23 = (long *)(param_1 + 0x40);
    plVar11 = (long *)*plVar23;
    if (plVar11 != (long *)0x0) {
      puVar1 = PTR_DAT_02713368 + 0x10;
      plVar12 = plVar11;
      do {
        plVar18 = plVar23;
        if (plVar12 != plVar11) {
          plVar18 = (long *)&DAT_00000008;
        }
        *plVar18 = plVar11[1];
        uVar3 = *(undefined4 *)puVar8;
        *plVar11 = (long)puVar1;
        if (plVar11[2] != 0) {
          FUN_004be250(*(undefined8 *)puVar9,plVar11[2],plVar11);
        }
        FUN_00404870(uVar3,plVar11);
        plVar12 = (long *)*plVar23;
      } while( true );
    }
  }
  else {
    plVar23 = (long *)(param_1 + 0x40);
    plVar11 = (long *)*plVar23;
    if (plVar11 != (long *)0x0) {
      iVar14 = (int)param_2[1];
      iVar15 = (int)param_2[2];
      cVar4 = (char)param_2[3];
      cVar5 = (char)param_2[4];
      uVar16 = param_2[5];
      plVar12 = (long *)0x0;
      plVar18 = plVar11;
      if (uVar17 == 0) {
        do {
          if (((((iVar14 == 0) || ((int)plVar18[5] == iVar14)) &&
               ((iVar15 == 0 || ((int)plVar18[6] == iVar15)))) &&
              (((cVar4 == -1 || ((char)plVar18[7] == cVar4)) &&
               ((cVar5 == -1 || ((char)plVar18[8] == cVar5)))))) &&
             ((uVar16 == 0 || (plVar18[9] == uVar16)))) goto LAB_0049a45c;
          plVar2 = plVar18 + 1;
          plVar12 = plVar18;
          plVar18 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
      else {
        do {
          if ((((plVar18[4] == uVar17) && ((iVar14 == 0 || ((int)plVar18[5] == iVar14)))) &&
              ((iVar15 == 0 || ((int)plVar18[6] == iVar15)))) &&
             ((((cVar4 == -1 || ((char)plVar18[7] == cVar4)) &&
               ((cVar5 == -1 || ((char)plVar18[8] == cVar5)))) &&
              ((uVar16 == 0 || (plVar18[9] == uVar16)))))) goto LAB_0049a45c;
          plVar2 = plVar18 + 1;
          plVar12 = plVar18;
          plVar18 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
    }
  }
LAB_0049a5c4:
  puVar8 = PTR_DAT_02712a90;
  uVar17 = *param_2;
  if (uVar17 == 0) {
    if (((((int)param_2[1] == 0) && ((int)param_2[2] == 0)) && ((char)param_2[3] == -1)) &&
       (((char)param_2[4] == -1 && (param_2[5] == 0)))) {
      if (*(char *)(param_1 + 0x2c) != '\0') {
        *(undefined1 *)(param_1 + 0x2c) = 0;
      }
      puVar19 = *(undefined8 **)(param_1 + 0x30);
      if (*(uint *)(param_1 + 0x38) != 0) {
        lVar21 = (ulong)*(uint *)(param_1 + 0x38) * 0x28;
        do {
          FUN_0049f990(puVar19);
          puVar19 = puVar19 + 5;
          lVar21 = lVar21 + -0x28;
        } while (lVar21 != 0);
        puVar19 = *(undefined8 **)(param_1 + 0x30);
      }
      if (puVar19 != (undefined8 *)0x0) {
        if (*(uint *)(param_1 + 0x38) != 0) {
          lVar21 = (ulong)*(uint *)(param_1 + 0x38) * 0x28;
          do {
            (**(code **)*puVar19)(puVar19);
            lVar21 = lVar21 + -0x28;
            puVar19 = puVar19 + 5;
          } while (lVar21 != 0);
          puVar19 = *(undefined8 **)(param_1 + 0x30);
        }
        *(undefined4 *)(param_1 + 0x38) = 0;
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar19);
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
    }
    else if (*(int *)(param_1 + 0x38) != 0) {
      puVar19 = *(undefined8 **)(param_1 + 0x30);
      do {
        FUN_0049f740(puVar19,param_2 + 1);
        if ((*(char *)((long)puVar19 + 0xc) == '\0') && (*(int *)(puVar19 + 3) == 0)) {
          FUN_0049f990(puVar19);
          puVar22 = (undefined8 *)
                    (*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 0x28 + -0x28);
          puVar7 = puVar19;
          while (puVar7 < puVar22) {
            puVar7[4] = puVar7[9];
            puVar13 = (undefined8 *)puVar7[2];
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar7 + 6);
            *(undefined1 *)((long)puVar7 + 0xc) = *(undefined1 *)((long)puVar7 + 0x34);
            if (puVar13 != (undefined8 *)0x0) {
              if (*(uint *)(puVar7 + 3) != 0) {
                lVar21 = (ulong)*(uint *)(puVar7 + 3) * 0x28;
                do {
                  (**(code **)*puVar13)(puVar13);
                  lVar21 = lVar21 + -0x28;
                  puVar13 = puVar13 + 5;
                } while (lVar21 != 0);
                puVar13 = (undefined8 *)puVar7[2];
              }
              *(undefined4 *)(puVar7 + 3) = 0;
              FUN_00404870(*(undefined4 *)puVar8,puVar13);
              puVar7[2] = 0;
              *(undefined4 *)((long)puVar7 + 0x1c) = 0;
            }
            puVar7[2] = puVar7[7];
            *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(puVar7 + 8);
            *(undefined4 *)((long)puVar7 + 0x1c) = *(undefined4 *)((long)puVar7 + 0x44);
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7 = puVar7 + 5;
          }
          (**(code **)*puVar22)(puVar22);
          uVar10 = *(int *)(param_1 + 0x38) - 1;
          *(uint *)(param_1 + 0x38) = uVar10;
        }
        else {
          uVar10 = *(uint *)(param_1 + 0x38);
          puVar19 = puVar19 + 5;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)uVar10 * 0x28) != puVar19);
    }
  }
  else {
    iVar14 = *(int *)(param_1 + 0x38) + -1;
    if (-1 < iVar14) {
      lVar21 = *(long *)(param_1 + 0x30);
      iVar15 = 0;
      do {
        while( true ) {
          iVar6 = iVar14 - iVar15;
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          iVar6 = iVar15 + (iVar6 >> 1);
          lVar24 = (long)iVar6;
          uVar16 = *(ulong *)(lVar21 + (long)iVar6 * 0x28 + 0x20);
          if (uVar17 < uVar16) break;
          if (uVar17 <= uVar16) {
            lVar20 = lVar21 + lVar24 * 0x28;
            if (lVar20 == 0) {
              return;
            }
            FUN_0049f740(lVar20,param_2 + 1);
            if (*(char *)(lVar21 + lVar24 * 0x28 + 0xc) != '\0') {
              return;
            }
            if (*(int *)(lVar21 + lVar24 * 0x28 + 0x18) == 0) {
              FUN_0049f990(lVar20);
              FUN_0049fad0((long *)(param_1 + 0x30),*param_2);
              return;
            }
            return;
          }
          iVar15 = iVar6 + 1;
          if (iVar14 < iVar15) {
            return;
          }
        }
        iVar14 = iVar6 + -1;
      } while (iVar15 <= iVar14);
    }
  }
  return;
LAB_0049a45c:
  puVar1 = PTR_DAT_02713368 + 0x10;
  while( true ) {
    plVar2 = plVar23;
    if (plVar11 != plVar18) {
      plVar2 = plVar12 + 1;
    }
    *plVar2 = plVar18[1];
    uVar3 = *(undefined4 *)puVar8;
    *plVar18 = (long)puVar1;
    if (plVar18[2] != 0) {
      FUN_004be250(*(undefined8 *)puVar9,plVar18[2],plVar18);
    }
    FUN_00404870(uVar3,plVar18);
    plVar11 = (long *)*plVar23;
    if (plVar11 == (long *)0x0) break;
    iVar14 = (int)param_2[1];
    iVar15 = (int)param_2[2];
    cVar4 = (char)param_2[3];
    cVar5 = (char)param_2[4];
    uVar17 = param_2[5];
    plVar12 = (long *)0x0;
    plVar18 = plVar11;
    if (*param_2 == 0) {
      while ((((((iVar14 != 0 && ((int)plVar18[5] != iVar14)) ||
                ((iVar15 != 0 && ((int)plVar18[6] != iVar15)))) ||
               ((cVar4 != -1 && ((char)plVar18[7] != cVar4)))) ||
              ((cVar5 != -1 && ((char)plVar18[8] != cVar5)))) ||
             ((uVar17 != 0 && (plVar18[9] != uVar17))))) {
        plVar2 = plVar18 + 1;
        plVar12 = plVar18;
        plVar18 = (long *)*plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_0049a5c4;
      }
    }
    else {
      while ((((plVar18[4] != *param_2 || ((iVar14 != 0 && ((int)plVar18[5] != iVar14)))) ||
              (((iVar15 != 0 && ((int)plVar18[6] != iVar15)) ||
               (((cVar4 != -1 && ((char)plVar18[7] != cVar4)) ||
                ((cVar5 != -1 && ((char)plVar18[8] != cVar5)))))))) ||
             ((uVar17 != 0 && (plVar18[9] != uVar17))))) {
        plVar2 = plVar18 + 1;
        plVar12 = plVar18;
        plVar18 = (long *)*plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_0049a5c4;
      }
    }
  }
  goto LAB_0049a5c4;
}


