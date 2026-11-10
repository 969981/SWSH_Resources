/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00133030; name: FUN_00133030
 */


/* WARNING: Removing unreachable block (ram,0x00133780) */

void FUN_00133030(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  ulong *puVar10;
  uint *puVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong local_80 [3];
  char local_64 [4];
  
  *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
  if (((*(int *)(param_1 + 0xe0) != 0) || (*(int *)(param_1 + 0xf8) != 0)) ||
     (*(int *)(param_1 + 0x110) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x118) + 0x60))(*(long **)(param_1 + 0x118),param_3);
  }
  if (*(uint *)(param_1 + 0x150) < (*(uint *)(param_1 + 0x154) >> 1 & 0x3fffffff)) {
    FUN_00135bb0(param_1 + 0x148,0,local_80);
    FUN_00135c40(param_1 + 0x148,*(undefined4 *)(param_1 + 0x150));
  }
  else {
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  if (*(uint *)(param_1 + 400) < (*(uint *)(param_1 + 0x194) >> 1 & 0x3fffffff)) {
    FUN_00135bb0(param_1 + 0x188,0,local_80);
    FUN_00135c40(param_1 + 0x188,*(undefined4 *)(param_1 + 400));
  }
  else {
    *(undefined4 *)(param_1 + 400) = 0;
  }
  if (*(uint *)(param_1 + 0x160) < (*(uint *)(param_1 + 0x164) >> 1 & 0x3fffffff)) {
    FUN_00135bb0(param_1 + 0x158,0,local_80);
    FUN_00135c40(param_1 + 0x158,*(undefined4 *)(param_1 + 0x160));
  }
  else {
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  if (*(uint *)(param_1 + 0x1a0) < (*(uint *)(param_1 + 0x1a4) >> 1 & 0x3fffffff)) {
    FUN_00135bb0(param_1 + 0x198,0,local_80);
    FUN_00135c40(param_1 + 0x198,*(undefined4 *)(param_1 + 0x1a0));
  }
  else {
    *(undefined4 *)(param_1 + 0x1a0) = 0;
  }
  if (*(uint *)(param_1 + 0x170) < (*(uint *)(param_1 + 0x174) >> 1 & 0x3fffffff)) {
    FUN_00135bb0(param_1 + 0x168,0,local_80);
    FUN_00135c40(param_1 + 0x168,*(undefined4 *)(param_1 + 0x170));
  }
  else {
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  if (*(uint *)(param_1 + 0x1b0) < (*(uint *)(param_1 + 0x1b4) >> 1 & 0x3fffffff)) {
    FUN_00135bb0(param_1 + 0x1a8,0,local_80);
    FUN_00135c40(param_1 + 0x1a8,*(undefined4 *)(param_1 + 0x1b0));
  }
  else {
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  if (*(uint *)(param_1 + 0x180) < (*(uint *)(param_1 + 0x184) >> 1 & 0x3fffffff)) {
    FUN_00135bb0(param_1 + 0x178,0,local_80);
    FUN_00135c40(param_1 + 0x178,*(undefined4 *)(param_1 + 0x180));
  }
  else {
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  if (*(uint *)(param_1 + 0x1c0) < (*(uint *)(param_1 + 0x1c4) >> 1 & 0x3fffffff)) {
    FUN_00135bb0(param_1 + 0x1b8,0,local_80);
    FUN_00135c40(param_1 + 0x1b8,*(undefined4 *)(param_1 + 0x1c0));
  }
  else {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  iVar8 = (**(code **)(**(long **)(param_1 + 0x118) + 0x78))();
  piVar9 = (int *)(**(code **)(**(long **)(param_1 + 0x118) + 0x80))();
  if (iVar8 != 0) {
    iVar12 = 0x3fffffff;
    iVar17 = 0x3fffffff;
    do {
      iVar3 = *piVar9;
      iVar4 = piVar9[1];
      iVar8 = iVar8 + -1;
      if (iVar3 != iVar17 || iVar4 != iVar12) {
        FUN_00132dd0(param_1,piVar9);
        iVar17 = iVar3;
        iVar12 = iVar4;
      }
      piVar9 = piVar9 + 2;
    } while (iVar8 != 0);
  }
  FUN_00133990(param_1 + 0x210,param_1);
  FUN_00133990(param_1 + 0x248,param_1);
  uVar14 = *(uint *)(param_1 + 0x200);
  plVar1 = (long *)(param_1 + 0x1f8);
  if (uVar14 == 0) {
    if ((*(uint *)(param_1 + 0x204) >> 1 & 0x3fffffff) == 0) goto LAB_00133370;
  }
  else {
    uVar20 = 0;
    do {
      lVar13 = *(long *)(*plVar1 + uVar20 * 8);
      *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
      if (*(long *)(lVar13 + 0x18) != 0) {
        FUN_0012f240(param_1);
      }
      uVar20 = uVar20 + 1;
    } while (uVar14 != uVar20);
    if ((*(uint *)(param_1 + 0x204) >> 1 & 0x3fffffff) <= *(uint *)(param_1 + 0x200)) {
LAB_00133370:
      *(undefined4 *)(param_1 + 0x200) = 0;
      goto LAB_00133374;
    }
  }
  local_80[0] = 0;
  FUN_00135d50(plVar1,0,local_80);
  FUN_00135e30(plVar1,*(undefined4 *)(param_1 + 0x200));
LAB_00133374:
  iVar8 = (**(code **)(**(long **)(param_1 + 0x118) + 0x68))();
  piVar9 = (int *)(**(code **)(**(long **)(param_1 + 0x118) + 0x70))();
  if (iVar8 != 0) {
    iVar12 = 0x3fffffff;
    iVar17 = 0x3fffffff;
    do {
      iVar3 = *piVar9;
      iVar4 = piVar9[1];
      iVar8 = iVar8 + -1;
      if (iVar3 != iVar17 || iVar4 != iVar12) {
        FUN_00132b00(param_1,piVar9);
        iVar17 = iVar3;
        iVar12 = iVar4;
      }
      piVar9 = piVar9 + 2;
    } while (iVar8 != 0);
  }
  uVar14 = *(int *)(param_1 + 0x180) +
           *(int *)(param_1 + 0x170) + *(int *)(param_1 + 0x160) + *(int *)(param_1 + 0x150);
  uVar7 = *(uint *)(param_1 + 700);
  if ((uVar7 != 0) && (*(int *)(param_1 + 0x2cc) != 0)) {
    uVar20 = 0;
    do {
      uVar14 = *(uint *)((long)*(void **)(param_1 + 0x2b0) + uVar20 * 4);
      if (uVar14 != 0xffffffff) {
        do {
          uVar14 = *(uint *)(*(long *)(param_1 + 0x2a8) + (ulong)uVar14 * 4);
        } while (uVar14 != 0xffffffff);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar7);
                    /* WARNING: Subroutine does not return */
    memset(*(void **)(param_1 + 0x2b0),-1,(ulong)(uVar7 << 2));
  }
  if (uVar7 < uVar14) {
    FUN_00134ed0(param_1 + 0x298,uVar14);
  }
  lVar13 = 0;
  do {
    lVar2 = param_1 + lVar13 * 0x10;
    uVar14 = *(uint *)(lVar2 + 400);
    uVar21 = (ulong)uVar14;
    uVar7 = *(uint *)(lVar2 + 0x150);
    uVar20 = (ulong)uVar7;
    if (uVar7 != 0) {
      if (uVar14 == 0) {
        lVar18 = *(long *)(lVar2 + 0x148);
        lVar16 = *(long *)(param_1 + 0xb0);
        lVar22 = 0;
        if (uVar7 != 1) {
          puVar10 = (ulong *)(lVar18 + 0x18);
          do {
            puVar10[-3] = *(ulong *)(lVar16 + (ulong)(uint)puVar10[-3] * 0x10) & 0xfffffffffffffff0;
            puVar10[-2] = *(ulong *)(lVar16 + (ulong)(uint)puVar10[-2] * 0x10) & 0xfffffffffffffff0;
            *puVar10 = *(ulong *)(lVar16 + (ulong)(uint)*puVar10 * 0x10) & 0xfffffffffffffff0;
            lVar22 = lVar22 + 2;
            puVar10[1] = *(ulong *)(lVar16 + (ulong)(uint)puVar10[1] * 0x10) & 0xfffffffffffffff0;
            puVar10 = puVar10 + 6;
          } while (uVar20 - (uVar20 & 1) != lVar22);
        }
        if ((uVar7 & 1) != 0) {
          puVar10 = (ulong *)(lVar18 + lVar22 * 0x18);
          *puVar10 = *(ulong *)(lVar16 + (ulong)(uint)*puVar10 * 0x10) & 0xfffffffffffffff0;
          puVar10[1] = *(ulong *)(lVar16 + (ulong)(uint)puVar10[1] * 0x10) & 0xfffffffffffffff0;
        }
      }
      else {
        lVar22 = 0;
        do {
          while( true ) {
            puVar10 = (ulong *)(*(long *)(lVar2 + 0x148) + lVar22);
            lVar16 = *(long *)(param_1 + 0xb0);
            uVar15 = *puVar10;
            uVar5 = puVar10[1];
            *puVar10 = *(ulong *)(lVar16 + (uVar15 & 0xffffffff) * 0x10) & 0xfffffffffffffff0;
            puVar10[1] = *(ulong *)(lVar16 + (uVar5 & 0xffffffff) * 0x10) & 0xfffffffffffffff0;
            local_80[0] = CONCAT44((int)uVar5,(int)uVar15);
            puVar10 = (ulong *)FUN_00135f90(param_1 + 0x298,local_80,local_64);
            if (local_64[0] == '\0') break;
            lVar22 = lVar22 + 0x18;
            uVar20 = uVar20 - 1;
            if (uVar20 == 0) goto LAB_0013366c;
          }
          *puVar10 = local_80[0];
          lVar22 = lVar22 + 0x18;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
    }
LAB_0013366c:
    if (uVar14 == 0) {
      uVar14 = 0;
    }
    else {
      lVar22 = *(long *)(lVar2 + 0x188);
      if (*(int *)(param_1 + 0x2cc) == 0) {
        lVar16 = *(long *)(param_1 + 0xb0);
        if (uVar14 == 1) {
          lVar18 = 0;
        }
        else {
          lVar18 = 0;
          puVar10 = (ulong *)(lVar22 + 0x18);
          do {
            puVar10[-3] = *(ulong *)(lVar16 + (ulong)(uint)puVar10[-3] * 0x10) & 0xfffffffffffffff0;
            puVar10[-2] = *(ulong *)(lVar16 + (ulong)(uint)puVar10[-2] * 0x10) & 0xfffffffffffffff0;
            *puVar10 = *(ulong *)(lVar16 + (ulong)(uint)*puVar10 * 0x10) & 0xfffffffffffffff0;
            lVar18 = lVar18 + 2;
            puVar10[1] = *(ulong *)(lVar16 + (ulong)(uint)puVar10[1] * 0x10) & 0xfffffffffffffff0;
            puVar10 = puVar10 + 6;
          } while (uVar21 - (uVar21 & 1) != lVar18);
          if ((uVar14 & 1) == 0) goto LAB_00133824;
        }
        puVar10 = (ulong *)(lVar22 + lVar18 * 0x18);
        *puVar10 = *(ulong *)(lVar16 + (ulong)(uint)*puVar10 * 0x10) & 0xfffffffffffffff0;
        puVar10[1] = *(ulong *)(lVar16 + (ulong)(uint)puVar10[1] * 0x10) & 0xfffffffffffffff0;
      }
      else {
        iVar8 = *(int *)(param_1 + 700);
        lVar16 = *(long *)(param_1 + 0x2b0);
        uVar20 = 0;
        uVar15 = 0;
        do {
          puVar10 = (ulong *)(lVar22 + uVar20 * 0x18);
          uVar5 = *puVar10;
          uVar6 = puVar10[1];
          uVar7 = (uint)uVar5;
          iVar17 = (int)uVar6;
          uVar14 = uVar7 & 0xffff | iVar17 << 0x10;
          uVar14 = uVar14 + (uVar14 << 0xf ^ 0xffffffff);
          uVar14 = (uVar14 ^ uVar14 >> 10) * 9;
          uVar14 = uVar14 ^ uVar14 >> 6;
          uVar14 = uVar14 + (uVar14 << 0xb ^ 0xffffffff);
          uVar14 = *(uint *)(lVar16 + (ulong)(iVar8 - 1U & (uVar14 ^ uVar14 >> 0x10)) * 4);
          if (uVar14 != 0xffffffff) {
            lVar18 = *(long *)(param_1 + 0x2a0);
            do {
              uVar19 = (ulong)uVar14;
              if ((*(uint *)(lVar18 + uVar19 * 8) == uVar7) &&
                 (*(int *)(lVar18 + uVar19 * 8 + 4) == iVar17)) {
                if (lVar18 + uVar19 * 8 != 0) goto LAB_00133750;
                break;
              }
              uVar14 = *(uint *)(*(long *)(param_1 + 0x2a8) + uVar19 * 4);
            } while (uVar14 != 0xffffffff);
          }
          lVar18 = *(long *)(param_1 + 0xb0);
          puVar10 = (ulong *)(lVar22 + uVar15 * 0x18);
          uVar15 = (ulong)((int)uVar15 + 1);
          *puVar10 = *(ulong *)(lVar18 + (uVar5 & 0xffffffff) * 0x10) & 0xfffffffffffffff0;
          puVar10[1] = *(ulong *)(lVar18 + (uVar6 & 0xffffffff) * 0x10) & 0xfffffffffffffff0;
LAB_00133750:
          uVar14 = (uint)uVar15;
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar21);
      }
    }
LAB_00133824:
    lVar13 = lVar13 + 1;
    *(uint *)(lVar2 + 400) = uVar14;
  } while (lVar13 != 4);
  iVar8 = (**(code **)(**(long **)(param_1 + 0x118) + 0x38))();
  puVar11 = (uint *)(**(code **)(**(long **)(param_1 + 0x118) + 0x40))();
  if (iVar8 != 0) {
    do {
      while( true ) {
        uVar14 = *puVar11;
        iVar8 = iVar8 + -1;
        if ((*(uint *)(*(long *)(param_1 + 0x60) + (ulong)(uVar14 >> 5) * 4) &
            1 << ((ulong)uVar14 & 0x1f)) == 0) break;
joined_r0x00133914:
        puVar11 = puVar11 + 1;
        if (iVar8 == 0) goto LAB_00133940;
      }
      puVar10 = (ulong *)(*(long *)(param_1 + 0xb0) + (ulong)uVar14 * 0x10);
      if ((int)puVar10[1] != -1) {
        local_80[0] = *puVar10 & 0xfffffffffffffff0;
        uVar14 = *(uint *)(param_1 + 0x140);
        if (uVar14 < (*(uint *)(param_1 + 0x144) & 0x7fffffff)) {
          *(ulong *)(*(long *)(param_1 + 0x138) + (ulong)uVar14 * 8) = local_80[0];
          *(uint *)(param_1 + 0x140) = uVar14 + 1;
        }
        else {
          FUN_00136130(param_1 + 0x138,local_80);
        }
        goto joined_r0x00133914;
      }
      local_80[0] = *puVar10 & 0xfffffffffffffff0;
      uVar14 = *(uint *)(param_1 + 0x130);
      if (uVar14 < (*(uint *)(param_1 + 0x134) & 0x7fffffff)) {
        *(ulong *)(*(long *)(param_1 + 0x128) + (ulong)uVar14 * 8) = local_80[0];
        *(uint *)(param_1 + 0x130) = uVar14 + 1;
        goto joined_r0x00133914;
      }
      FUN_00136130(param_1 + 0x128,local_80);
      puVar11 = puVar11 + 1;
    } while (iVar8 != 0);
  }
LAB_00133940:
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(param_1 + 0x50),0,(ulong)(uint)(*(int *)(param_1 + 0x58) << 2));
}


