/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063f880; name: FUN_0063f880
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0063f880(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  
  if (0 < *(int *)(param_1 + 0x3a68)) {
    lVar21 = *(long *)(param_1 + 0x3a70);
    iVar9 = *(int *)(lVar21 + 0x17c);
    if (0 < iVar9) {
      lVar22 = 0;
      do {
        uVar19 = (ulong)*(uint *)(lVar21 + lVar22 * 4 + 0x180);
        lVar20 = param_1 + uVar19 * 0x18;
        iVar17 = *(int *)(lVar20 + 0x2840);
        if (*(int *)(lVar20 + 0x283c) <= iVar17) {
          uVar23 = (long)*(int *)(lVar20 + 0x283c);
          do {
            if ((1L << (uVar23 & 0x3f) & *(ulong *)(param_1 + uVar19 * 0x18 + 0x2848)) != 0) {
              uVar16 = (ulong)*(uint *)(param_1 + 0x29ec);
              if ((*(uint *)(param_1 + 0x29ec) != *(uint *)(param_1 + 0x29f0)) ||
                 (*(long *)(param_1 + 0x29f8) == 0)) {
                plVar14 = (long *)(**(code **)(**(long **)(param_1 + uVar23 * 8 + 0x3c00) + 0x108))
                                            ();
                if (plVar14 != (long *)0x0) {
                  iVar9 = (**(code **)(*plVar14 + 0x98))();
                  uVar16 = 0;
                  piVar18 = (int *)(param_1 + 0x1394);
                  do {
                    if (iVar9 == piVar18[-3]) goto LAB_0063f9b8;
                    if (iVar9 == piVar18[-2]) {
                      uVar16 = uVar16 | 1;
                      goto LAB_0063f9b8;
                    }
                    if (iVar9 == piVar18[-1]) {
                      uVar16 = uVar16 | 2;
                      goto LAB_0063f9b8;
                    }
                    if (iVar9 == *piVar18) {
                      uVar16 = uVar16 + 3;
                      goto LAB_0063f9b8;
                    }
                    uVar16 = uVar16 + 4;
                    piVar18 = piVar18 + 4;
                  } while (uVar16 < 0x40);
                }
                uVar16 = 0xffffffff;
              }
LAB_0063f9b8:
              *(int *)(param_1 + uVar23 * 4 + 0x1488) = (int)uVar16;
              iVar17 = *(int *)(lVar20 + 0x2840);
            }
            bVar1 = (long)uVar23 < (long)iVar17;
            uVar23 = uVar23 + 1;
          } while (bVar1);
          iVar9 = *(int *)(lVar21 + 0x17c);
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 < iVar9);
    }
    uVar15 = *(uint *)(param_1 + 0x3bf8);
    if (uVar15 != 0) {
      if ((uVar15 & 0x88) != 0) {
        lVar21 = param_1 + 0x930;
        (**(code **)PTR_DAT_02714830)(lVar21);
        uVar10 = FUN_00663280(*(undefined4 *)(param_1 + 0x3a80));
        (**(code **)PTR_DAT_02714838)(lVar21,uVar10);
        (**(code **)PTR_DAT_02714840)(lVar21,*(undefined1 *)(param_1 + 15000));
        uVar10 = FUN_00663300(*(undefined4 *)(param_1 + 0x3a84));
        (**(code **)PTR_DAT_02714848)(lVar21,uVar10);
        (**(code **)PTR_DAT_02714850)(lVar21,4);
        lVar21 = param_1 + 0x940;
        (**(code **)PTR_DAT_02714858)(lVar21);
        (**(code **)PTR_DAT_02714860)(lVar21,*(undefined1 *)(param_1 + 0x3a99));
        (**(code **)PTR_DAT_02714868)(lVar21,*(undefined4 *)(param_1 + 0x3a94));
        *(undefined1 *)(param_1 + 0xa74) = *(undefined1 *)(param_1 + 0x3a9c);
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x18060;
        uVar15 = *(uint *)(param_1 + 0x3bf8);
      }
      if ((uVar15 >> 6 & 1) != 0) {
        (**(code **)PTR_DAT_02714888)();
        (**(code **)PTR_DAT_02714890)(param_1 + 0x958);
        lVar22 = 0;
        iVar9 = 0;
        lVar21 = 0;
        do {
          lVar2 = param_1 + 0x3ae0 + lVar22;
          (**(code **)PTR_DAT_02714898)(param_1 + 0x958,iVar9,*(undefined1 *)(lVar2 + -0x10));
          lVar20 = param_1 + lVar21 + 0x8f0;
          (**(code **)PTR_DAT_027148a0)(lVar20);
          (**(code **)PTR_DAT_027148a8)(lVar20,iVar9);
          puVar3 = (undefined4 *)(param_1 + 0x3ae0 + lVar21 * 4);
          uVar10 = FUN_00663190(puVar3[-3],0);
          uVar12 = FUN_00663190(puVar3[-2],0);
          uVar13 = FUN_00663190(*puVar3,1);
          uVar11 = FUN_00663190(puVar3[1],1);
          (**(code **)PTR_DAT_027148b0)(lVar20,uVar10,uVar12,uVar13,uVar11);
          uVar10 = FUN_00663200(puVar3[-1]);
          uVar12 = FUN_00663200(puVar3[2]);
          (**(code **)PTR_DAT_027148b8)(lVar20,uVar10,uVar12);
          (**(code **)PTR_DAT_027148c0)
                    (param_1 + 0x95c,iVar9,*(undefined1 *)(lVar2 + 0xc),*(undefined1 *)(lVar2 + 0xd)
                     ,*(undefined1 *)(lVar2 + 0xe),*(undefined1 *)(lVar2 + 0xf));
          lVar21 = lVar21 + 8;
          iVar9 = iVar9 + 1;
          lVar22 = lVar22 + 0x20;
        } while (lVar21 != 0x40);
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x700;
        uVar15 = *(uint *)(param_1 + 0x3bf8);
      }
      if ((uVar15 >> 4 & 1) != 0) {
        lVar21 = param_1 + 0x938;
        (**(code **)PTR_DAT_027148c8)(lVar21);
        (**(code **)PTR_DAT_027148d0)(lVar21,*(undefined1 *)(param_1 + 0x3aa4));
        (**(code **)PTR_DAT_027148d8)(lVar21,*(undefined1 *)(param_1 + 0x3aa5));
        uVar10 = FUN_00663240(*(undefined4 *)(param_1 + 0x3aa0));
        (**(code **)PTR_DAT_027148e0)(lVar21,uVar10);
        (**(code **)PTR_DAT_027148e8)(lVar21,*(undefined1 *)(param_1 + 0x3aa8));
        uVar10 = FUN_006632a0(*(undefined4 *)(param_1 + 0x3ac8));
        puVar7 = PTR_DAT_027148f0;
        (**(code **)PTR_DAT_027148f0)(lVar21,2,uVar10);
        uVar10 = FUN_006632d0(*(undefined4 *)(param_1 + 0x3abc));
        uVar12 = FUN_006632d0(*(undefined4 *)(param_1 + 0x3ac0));
        uVar13 = FUN_006632d0(*(undefined4 *)(param_1 + 0x3ac4));
        puVar8 = PTR_DAT_027148f8;
        (**(code **)PTR_DAT_027148f8)(lVar21,2,uVar10,uVar12,uVar13);
        uVar10 = FUN_006632a0(*(undefined4 *)(param_1 + 0x3ab8));
        (**(code **)puVar7)(lVar21,1,uVar10);
        uVar10 = FUN_006632d0(*(undefined4 *)(param_1 + 0x3aac));
        uVar12 = FUN_006632d0(*(undefined4 *)(param_1 + 0x3ab0));
        uVar13 = FUN_006632d0(*(undefined4 *)(param_1 + 0x3ab4));
        (**(code **)puVar8)(lVar21,1,uVar10,uVar12,uVar13);
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80;
        uVar15 = *(uint *)(param_1 + 0x3bf8);
      }
      puVar4 = (undefined8 *)PTR_DAT_02714870;
      puVar5 = (undefined8 *)PTR_DAT_02714878;
      puVar6 = (undefined8 *)PTR_DAT_02714880;
      if ((uVar15 & 1) != 0) {
        lVar21 = *(long *)(param_1 + 0x3a70);
        if (lVar21 == 0) {
          return;
        }
        *(long *)(param_1 + 0xa78) = lVar21 + 0xb8;
        *(undefined4 *)(param_1 + 0xa80) = *(undefined4 *)(lVar21 + 0x178);
        iVar9 = *(int *)(lVar21 + 0x17c);
        *(int *)(param_1 + 0x34) = iVar9;
        memcpy((void *)(param_1 + 0x38),(void *)(lVar21 + 0x180),(long)iVar9 << 2);
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x2000;
        uVar15 = *(uint *)(param_1 + 0x3bf8);
        puVar4 = (undefined8 *)PTR_DAT_02714870;
        puVar5 = (undefined8 *)PTR_DAT_02714878;
        puVar6 = (undefined8 *)PTR_DAT_02714880;
      }
      PTR_DAT_02714870 = (undefined *)puVar4;
      PTR_DAT_02714878 = (undefined *)puVar5;
      PTR_DAT_02714880 = (undefined *)puVar6;
      if (((uVar15 >> 1 & 1) != 0) && (lVar21 = *(long *)(param_1 + 0x3a78), lVar21 != 0)) {
        iVar9 = *(int *)(lVar21 + 0x3fc);
        if (0 < iVar9) {
          lVar20 = 0;
          piVar18 = (int *)(lVar21 + 0x8c);
          lVar22 = param_1 + 0x964;
          do {
            uVar10 = FUN_00662f90(piVar18[-2]);
            (*(code *)*puVar4)(lVar22);
            (*(code *)*puVar5)(lVar22,piVar18[-1]);
            (*(code *)*puVar6)(lVar22,uVar10,(long)*piVar18);
            iVar9 = *(int *)(lVar21 + 0x3fc);
            lVar20 = lVar20 + 1;
            piVar18 = piVar18 + 7;
            lVar22 = lVar22 + 4;
          } while (lVar20 < iVar9);
          uVar15 = *(uint *)(param_1 + 0x3bf8);
        }
        *(int *)(param_1 + 0x960) = iVar9;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800;
      }
      if ((uVar15 >> 2 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_1 + 0x3bdc);
        uVar10 = FUN_00663210();
        *(undefined4 *)(param_1 + 0x8d8) = uVar10;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x10;
      }
      *(undefined4 *)(param_1 + 0x3bf8) = 0;
    }
  }
  return;
}


