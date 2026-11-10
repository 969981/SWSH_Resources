/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc5560; name: FUN_00fc5560
 */


void FUN_00fc5560(long param_1)

{
  bool bVar1;
  uint *puVar2;
  long *plVar3;
  ushort uVar4;
  float fVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  ushort *puVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  undefined8 *puVar24;
  uint *puVar25;
  undefined4 uVar26;
  float fVar27;
  int local_74;
  
  puVar6 = PTR_DAT_02710868;
  if ((((-1 < *(int *)(param_1 + 0x50)) && (*(int *)(*(long *)PTR_DAT_027108d0 + 0xd88) != 1)) &&
      (uVar9 = FUN_00d93eb0(*(undefined8 *)PTR_DAT_02710868,0), (uVar9 & 1) != 0)) &&
     (uVar9 = FUN_00d93eb0(*(undefined8 *)puVar6,2), (uVar9 & 1) != 0)) {
    lVar20 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
    }
    lVar13 = *(long *)PTR_DAT_027194d8;
    lVar23 = *(long *)(*(long *)PTR_DAT_02710798 + 0x248);
    if (lVar23 != 0) {
      plVar22 = (long *)(lVar23 + 0x48);
      (**(code **)(*plVar22 + 0x10))(plVar22);
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
    puVar6 = PTR_DAT_02722ef8;
    fVar5 = DAT_01d4bca0;
    piVar12 = *(int **)(param_1 + 400);
    puVar2 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (4 - (long)*piVar12)));
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    if (*puVar2 != 0) {
      puVar25 = puVar2 + 1;
      do {
        uVar9 = (ulong)*puVar25;
        piVar12 = (int *)((long)puVar25 + uVar9);
        uVar14 = (ulong)*piVar12;
        if ((*(ushort *)((long)piVar12 - uVar14) < 0x2f) ||
           (uVar18 = (ulong)((ushort *)((long)piVar12 - uVar14))[0x17], uVar18 == 0)) {
          puVar17 = (uint *)0x0;
        }
        else {
          puVar17 = (uint *)((long)piVar12 + uVar18);
          puVar17 = (uint *)((long)puVar17 + (ulong)*puVar17);
        }
LAB_00fc56cc:
        puVar17 = puVar17 + 1;
        puVar15 = (ushort *)((long)puVar25 + (uVar9 - (long)(int)uVar14));
        if (*puVar15 < 0x2f) {
          puVar16 = (uint *)0x0;
        }
        else {
          uVar14 = (ulong)puVar15[0x17];
          puVar16 = (uint *)0x0;
          if (uVar14 != 0) {
            puVar16 = (uint *)((long)puVar25 + uVar14 + uVar9);
            puVar16 = (uint *)((long)puVar16 + (ulong)*puVar16);
          }
        }
        if (puVar17 != puVar16 + (ulong)*puVar16 + 1) {
          piVar12 = (int *)((long)puVar17 + (ulong)*puVar17);
          puVar16 = (uint *)((long)piVar12 +
                            (ulong)*(ushort *)((long)piVar12 + (4 - (long)*piVar12)));
          piVar12 = (int *)((long)puVar16 + (ulong)*puVar16);
          puVar16 = (uint *)((long)piVar12 +
                            (ulong)*(ushort *)((long)piVar12 + (4 - (long)*piVar12)));
          piVar12 = (int *)((long)puVar16 + (ulong)*puVar16);
          if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
             (uVar14 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar14 == 0)) {
            piVar12 = (int *)0x0;
          }
          else {
            puVar16 = (uint *)((long)piVar12 + uVar14);
            piVar12 = (int *)((long)puVar16 + (ulong)*puVar16);
          }
          if ((0x16 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
             (uVar14 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0xb], uVar14 != 0)) {
            lVar19 = *(long *)((long)piVar12 + uVar14);
            if (*(long *)(param_1 + 0x60) == lVar19) goto LAB_00fc56c4;
LAB_00fc57a4:
            if (((((*(long *)(param_1 + 0x78) == lVar19) || (*(long *)(param_1 + 0x90) == lVar19))
                 || (*(long *)(param_1 + 0xa8) == lVar19)) ||
                (((*(long *)(param_1 + 0xc0) == lVar19 || (*(long *)(param_1 + 0xd8) == lVar19)) ||
                 ((*(long *)(param_1 + 0xf0) == lVar19 ||
                  ((*(long *)(param_1 + 0x108) == lVar19 || (*(long *)(param_1 + 0x120) == lVar19)))
                  ))))) ||
               ((*(long *)(param_1 + 0x138) == lVar19 ||
                ((*(long *)(param_1 + 0x150) == lVar19 || (*(long *)(param_1 + 0x168) == lVar19)))))
               ) goto LAB_00fc56c4;
            local_74 = 0;
            do {
              lVar21 = *(long *)(lVar23 + (long)*(int *)(param_1 + 0x50) * 0xa68 +
                                 (long)local_74 * 0x18 + 0x60);
              uVar7 = FUN_015261d0(lVar23,(long)*(int *)(param_1 + 0x50),&local_74);
              if (lVar21 == lVar19 && uVar7 != 0) {
                plVar22 = *(long **)(lVar13 + 0xb0);
                plVar3 = *(long **)(lVar13 + 0xb8);
                if (plVar22 != plVar3) {
                  bVar1 = uVar7 == 4 || (uVar7 | 4) == 6;
                  if (lVar19 == 0xcf9069c673b98d1) {
                    do {
                      lVar21 = *plVar22;
                      puVar24 = (undefined8 *)(lVar21 + 0x50);
                      plVar11 = (long *)(**(code **)*puVar24)(puVar24);
                      if (((*PTR_DAT_02722f00 & 1) == 0) &&
                         (iVar8 = __cxa_guard_acquire(PTR_DAT_02722f00), iVar8 != 0)) {
                        uVar10 = FUN_00e53bf0();
                        *(undefined8 *)puVar6 = uVar10;
                        __cxa_guard_release(PTR_DAT_02722f00);
                      }
                      for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
                        if (plVar11 == (long *)puVar6) {
                          if ((((*(int *)(lVar21 + 0x62c) == 0) &&
                               ((bool)*(char *)(lVar21 + 0x628) == bVar1)) &&
                              (*(long *)(lVar21 + 0x1a0) == -0x320a8c1bd4c7302e)) &&
                             (uVar9 = (**(code **)(*(long *)*plVar22 + 0x88))(), (uVar9 & 1) == 0))
                          goto LAB_00fc5a8c;
                          break;
                        }
                      }
                      plVar22 = plVar22 + 1;
                    } while (plVar22 != plVar3);
                  }
                  else {
                    do {
                      lVar21 = *plVar22;
                      puVar24 = (undefined8 *)(lVar21 + 0x50);
                      plVar11 = (long *)(**(code **)*puVar24)(puVar24);
                      if (((*PTR_DAT_02722f00 & 1) == 0) &&
                         (iVar8 = __cxa_guard_acquire(PTR_DAT_02722f00), iVar8 != 0)) {
                        uVar10 = FUN_00e53bf0();
                        *(undefined8 *)puVar6 = uVar10;
                        __cxa_guard_release(PTR_DAT_02722f00);
                      }
                      for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
                        if (plVar11 == (long *)puVar6) {
                          if (((*(int *)(lVar21 + 0x62c) == 0) &&
                              ((bool)*(char *)(lVar21 + 0x628) == bVar1)) &&
                             ((*(long *)(lVar21 + 0x1a0) != -0x320a8c1bd4c7302e &&
                              (uVar9 = (**(code **)(*(long *)*plVar22 + 0x88))(), (uVar9 & 1) == 0))
                             )) goto LAB_00fc5a8c;
                          break;
                        }
                      }
                      plVar22 = plVar22 + 1;
                    } while (plVar22 != plVar3);
                  }
                }
                break;
              }
              iVar8 = local_74 + 1;
              bVar1 = local_74 < 0x6d;
              local_74 = iVar8;
            } while (bVar1);
            goto LAB_00fc5a80;
          }
          lVar19 = 0;
          if (*(long *)(param_1 + 0x60) != 0) goto LAB_00fc57a4;
          goto LAB_00fc56c4;
        }
        puVar25 = puVar25 + 1;
      } while (puVar25 != puVar2 + 1 + *puVar2);
    }
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
    }
  }
  return;
