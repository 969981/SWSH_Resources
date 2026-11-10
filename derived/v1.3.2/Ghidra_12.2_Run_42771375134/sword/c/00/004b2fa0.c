/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b2fa0; name: FUN_004b2fa0
 */


int FUN_004b2fa0(long *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined1 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined4 auStack_80 [2];
  long *local_78;
  uint local_6c;
  uint local_68;
  int iStack_64;
  
  puVar18 = auStack_80;
  uVar2 = (**(code **)(*param_1 + 0x78))();
  if ((uVar2 & 1) == 0) {
    return 0x34;
  }
  plVar3 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    iVar7 = 0;
    lVar10 = lVar4;
    do {
      lVar10 = *(long *)(lVar10 + 0x10);
      iVar7 = iVar7 + -1;
    } while (lVar10 != 0);
    if (iVar7 != 0) {
      uVar16 = -iVar7;
      puVar18 = (undefined4 *)((long)auStack_80 - ((ulong)uVar16 * 4 + 0xf & 0x7fffffff0));
      puVar14 = puVar18;
      for (; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
        *puVar14 = *(undefined4 *)(lVar4 + 0x38);
        puVar14 = puVar14 + 1;
      }
      puVar14 = puVar14 + -(ulong)uVar16;
      goto joined_r0x004b3070;
    }
  }
  uVar16 = 0;
  puVar14 = (undefined4 *)0x0;
