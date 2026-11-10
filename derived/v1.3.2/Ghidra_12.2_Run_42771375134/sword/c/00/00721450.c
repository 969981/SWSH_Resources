/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00721450; name: FUN_00721450
 */


/* WARNING: Removing unreachable block (ram,0x00721778) */

void FUN_00721450(long *param_1,int *param_2,uint param_3,undefined4 param_4,uint param_5,
                 undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined1 auStack_68 [8];
  
  puVar3 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar3 = PTR_DAT_02710860;
  uVar16 = (ulong)param_3;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar5 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar11 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar4 = PTR_DAT_02715ae0;
  *param_1 = (long)(PTR_DAT_02715ae0 + 0x10);
  param_1[1] = lVar11;
  param_1[9] = (long)(puVar4 + 0x50);
  FUN_019a4990(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0x15) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x164) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((long)param_1 + 0x16c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x174) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x184) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined8 *)((long)param_1 + 0x19c) = 0xffffffff00000000;
  plVar15 = (long *)param_1[1];
  *(undefined4 *)((long)param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  lVar5 = FUN_00722140(auStack_68,plVar15);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar11 = (long)(int)param_3;
  if ((param_5 & 1) != 0) {
    lVar11 = 1;
  }
  lVar8 = lVar11 * 0x70;
  lVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,lVar8,8);
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar15;
  lVar12 = *(long *)(lVar7 + 0x80) + 1;
  *(long *)(lVar7 + 0x80) = lVar12;
  if (lVar11 != 0) {
    lVar12 = lVar6;
    do {
      FUN_006f6640(lVar12);
      lVar11 = lVar11 + -1;
      lVar12 = lVar12 + 0x70;
    } while (lVar11 != 0);
    lVar12 = *(long *)(lVar7 + 0x80);
  }
  *(long *)(lVar7 + 0x80) = lVar12 + -1;
  lVar11 = *(long *)(lVar5 + 0x58);
  *(long *)(lVar5 + 0x58) = lVar6;
  if (lVar11 != 0) {
    uVar9 = *(ulong *)(lVar5 + 0x68);
    if (0x6f < uVar9) {
      uVar14 = 0;
      lVar6 = lVar11;
      do {
        FUN_006f6670(lVar6);
        uVar14 = uVar14 + 1;
        lVar6 = lVar6 + 0x70;
      } while (uVar14 < uVar9 / 0x70);
      uVar9 = *(ulong *)(lVar5 + 0x68);
    }
    (**(code **)(**(long **)(lVar5 + 0x60) + 0x18))
              (*(long **)(lVar5 + 0x60),lVar11,uVar9,*(undefined8 *)(lVar5 + 0x70));
  }
  *(long **)(lVar5 + 0x60) = plVar15;
  *(long *)(lVar5 + 0x68) = lVar8;
  *(undefined8 *)(lVar5 + 0x70) = 8;
  if ((param_5 & 1) == 0) {
    if (0 < (int)param_3) {
      lVar11 = 0;
      uVar9 = uVar16;
      piVar13 = param_2;
      do {
        FUN_006f66d0(*(long *)(lVar5 + 0x58) + lVar11,4,
                     (long)*(int *)(&DAT_0213f254 + (long)*piVar13 * 8),param_4,param_6);
        uVar9 = uVar9 - 1;
        lVar11 = lVar11 + 0x70;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    goto LAB_0072185c;
  }
  if ((int)param_3 < 1) {
    lVar11 = 0;
  }
  else {
    if (param_3 == 1) {
      lVar11 = 0;
      iVar10 = 0;
LAB_00721824:
      iVar10 = *(int *)(&DAT_0213f254 + (long)param_2[lVar11 * 4] * 8) + iVar10;
    }
    else {
      lVar11 = 0;
      iVar10 = 0;
      piVar13 = param_2 + 4;
      do {
        piVar1 = piVar13 + -4;
        iVar2 = *piVar13;
        piVar13 = piVar13 + 8;
        lVar11 = lVar11 + 2;
        iVar10 = *(int *)(&DAT_0213f254 + (long)iVar2 * 8) +
                 *(int *)(&DAT_0213f254 + (long)*piVar1 * 8) + iVar10;
      } while (uVar16 - (uVar16 & 1) != lVar11);
      if ((param_3 & 1) != 0) goto LAB_00721824;
    }
    lVar11 = (long)iVar10;
  }
  FUN_006f66d0(*(undefined8 *)(lVar5 + 0x58),4,lVar11,param_4,param_6);
LAB_0072185c:
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  param_1[0x13] = lVar5;
  FUN_007218b0(param_1,param_2,uVar16,param_5 & 1);
  return;
}