LAB_00fc5a8c:
  lVar21 = puVar24[0x2a];
  if (*(long *)(param_1 + 0x58) == lVar21) {
    lVar21 = 0;
LAB_00fc5b84:
    lVar21 = param_1 + lVar21 * 0x18;
    *(long *)(lVar21 + 0x60) = lVar19;
    *(bool *)(lVar21 + 0x68) = bVar1;
  }
  else {
    if (*(long *)(param_1 + 0x70) == lVar21) {
      lVar21 = 1;
      goto LAB_00fc5b84;
    }
    if (*(long *)(param_1 + 0x88) == lVar21) {
      lVar21 = 2;
      goto LAB_00fc5b84;
    }
    if (*(long *)(param_1 + 0xa0) == lVar21) {
      lVar21 = 3;
      goto LAB_00fc5b84;
    }
    if (*(long *)(param_1 + 0xb8) == lVar21) {
      lVar21 = 4;
      goto LAB_00fc5b84;
    }
    if (*(long *)(param_1 + 0xd0) == lVar21) {
      lVar21 = 5;
      goto LAB_00fc5b84;
    }
    if (*(long *)(param_1 + 0xe8) == lVar21) {
      lVar21 = 6;
      goto LAB_00fc5b84;
    }
    if (*(long *)(param_1 + 0x100) == lVar21) {
      lVar21 = 7;
      goto LAB_00fc5b84;
    }
    if (*(long *)(param_1 + 0x118) == lVar21) {
      lVar21 = 8;
      goto LAB_00fc5b84;
    }
    if (*(long *)(param_1 + 0x130) == lVar21) {
      lVar21 = 9;
      goto LAB_00fc5b84;
    }
    if (*(long *)(param_1 + 0x148) == lVar21) {
      lVar21 = 10;
      goto LAB_00fc5b84;
    }
    if (*(long *)(param_1 + 0x160) == lVar21) {
      lVar21 = 0xb;
      goto LAB_00fc5b84;
    }
  }
  *(undefined4 *)((long)puVar24 + 0x5dc) = 1;
  puVar15 = (ushort *)((long)piVar12 - (long)*piVar12);
  uVar4 = *puVar15;
  uVar26 = 0;
  uVar7 = 0;
  fVar27 = fVar5;
  if (4 < uVar4) {
    uVar26 = 0;
    if ((ulong)puVar15[2] != 0) {
      uVar26 = *(undefined4 *)((long)piVar12 + (ulong)puVar15[2]);
    }
    if (6 < uVar4) {
      fVar27 = 0.0;
      if ((ulong)puVar15[3] != 0) {
        fVar27 = *(float *)((long)piVar12 + (ulong)puVar15[3]);
      }
      fVar27 = fVar27 + fVar5;
      if (8 < uVar4) {
        if ((ulong)puVar15[4] != 0) {
          uVar7 = *(uint *)((long)piVar12 + (ulong)puVar15[4]);
          goto LAB_00fc5c10;
        }
      }
    }
    uVar7 = 0;
  }
LAB_00fc5c10:
  *(undefined1 *)(puVar24 + 0xe) = 1;
  puVar24[0xd] = (ulong)uVar7;
  puVar24[0xc] = CONCAT44(fVar27,uVar26);
LAB_00fc5a80:
  uVar9 = (ulong)*puVar25;
LAB_00fc56c4:
  uVar14 = (ulong)*(uint *)((long)puVar25 + uVar9);
  goto LAB_00fc56cc;
}


