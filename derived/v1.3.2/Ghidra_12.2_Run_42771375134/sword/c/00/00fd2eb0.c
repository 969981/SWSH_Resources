/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd2eb0; name: FUN_00fd2eb0
 */


void FUN_00fd2eb0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  undefined8 uVar32;
  long *plVar33;
  undefined1 *puVar34;
  undefined8 uVar35;
  undefined2 local_68;
  
  bVar6 = FUN_00fd3ca0();
  puVar5 = PTR_DAT_02710798;
  *(byte *)(param_1 + 0x7c0) = bVar6 & 1;
  lVar27 = *(long *)(*(long *)puVar5 + 0x1e0);
  if (lVar27 != 0) {
    (**(code **)(*(long *)(lVar27 + 0x48) + 0x10))();
  }
  uVar28 = 0;
  puVar34 = (undefined1 *)(param_1 + 0x651);
  do {
    if (*(char *)(param_1 + 0x7c0) == '\0') {
      uVar7 = (uint)uVar28;
      uVar17 = uVar28;
    }
    else {
      uVar17 = FUN_01558260(lVar27,uVar28 & 0xffffffff);
      uVar7 = (uint)uVar17;
    }
    if (uVar7 < 10) {
      uVar30 = uVar17 & 0xffffffff;
      uVar20 = -(uVar30 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2;
      uVar3 = *(undefined4 *)(&DAT_02161fb0 + uVar20);
      uVar22 = -(uVar30 >> 0x1f) & 0xfffffff800000000 | uVar30 << 3;
      uVar32 = *(undefined8 *)(&DAT_02161fe0 + uVar22);
      uVar4 = *(undefined4 *)(&DAT_02162030 + uVar20);
      uVar35 = *(undefined8 *)(&DAT_02162060 + uVar22);
      bVar6 = FUN_01558280(lVar27,uVar30);
      *(int *)(puVar34 + -0x21) = (int)uVar17;
      *(undefined4 *)(puVar34 + -0x1d) = uVar3;
      *(undefined8 *)(puVar34 + -0x19) = uVar32;
      *(undefined4 *)(puVar34 + -0x11) = 3;
      *(undefined4 *)(puVar34 + -0xd) = uVar4;
      *(undefined8 *)(puVar34 + -9) = uVar35;
      puVar34[-1] = bVar6 & 1;
      *puVar34 = 0;
    }
    puVar5 = PTR_DAT_02710848;
    uVar28 = uVar28 + 1;
    puVar34 = puVar34 + 0x28;
  } while (uVar28 != 10);
  lVar31 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar31 != 0) {
    (**(code **)(*(long *)(lVar31 + 0x48) + 0x10))();
  }
  lVar29 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
  }
  if (lVar31 != 0) {
    (**(code **)(*(long *)(lVar31 + 0x48) + 0x18))((long *)(lVar31 + 0x48));
  }
  uVar7 = FUN_01510f00(lVar29,*(undefined8 *)(param_1 + 0x648));
  *(char *)(param_1 + 0x651) = (char)(uVar7 & 1);
  uVar8 = FUN_01510f00(lVar29,*(undefined8 *)(param_1 + 0x670));
  *(char *)(param_1 + 0x679) = (char)(uVar8 & 1);
  uVar9 = FUN_01510f00(lVar29,*(undefined8 *)(param_1 + 0x698));
  *(char *)(param_1 + 0x6a1) = (char)(uVar9 & 1);
  uVar10 = FUN_01510f00(lVar29,*(undefined8 *)(param_1 + 0x6c0));
  *(char *)(param_1 + 0x6c9) = (char)(uVar10 & 1);
  uVar11 = FUN_01510f00(lVar29,*(undefined8 *)(param_1 + 0x6e8));
  *(char *)(param_1 + 0x6f1) = (char)(uVar11 & 1);
  uVar12 = FUN_01510f00(lVar29,*(undefined8 *)(param_1 + 0x710));
  *(char *)(param_1 + 0x719) = (char)(uVar12 & 1);
  uVar13 = FUN_01510f00(lVar29,*(undefined8 *)(param_1 + 0x738));
  *(char *)(param_1 + 0x741) = (char)(uVar13 & 1);
  uVar14 = FUN_01510f00(lVar29,*(undefined8 *)(param_1 + 0x760));
  *(char *)(param_1 + 0x769) = (char)(uVar14 & 1);
  uVar15 = FUN_01510f00(lVar29,*(undefined8 *)(param_1 + 0x788));
  *(char *)(param_1 + 0x791) = (char)(uVar15 & 1);
  uVar16 = FUN_01510f00(lVar29,*(undefined8 *)(param_1 + 0x7b0));
  *(char *)(param_1 + 0x7b9) = (char)(uVar16 & 1);
  lVar31 = *(long *)(*(long *)puVar5 + 0x90);
  if (lVar31 == 0) {
    uVar28 = FUN_0100c3f0(0,1);
    uVar2 = *(uint *)PTR_DAT_02722f90;
  }
  else {
    plVar33 = (long *)(lVar31 + 0x48);
    (**(code **)(*plVar33 + 0x10))(plVar33);
    uVar28 = FUN_0100c3f0(lVar31,1);
    (**(code **)(*plVar33 + 0x18))(plVar33);
    uVar2 = *(uint *)PTR_DAT_02722f90;
  }
  if ((((uVar28 & 1) != 0) || (uVar2 < 10)) &&
     ((uVar7 & 1) + (uVar8 & 1) + (uVar9 & 1) + (uVar10 & 1) + (uVar11 & 1) + (uVar12 & 1) +
      (uVar13 & 1) + (uVar14 & 1) + (uVar15 & 1) + (uVar16 & 1) <= uVar2)) {
    *(undefined4 *)PTR_DAT_02722f90 = 0;
    *(undefined4 *)(param_1 + 0x628) = 0;
  }
  if (*(char *)(param_1 + 0x7c0) == '\0') {
    puVar1 = (undefined8 *)(param_1 + 0x630);
    uVar28 = 0;
    uVar7 = 0;
    iVar19 = 0;
    puVar23 = puVar1;
    do {
      if (*(char *)(param_1 + uVar28 * 0x28 + 0x651) != '\0') {
        if ((uVar7 < 10) && (uVar17 = (ulong)uVar7, uVar28 != uVar17)) {
          lVar31 = param_1 + uVar28 * 0x28;
          uVar35 = *(undefined8 *)(lVar31 + 0x630);
          uVar24 = *(undefined8 *)(lVar31 + 0x638);
          uVar25 = *(undefined8 *)(lVar31 + 0x640);
          uVar26 = *(undefined8 *)(lVar31 + 0x648);
          uVar32 = *(undefined8 *)(lVar31 + 0x650);
          iVar21 = (int)uVar28;
          if (uVar28 < uVar17) {
            uVar20 = uVar28;
            if ((uVar7 - iVar21 & 3) != 0) {
              lVar31 = 0;
              puVar18 = puVar23;
              do {
                *(undefined2 *)(puVar18 + 4) = *(undefined2 *)(puVar18 + 9);
                lVar31 = lVar31 + -1;
                puVar18[2] = puVar18[7];
                puVar18[3] = puVar18[8];
                *puVar18 = puVar18[5];
                puVar18[1] = puVar18[6];
                puVar18 = puVar18 + 5;
              } while (-lVar31 != ((ulong)(iVar19 + uVar7) & 3));
              uVar20 = uVar28 - lVar31;
            }
            if (2 < ~uVar28 + uVar17) {
              lVar31 = uVar17 - uVar20;
              puVar18 = puVar1 + uVar20 * 5;
              do {
                lVar31 = lVar31 + -4;
                *puVar18 = puVar18[5];
                puVar18[1] = puVar18[6];
                *(undefined2 *)(puVar18 + 4) = *(undefined2 *)(puVar18 + 9);
                puVar18[2] = puVar18[7];
                puVar18[3] = puVar18[8];
                puVar18[5] = puVar18[10];
                puVar18[6] = puVar18[0xb];
                *(undefined2 *)(puVar18 + 9) = *(undefined2 *)(puVar18 + 0xe);
                puVar18[7] = puVar18[0xc];
                puVar18[8] = puVar18[0xd];
                puVar18[10] = puVar18[0xf];
                puVar18[0xb] = puVar18[0x10];
                *(undefined2 *)(puVar18 + 0xe) = *(undefined2 *)(puVar18 + 0x13);
                puVar18[0xc] = puVar18[0x11];
                puVar18[0xd] = puVar18[0x12];
                puVar18[0xf] = puVar18[0x14];
                *(undefined2 *)(puVar18 + 0x13) = *(undefined2 *)(puVar18 + 0x18);
                puVar18[0x10] = puVar18[0x15];
                puVar18[0x11] = puVar18[0x16];
                puVar18[0x12] = puVar18[0x17];
                puVar18 = puVar18 + 0x14;
              } while (lVar31 != 0);
            }
          }
          else {
            uVar20 = (ulong)(int)uVar7;
            if ((long)uVar20 < (long)uVar28) {
              uVar22 = uVar28;
              if ((iVar21 - uVar7 & 3) != 0) {
                uVar22 = 0;
                puVar18 = puVar23;
                do {
                  *(undefined2 *)(puVar18 + 4) = *(undefined2 *)(puVar18 + -1);
                  uVar22 = uVar22 + 1;
                  puVar18[2] = puVar18[-3];
                  puVar18[3] = puVar18[-2];
                  *puVar18 = puVar18[-5];
                  puVar18[1] = puVar18[-4];
                  puVar18 = puVar18 + -5;
                } while (((ulong)(iVar21 - uVar7) & 3) != uVar22);
                uVar22 = uVar28 - uVar22;
              }
              if (2 < uVar28 + ~uVar20) {
                puVar18 = puVar1 + uVar22 * 5;
                do {
                  uVar22 = uVar22 - 4;
                  *puVar18 = puVar18[-5];
                  puVar18[1] = puVar18[-4];
                  *(undefined2 *)(puVar18 + 4) = *(undefined2 *)(puVar18 + -1);
                  puVar18[2] = puVar18[-3];
                  puVar18[3] = puVar18[-2];
                  puVar18[-5] = puVar18[-10];
                  puVar18[-4] = puVar18[-9];
                  *(undefined2 *)(puVar18 + -1) = *(undefined2 *)(puVar18 + -6);
                  puVar18[-3] = puVar18[-8];
                  puVar18[-2] = puVar18[-7];
                  puVar18[-10] = puVar18[-0xf];
                  puVar18[-9] = puVar18[-0xe];
                  *(undefined2 *)(puVar18 + -6) = *(undefined2 *)(puVar18 + -0xb);
                  puVar18[-8] = puVar18[-0xd];
                  puVar18[-7] = puVar18[-0xc];
                  puVar18[-0xf] = puVar18[-0x14];
                  *(undefined2 *)(puVar18 + -0xb) = *(undefined2 *)(puVar18 + -0x10);
                  puVar18[-0xe] = puVar18[-0x13];
                  puVar18[-0xd] = puVar18[-0x12];
                  puVar18[-0xc] = puVar18[-0x11];
                  puVar18 = puVar18 + -0x14;
                } while ((long)uVar20 < (long)uVar22);
              }
            }
          }
          lVar31 = param_1 + uVar17 * 0x28;
          *(undefined8 *)(lVar31 + 0x630) = uVar35;
          local_68 = (undefined2)uVar32;
          *(undefined2 *)(lVar31 + 0x650) = local_68;
          *(undefined8 *)(lVar31 + 0x648) = uVar26;
          *(undefined8 *)(lVar31 + 0x640) = uVar25;
          *(undefined8 *)(lVar31 + 0x638) = uVar24;
        }
        uVar7 = uVar7 + 1;
      }
      uVar28 = uVar28 + 1;
      puVar23 = puVar23 + 5;
      iVar19 = iVar19 + 3;
    } while (uVar28 != 10);
  }
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))((long *)(lVar29 + 0x48));
  }
  if (lVar27 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fd3458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar27 + 0x48) + 0x18))((long *)(lVar27 + 0x48));
  return;
}