joined_r0x004b3070:
  iVar7 = 1;
  uVar17 = 0;
  if (param_2 != 0) {
    iVar7 = 1;
    local_78 = param_1;
    uVar17 = 0;
    do {
      param_1 = local_78;
      uVar15 = 0;
      if ((puVar14 != (undefined4 *)0x0) && (uVar16 != 0)) {
        uVar2 = 0;
        do {
          uVar15 = (uint)uVar2;
          if (puVar14[uVar2] == *param_3) break;
          uVar15 = uVar15 + 1;
          uVar2 = (ulong)uVar15;
        } while (uVar15 < uVar16);
      }
      if (uVar15 == uVar16) {
        lVar4 = (**(code **)(*local_78 + 0x60))(local_78,*param_3,1);
        if (lVar4 == 0) {
          iVar7 = 0x34;
          uVar17 = 1;
          goto joined_r0x004b3440;
        }
        uVar6 = (undefined1)param_3[2];
        uVar17 = 1;
      }
      else {
        uVar16 = uVar16 - 1;
        puVar14[uVar15] = puVar14[uVar16];
        iVar1 = *param_3;
        plVar3 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
        } while (*(int *)(lVar4 + 0x38) != iVar1);
        uVar6 = (undefined1)param_3[2];
        uVar17 = uVar17 | (uint)*(byte *)(lVar4 + 0x40) != (param_3[2] & 0xffU);
      }
      *(undefined1 *)(lVar4 + 0x40) = uVar6;
      puVar18 = (undefined4 *)
                ((long)puVar18 - ((ulong)*(uint *)(lVar4 + 0x34) * 4 + 0xf & 0x7fffffff0));
      local_68 = uVar16;
      iStack_64 = param_2;
      if (*(int *)(lVar4 + 0x30) == 0) {
        uVar2 = 0;
        iVar1 = param_3[1];
      }
      else {
        lVar10 = *(long *)(lVar4 + 0x28);
        uVar2 = 0;
        do {
          plVar3 = (long *)(lVar10 + 8);
          lVar10 = lVar10 + 0x10;
          *(undefined4 *)((long)puVar18 + uVar2 * 4) = *(undefined4 *)(*plVar3 + 0x10);
          uVar2 = uVar2 + 1;
        } while (lVar10 != *(long *)(lVar4 + 0x28) + (ulong)*(uint *)(lVar4 + 0x30) * 0x10);
        iVar1 = param_3[1];
      }
      if (iVar1 != 0) {
        uVar16 = 0;
        do {
          uVar15 = (uint)uVar2;
          if (uVar15 == 0) {
LAB_004b31c8:
            iVar1 = FUN_004b2b60(lVar4,*param_4,param_4[1],0);
            if (iVar1 != 1) {
              iVar7 = iVar1;
            }
            uVar17 = 1;
          }
          else {
            uVar12 = 0;
            do {
              if (*(int *)((long)puVar18 + uVar12 * 4) == *param_4) break;
              uVar12 = uVar12 + 1;
            } while ((uint)uVar12 < uVar15);
            if ((uint)uVar12 == uVar15) goto LAB_004b31c8;
            uVar2 = (ulong)(uVar15 - 1);
            *(undefined4 *)((long)puVar18 + (uVar12 & 0xffffffff) * 4) =
                 *(undefined4 *)((long)puVar18 + uVar2 * 4);
          }
          uVar16 = uVar16 + 1;
          param_4 = param_4 + 2;
        } while (uVar16 < (uint)param_3[1]);
      }
      local_6c = uVar17 | (int)uVar2 != 0;
      if ((int)uVar2 != 0) {
        uVar5 = (ulong)*(uint *)(lVar4 + 0x30);
        uVar12 = 0;
        do {
          iVar1 = *(int *)((long)puVar18 + uVar12 * 4);
          piVar8 = *(int **)(lVar4 + 0x28);
          piVar13 = piVar8;
          if ((int)uVar5 == 0) {
LAB_004b3288:
            if (piVar13 != piVar8 + uVar5 * 4) {
              FUN_004b1d40(*(undefined8 *)(piVar13 + 2));
              (**(code **)(**(long **)(piVar13 + 2) + 0x18))();
              piVar11 = *(int **)(lVar4 + 0x28);
              uVar16 = *(uint *)(lVar4 + 0x30);
              uVar5 = (ulong)uVar16;
              piVar13 = piVar11 + uVar5 * 4;
              piVar8 = piVar11;
              if (uVar16 != 0) {
                lVar10 = uVar5 << 4;
                piVar9 = piVar11;
                do {
                  piVar8 = piVar9;
                  if (*piVar9 == iVar1) break;
                  lVar10 = lVar10 + -0x10;
                  piVar9 = piVar9 + 4;
                  piVar8 = piVar13;
                } while (lVar10 != 0);
              }
              if (piVar13 != piVar8) {
                if (piVar8 < piVar13 + -4) {
                  uVar5 = (long)piVar11 + (uVar5 * 0x10 - (long)piVar8) + -0x11;
                  uVar16 = ((uint)(uVar5 >> 4) & 0xfffffff) + 1;
                  if ((uVar16 & 7) != 0) {
                    lVar10 = -((ulong)uVar16 & 7);
                    piVar11 = piVar8;
                    do {
                      piVar8 = piVar11 + 4;
                      *(undefined8 *)piVar11 = *(undefined8 *)piVar8;
                      *(undefined8 *)(piVar11 + 2) = *(undefined8 *)(piVar11 + 6);
                      lVar10 = lVar10 + 1;
                      piVar11 = piVar8;
                    } while (lVar10 != 0);
                  }
                  if (0x6f < uVar5) {
                    do {
                      *(undefined8 *)piVar8 = *(undefined8 *)(piVar8 + 4);
                      *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(piVar8 + 6);
                      *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(piVar8 + 8);
                      *(undefined8 *)(piVar8 + 6) = *(undefined8 *)(piVar8 + 10);
                      *(undefined8 *)(piVar8 + 8) = *(undefined8 *)(piVar8 + 0xc);
                      *(undefined8 *)(piVar8 + 10) = *(undefined8 *)(piVar8 + 0xe);
                      *(undefined8 *)(piVar8 + 0xc) = *(undefined8 *)(piVar8 + 0x10);
                      *(undefined8 *)(piVar8 + 0xe) = *(undefined8 *)(piVar8 + 0x12);
                      *(undefined8 *)(piVar8 + 0x10) = *(undefined8 *)(piVar8 + 0x14);
                      *(undefined8 *)(piVar8 + 0x12) = *(undefined8 *)(piVar8 + 0x16);
                      *(undefined8 *)(piVar8 + 0x14) = *(undefined8 *)(piVar8 + 0x18);
                      *(undefined8 *)(piVar8 + 0x16) = *(undefined8 *)(piVar8 + 0x1a);
                      *(undefined8 *)(piVar8 + 0x18) = *(undefined8 *)(piVar8 + 0x1c);
                      *(undefined8 *)(piVar8 + 0x1a) = *(undefined8 *)(piVar8 + 0x1e);
                      piVar11 = piVar8 + 0x20;
                      *(undefined8 *)(piVar8 + 0x1c) = *(undefined8 *)piVar11;
                      *(undefined8 *)(piVar8 + 0x1e) = *(undefined8 *)(piVar8 + 0x22);
                      piVar8 = piVar11;
                    } while (piVar11 < piVar13 + -4);
                  }
                  uVar16 = *(uint *)(lVar4 + 0x30);
                }
                uVar5 = (ulong)(uVar16 - 1);
                *(uint *)(lVar4 + 0x30) = uVar16 - 1;
              }
            }
          }
          else {
            lVar10 = uVar5 << 4;
            do {
              if (*piVar13 == iVar1) goto LAB_004b3288;
              lVar10 = lVar10 + -0x10;
              piVar13 = piVar13 + 4;
            } while (lVar10 != 0);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != (uVar2 & 0xffffffff));
      }
      param_3 = param_3 + 3;
      param_2 = iStack_64 + -1;
      param_1 = local_78;
      uVar16 = local_68;
      uVar17 = local_6c;
    } while (param_2 != 0);
  }
  uVar17 = uVar16 != 0 | uVar17;
joined_r0x004b3440:
  if (uVar16 != 0) {
    uVar2 = (ulong)uVar16;
    do {
      (**(code **)(*param_1 + 0x58))(param_1,*puVar14,0);
      uVar2 = uVar2 - 1;
      puVar14 = puVar14 + 1;
    } while (uVar2 != 0);
  }
  if ((uVar17 & 1) != 0) {
    FUN_004b2040(param_1);
  }
  return iVar7;
}


