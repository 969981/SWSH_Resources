/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008169b0; name: FUN_008169b0
 */


undefined8 FUN_008169b0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  uint *puVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long local_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [48];
  
  local_a0 = param_2;
  if ((*(char *)(param_1 + 0x10) != '\0') &&
     (lVar18 = *(long *)(*(long *)(param_2 + 0x10) + 0x10), lVar6 = FUN_007e2680(), lVar18 == lVar6)
     ) {
    plVar7 = (long *)FUN_008185e0();
                    /* WARNING: Could not recover jumptable at 0x00816b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(*plVar7 + 0x10))(plVar7,param_2);
    return uVar12;
  }
  plVar7 = (long *)FUN_00817910(*(undefined8 *)(param_1 + 0x18),&local_a0);
  if (*plVar7 != 0) {
    return *(undefined8 *)(*plVar7 + 0x40);
  }
  puVar8 = operator_new(0x50);
  lVar6 = local_a0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar17 = puVar8 + 0xc;
  puVar17[0] = 0;
  puVar17[1] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  *plVar7 = (long)puVar8;
  *(long *)(puVar8 + 10) = local_a0;
  lVar18 = *(long *)(param_1 + 8);
  if (lVar18 == 0) {
    lVar18 = *(long *)(*(long *)(local_a0 + 0x10) + 0x10);
  }
  *(long *)(puVar8 + 6) = param_1;
  *(long *)(puVar8 + 8) = lVar18;
  uVar11 = (long)*(int *)(local_a0 + 0x38) + (long)*(int *)(local_a0 + 0x2c);
  uVar16 = uVar11 * 4;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar11;
  if (SUB168(auVar4 * ZEXT816(4),8) != 0) {
    uVar16 = 0xffffffffffffffff;
  }
  pvVar9 = operator_new__(uVar16);
  pvVar10 = *(void **)(puVar8 + 0xc);
  if (pvVar10 != pvVar9) {
    if (pvVar10 != (void *)0x0) {
      operator_delete__(pvVar10);
      lVar6 = local_a0;
    }
    *(void **)puVar17 = pvVar9;
  }
  if (*(int *)(*(long *)(lVar6 + 0x10) + 0x7c) == 3) {
    puVar8[1] = 0xffffffff;
    uVar19 = 0x18;
    iVar13 = *(int *)(*(long *)(lVar6 + 0x10) + 0x7c);
  }
  else {
    puVar8[1] = 0x18;
    iVar13 = *(int *)(lVar6 + 0x2c) + 0x1f;
    iVar14 = *(int *)(lVar6 + 0x2c) + 0x3e;
    if (-1 < iVar13) {
      iVar14 = iVar13;
    }
    iVar13 = (iVar14 >> 5) * 4;
    uVar15 = iVar13 + 0x1f;
    uVar19 = iVar13 + 0x26;
    if (-1 < (int)uVar15) {
      uVar19 = uVar15;
    }
    uVar19 = uVar19 & 0xfffffff8;
    iVar13 = *(int *)(*(long *)(lVar6 + 0x10) + 0x7c);
  }
  if (iVar13 == 3) {
    uVar15 = uVar19 + 0xf;
    if (-1 < (int)(uVar19 + 8)) {
      uVar15 = uVar19 + 8;
    }
    puVar8[5] = uVar19;
    uVar19 = uVar15 & 0xfffffff8;
    iVar13 = *(int *)(lVar6 + 0x38);
  }
  else {
    puVar8[5] = 0xffffffff;
    iVar13 = *(int *)(lVar6 + 0x38);
  }
  if (0 < iVar13) {
    puVar8[2] = uVar19;
    iVar13 = uVar19 + *(int *)(lVar6 + 0x38) * 4;
    uVar15 = iVar13 + 7;
    uVar19 = iVar13 + 0xe;
    if (-1 < (int)uVar15) {
      uVar19 = uVar15;
    }
    uVar19 = uVar19 & 0xfffffff8;
  }
  if (*(int *)(lVar6 + 0x68) < 1) {
    puVar8[4] = 0xffffffff;
    iVar13 = *(int *)(lVar6 + 0x2c);
    puVar5 = PTR_DAT_02716e20;
  }
  else {
    uVar15 = uVar19 + 0x2e;
    if (-1 < (int)(uVar19 + 0x27)) {
      uVar15 = uVar19 + 0x27;
    }
    puVar8[4] = uVar19;
    uVar19 = uVar15 & 0xfffffff8;
    iVar13 = *(int *)(lVar6 + 0x2c);
    puVar5 = PTR_DAT_02716e20;
  }
  PTR_DAT_02716e20 = puVar5;
  if (0 < iVar13) {
    lVar20 = 0;
    lVar18 = 0;
    do {
      lVar1 = *(long *)(lVar6 + 0x30) + lVar20;
      if (*(long *)(lVar1 + 0x58) == 0) {
        uVar15 = *(uint *)(puVar5 + (ulong)*(uint *)(lVar1 + 0x3c) * 4);
        if (*(int *)(lVar1 + 0x40) == 3) {
          if (uVar15 - 1 < 8) {
            iVar13 = 0x10;
          }
          else if (uVar15 == 9) {
            iVar13 = 0x18;
          }
          else {
            if (uVar15 != 10) goto LAB_00816c50;
            uVar11 = FUN_007e4b30();
            iVar13 = 0x58;
            if ((uVar11 & 1) == 0) {
              iVar13 = 0x18;
            }
          }
LAB_00816d08:
          iVar14 = 8;
        }
        else if (uVar15 < 0xb) {
          uVar2 = 1 << (ulong)(uVar15 & 0x1f);
          if ((uVar2 & 0x634) != 0) {
            iVar13 = 8;
            goto LAB_00816d08;
          }
          if ((uVar2 & 0x14a) == 0) {
            if (uVar15 != 7) goto LAB_00816c50;
            iVar13 = 1;
            iVar14 = 1;
          }
          else {
            iVar13 = 4;
            iVar14 = 4;
          }
        }
        else {
LAB_00816c50:
          FUN_00801270(auStack_90,2,
                       "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/dynamic_message.cc"
                       ,0xa1);
          uVar12 = FUN_00800f30(auStack_90,"Can\'t get here.");
          FUN_00800fa0(auStack_98,uVar12);
          FUN_00801290(auStack_90);
          iVar13 = 0;
          iVar14 = 0;
        }
        iVar3 = 0;
        if (iVar14 != 0) {
          iVar3 = (int)(uVar19 + iVar14 + -1) / iVar14;
        }
        uVar19 = iVar3 * iVar14 + iVar13;
        *(int *)((long)pvVar9 + lVar18 * 4) = iVar3 * iVar14;
        lVar6 = local_a0;
      }
      iVar13 = *(int *)(lVar6 + 0x2c);
      lVar18 = lVar18 + 1;
      lVar20 = lVar20 + 0x90;
    } while (lVar18 < iVar13);
  }
  uVar15 = uVar19 + 0xe;
  if (-1 < (int)(uVar19 + 7)) {
    uVar15 = uVar19 + 7;
  }
  uVar15 = uVar15 & 0xfffffff8;
  if (0 < *(int *)(lVar6 + 0x38)) {
    *(uint *)((long)pvVar9 + (long)iVar13 * 4) = uVar15;
    uVar19 = uVar15 + 0x16;
    if (-1 < (int)(uVar15 + 0xf)) {
      uVar19 = uVar15 + 0xf;
    }
    uVar15 = uVar19 & 0xfffffff8;
    if (1 < *(int *)(lVar6 + 0x38)) {
      iVar13 = 1;
      do {
        *(uint *)((long)pvVar9 + (long)(iVar13 + *(int *)(lVar6 + 0x2c)) * 4) = uVar15;
        iVar13 = iVar13 + 1;
        uVar19 = uVar15 + 0x16;
        if (-1 < (int)(uVar15 + 0xf)) {
          uVar19 = uVar15 + 0xf;
        }
        uVar15 = uVar19 & 0xfffffff8;
      } while (iVar13 < *(int *)(lVar6 + 0x38));
    }
  }
  puVar8[3] = uVar15;
  uVar19 = uVar15 + 0x16;
  if (-1 < (int)(uVar15 + 0xf)) {
    uVar19 = uVar15 + 0xf;
  }
  uVar19 = uVar19 & 0xfffffff8;
  *puVar8 = uVar19;
  pvVar9 = operator_new((long)(int)uVar19);
                    /* WARNING: Subroutine does not return */
  memset(pvVar9,0,(long)(int)uVar19);
}


