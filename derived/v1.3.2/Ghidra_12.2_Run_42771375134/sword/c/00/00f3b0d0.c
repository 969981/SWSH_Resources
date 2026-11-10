/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3b0d0; name: FUN_00f3b0d0
 */


void FUN_00f3b0d0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  undefined1 auStack_110 [8];
  long *local_108;
  long *local_100;
  long local_f8;
  long local_f0;
  long local_e8 [17];
  
  plVar8 = (long *)param_2[7];
  plVar9 = param_2 + 8;
  if (plVar8 != plVar9) {
    uVar18 = 0;
    plVar10 = plVar8;
    do {
      while( true ) {
        if (plVar10[4] == *param_3) goto LAB_00f3b188;
        uVar18 = uVar18 + 1;
        plVar11 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) break;
        do {
          plVar10 = plVar11;
          plVar11 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
LAB_00f3b16c:
        if (plVar10 == plVar9) goto LAB_00f3b184;
      }
      plVar11 = plVar10 + 2;
      plVar13 = (long *)*plVar11;
      if ((long *)*plVar13 != plVar10) {
        do {
          lVar12 = *plVar11;
          plVar11 = (long *)(lVar12 + 0x10);
          plVar10 = (long *)*plVar11;
        } while (*plVar10 != lVar12);
        goto LAB_00f3b16c;
      }
      plVar10 = plVar13;
    } while (plVar13 != plVar9);
LAB_00f3b184:
    uVar18 = 0xffffffff;
LAB_00f3b188:
    uVar17 = 0;
    do {
      while( true ) {
        if (plVar8[4] == *param_4) {
          if ((uVar18 != 0xffffffff) && (uVar17 != 0xffffffff)) {
            local_e8[0xe] = 0;
            local_e8[0xf] = 0;
            local_e8[0xc] = 0;
            local_e8[0xd] = 0;
            local_e8[10] = 0;
            local_e8[0xb] = 0;
            local_e8[8] = 0;
            local_e8[9] = 0;
            local_e8[6] = 0;
            local_e8[7] = 0;
            local_e8[4] = 0;
            local_e8[5] = 0;
            local_e8[2] = 0;
            local_e8[3] = 0;
            local_e8[0] = 0;
            local_e8[1] = 0;
            uVar3 = FUN_00f37770(param_2,uVar18,uVar17,local_e8,0x10);
            local_100 = (long *)*param_2;
            lVar12 = 0;
            if (*(uint *)(param_2 + 0xc) <= uVar18) goto LAB_00f3b30c;
            plVar9 = (long *)param_2[7];
            lVar12 = (long)(int)uVar18;
            if ((int)uVar18 < 0) goto LAB_00f3b2d0;
            plVar8 = plVar9;
            if (uVar18 != 0) goto LAB_00f3b270;
            goto LAB_00f3b308;
          }
          goto LAB_00f3b3c4;
        }
        uVar17 = uVar17 + 1;
        plVar10 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) break;
        do {
          plVar8 = plVar10;
          plVar10 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
LAB_00f3b1e4:
        if (plVar8 == plVar9) goto LAB_00f3b3c4;
      }
      plVar10 = plVar8 + 2;
      plVar11 = (long *)*plVar10;
      if ((long *)*plVar11 != plVar8) {
        do {
          lVar12 = *plVar10;
          plVar10 = (long *)(lVar12 + 0x10);
          plVar8 = (long *)*plVar10;
        } while (*plVar8 != lVar12);
        goto LAB_00f3b1e4;
      }
      plVar8 = plVar11;
    } while (plVar11 != plVar9);
  }
LAB_00f3b3c4:
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
LAB_00f3b2d0:
  do {
    plVar8 = plVar9;
    plVar10 = (long *)*plVar9;
    if ((long *)*plVar9 == (long *)0x0) {
      do {
        plVar9 = (long *)plVar8[2];
        bVar2 = (long *)*plVar9 == plVar8;
        plVar8 = plVar9;
      } while (bVar2);
    }
    else {
      do {
        plVar9 = plVar10;
        plVar10 = (long *)plVar9[1];
      } while ((long *)plVar9[1] != (long *)0x0);
    }
    bVar2 = lVar12 < -1;
    lVar12 = lVar12 + 1;
  } while (bVar2);
  goto LAB_00f3b308;
  while( true ) {
    plVar10 = plVar8 + 2;
    plVar9 = (long *)*plVar10;
    if ((long *)*plVar9 != plVar8) {
      do {
        lVar19 = *plVar10;
        plVar10 = (long *)(lVar19 + 0x10);
        plVar9 = (long *)*plVar10;
      } while (*plVar9 != lVar19);
      goto LAB_00f3b2b4;
    }
    lVar19 = lVar12 + -1;
    bVar2 = lVar12 < 1;
    lVar12 = lVar19;
    plVar8 = plVar9;
    if (lVar19 == 0 || bVar2) break;
LAB_00f3b270:
    plVar10 = (long *)plVar8[1];
    if ((long *)plVar8[1] != (long *)0x0) {
      do {
        plVar9 = plVar10;
        plVar10 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
LAB_00f3b2b4:
      lVar19 = lVar12 + -1;
      bVar2 = lVar12 < 1;
      lVar12 = lVar19;
      plVar8 = plVar9;
      if (lVar19 == 0 || bVar2) break;
      goto LAB_00f3b270;
    }
  }
LAB_00f3b308:
  lVar12 = plVar9[5];
LAB_00f3b30c:
  if (uVar17 < *(uint *)(param_2 + 0xc)) {
    plVar9 = (long *)param_2[7];
    lVar19 = (long)(int)uVar17;
    if ((int)uVar17 < 0) {
      do {
        plVar8 = plVar9;
        plVar10 = (long *)*plVar9;
        if ((long *)*plVar9 == (long *)0x0) {
          do {
            plVar9 = (long *)plVar8[2];
            bVar2 = (long *)*plVar9 == plVar8;
            plVar8 = plVar9;
          } while (bVar2);
        }
        else {
          do {
            plVar9 = plVar10;
            plVar10 = (long *)plVar9[1];
          } while ((long *)plVar9[1] != (long *)0x0);
        }
        bVar2 = lVar19 < -1;
        lVar19 = lVar19 + 1;
      } while (bVar2);
    }
    else {
      plVar8 = plVar9;
      if (uVar17 != 0) {
        do {
          while (plVar10 = (long *)plVar8[1], (long *)plVar8[1] != (long *)0x0) {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
LAB_00f3b368:
            lVar4 = lVar19 + -1;
            bVar2 = lVar19 < 1;
            lVar19 = lVar4;
            plVar8 = plVar9;
            if (lVar4 == 0 || bVar2) goto LAB_00f3b3bc;
          }
          plVar10 = plVar8 + 2;
          plVar9 = (long *)*plVar10;
          if ((long *)*plVar9 != plVar8) {
            do {
              lVar4 = *plVar10;
              plVar10 = (long *)(lVar4 + 0x10);
              plVar9 = (long *)*plVar10;
            } while (*plVar9 != lVar4);
            goto LAB_00f3b368;
          }
          lVar4 = lVar19 + -1;
          bVar2 = 0 < lVar19;
          lVar19 = lVar4;
          plVar8 = plVar9;
        } while (lVar4 != 0 && bVar2);
      }
    }
LAB_00f3b3bc:
    lVar19 = plVar9[5];
  }
  else {
    lVar19 = 0;
  }
  uVar1 = *(undefined4 *)(local_e8[0] + 0x70);
  plVar9 = (long *)(**(code **)(*local_100 + 0x10))(local_100,0x50,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = local_100;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar6 = *param_2;
  *plVar9 = lVar6;
  plVar9[1] = lVar12;
  plVar9[6] = lVar6;
  plVar9[7] = 0;
  plVar9[2] = lVar19;
  plVar9[3] = (long)(plVar9 + 3);
  *(undefined4 *)(plVar9 + 8) = 0;
  plVar9[4] = (long)(plVar9 + 3);
  plVar9[5] = 0;
  *(undefined4 *)(plVar9 + 9) = uVar1;
  *(undefined4 *)((long)plVar9 + 0x4c) = 0;
  local_f8 = 0x50;
  local_f0 = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (uVar3 != 0) {
    uVar16 = 0;
    local_108 = plVar9;
    do {
      lVar19 = local_e8[uVar16];
      lVar12 = *(long *)(lVar19 + 0x10);
      if ((int)((ulong)(*(long *)(lVar19 + 0x18) - lVar12) >> 3) != 0) {
        uVar20 = 0;
        do {
          uVar14 = *(undefined8 *)(lVar12 + uVar20 * 8);
          if (uVar20 < ((ulong)(*(long *)(lVar19 + 0x48) - *(long *)(lVar19 + 0x40)) >> 3 &
                       0xffffffff)) {
            uVar15 = *(undefined8 *)(*(long *)(lVar19 + 0x40) + uVar20 * 8);
          }
          else {
            uVar15 = 0;
          }
          uVar5 = FUN_00f3b580(plVar9);
          FUN_00f3b6c0(auStack_110,uVar5,uVar14,uVar15);
          lVar12 = *(long *)(lVar19 + 0x10);
          uVar20 = uVar20 + 1;
        } while (uVar20 < ((ulong)(*(long *)(lVar19 + 0x18) - lVar12) >> 3 & 0xffffffff));
      }
      uVar14 = *(undefined8 *)(lVar19 + 8);
      iVar7 = (int)((ulong)(*(long *)(lVar19 + 0x48) - *(long *)(lVar19 + 0x40)) >> 3);
      if (iVar7 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(*(long *)(lVar19 + 0x40) + (ulong)(iVar7 - 1) * 8);
      }
      uVar5 = FUN_00f3b580(plVar9);
      FUN_00f3b6c0(auStack_110,uVar5,uVar14,uVar15);
      uVar16 = uVar16 + 1;
      *(float *)((long)plVar9 + 0x4c) = *(float *)(lVar19 + 0x74) + *(float *)((long)plVar9 + 0x4c);
    } while (uVar16 != uVar3);
  }
  param_1[2] = local_f8;
  param_1[3] = local_f0;
  *param_1 = (long)plVar9;
  param_1[1] = (long)local_100;
  return;
}


