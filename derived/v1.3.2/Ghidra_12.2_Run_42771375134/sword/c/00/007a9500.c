/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a9500; name: FUN_007a9500
 */


void FUN_007a9500(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar4 = PTR_DAT_02716740;
  if (DAT_029f4dd8 != (long *)0x0) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_02716740;
  if (lVar5 == 0) {
    lVar5 = FUN_007aa060(auStack_78,param_1);
    puVar7 = *(undefined8 **)puVar4;
    *(long *)puVar4 = lVar5;
    if (puVar7 != (undefined8 *)0x0) {
      plVar1 = (long *)puVar7[1];
      uVar10 = puVar7[4];
      uVar9 = puVar7[2];
      uVar2 = puVar7[3];
      (**(code **)*puVar7)(puVar7);
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar9,uVar2,uVar10);
      lVar5 = *(long *)puVar4;
    }
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = lVar5 + 0x48;
    }
    FUN_006cef90(lVar6);
    lVar5 = *(long *)puVar4;
  }
  FUN_007aaaa0(lVar5,param_1);
  puVar4 = PTR_DAT_02716748;
  lVar5 = *(long *)PTR_DAT_02716748;
  if (lVar5 == 0) {
    lVar5 = FUN_007aa140(auStack_70,param_1);
    puVar7 = *(undefined8 **)puVar4;
    *(long *)puVar4 = lVar5;
    if (puVar7 != (undefined8 *)0x0) {
      plVar1 = (long *)puVar7[1];
      uVar10 = puVar7[4];
      uVar9 = puVar7[2];
      uVar2 = puVar7[3];
      (**(code **)*puVar7)(puVar7);
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar9,uVar2,uVar10);
      lVar5 = *(long *)puVar4;
    }
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = lVar5 + 0x48;
    }
    FUN_006cef90(lVar6);
    lVar5 = *(long *)puVar4;
  }
  *(long **)(lVar5 + 0x80) = param_1;
  puVar4 = PTR_DAT_027104a0;
  lVar5 = *(long *)PTR_DAT_027104a0;
  if (lVar5 == 0) {
    lVar5 = FUN_007aa220(auStack_68,param_1);
    puVar7 = *(undefined8 **)puVar4;
    *(long *)puVar4 = lVar5;
    if (puVar7 != (undefined8 *)0x0) {
      plVar1 = (long *)puVar7[1];
      uVar10 = puVar7[4];
      uVar9 = puVar7[2];
      uVar2 = puVar7[3];
      (**(code **)*puVar7)(puVar7);
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar9,uVar2,uVar10);
      lVar5 = *(long *)puVar4;
    }
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = lVar5 + 0x48;
    }
    FUN_006cef90(lVar6);
    lVar5 = *(long *)puVar4;
  }
  *(long **)(lVar5 + 0x50) = param_1;
  puVar4 = PTR_DAT_027104b0;
  if (*(long *)PTR_DAT_027104b0 == 0) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_1;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x2d0,0x10);
    if (lVar6 == 0) {
      (**(code **)(*param_1 + 0xb8))(param_1);
    }
    FUN_007b4410(lVar6,param_1);
    *(long **)(lVar6 + 8) = param_1;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0x2d0;
    *(undefined8 *)(lVar6 + 0x20) = 0x10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    puVar7 = *(undefined8 **)puVar4;
    *(long *)puVar4 = lVar6;
    if (puVar7 != (undefined8 *)0x0) {
      plVar1 = (long *)puVar7[1];
      uVar9 = puVar7[2];
      uVar2 = puVar7[3];
      uVar10 = puVar7[4];
      (**(code **)*puVar7)();
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar9,uVar2,uVar10);
      lVar6 = *(long *)puVar4;
    }
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 + 0x48;
    }
    FUN_006cef90(lVar5);
    lVar5 = *(long *)PTR_DAT_02716750;
    plVar1 = (long *)PTR_DAT_02716750;
  }
  else {
    lVar5 = *(long *)PTR_DAT_02716750;
    plVar1 = (long *)PTR_DAT_02716750;
  }
  PTR_DAT_02716750 = (undefined *)plVar1;
  if (lVar5 == 0) {
    lVar5 = FUN_007aa5e0(auStack_60,param_1);
    puVar7 = (undefined8 *)*plVar1;
    *plVar1 = lVar5;
    if (puVar7 != (undefined8 *)0x0) {
      plVar3 = (long *)puVar7[1];
      uVar10 = puVar7[4];
      uVar9 = puVar7[2];
      uVar2 = puVar7[3];
      (**(code **)*puVar7)(puVar7);
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar9,uVar2,uVar10);
      lVar5 = *plVar1;
    }
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = lVar5 + 0x48;
    }
    FUN_006cef90(lVar6);
    lVar5 = *(long *)PTR_DAT_02716758;
    plVar1 = (long *)PTR_DAT_02716758;
  }
  else {
    lVar5 = *(long *)PTR_DAT_02716758;
    plVar1 = (long *)PTR_DAT_02716758;
  }
  PTR_DAT_02716758 = (undefined *)plVar1;
  if (lVar5 == 0) {
    lVar5 = FUN_007aa6c0(auStack_58,param_1);
    puVar7 = (undefined8 *)*plVar1;
    *plVar1 = lVar5;
    if (puVar7 != (undefined8 *)0x0) {
      plVar3 = (long *)puVar7[1];
      uVar10 = puVar7[4];
      uVar9 = puVar7[2];
      uVar2 = puVar7[3];
      (**(code **)*puVar7)(puVar7);
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar9,uVar2,uVar10);
      lVar5 = *plVar1;
    }
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = lVar5 + 0x48;
    }
    FUN_006cef90(lVar6);
    lVar5 = *plVar1;
  }
  FUN_007dd940(lVar5,param_1);
  FUN_007dc4b0(param_1);
  DAT_029f4e20 = *param_2;
  DAT_029f4e28 = param_2[1];
  DAT_029f4e30 = param_2[2];
  DAT_029f4e38 = param_2[3];
  DAT_029f4e40 = param_2[4];
  DAT_029f4e48 = param_2[5];
  uVar9 = *param_3;
  DAT_029f4dd8 = param_1;
  *param_3 = 0;
  puVar7 = DAT_029f4e00;
  if (DAT_029f4e00 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*DAT_029f4e00;
    DAT_029f4e00 = (undefined8 *)uVar9;
    (*(code *)*puVar8)(puVar7);
    (**(code **)(*DAT_029f4e08 + 0x18))(DAT_029f4e08,puVar7,DAT_029f4e10,DAT_029f4e18);
    uVar9 = DAT_029f4e00;
  }
  DAT_029f4e00 = (undefined8 *)uVar9;
  DAT_029f4e18 = param_3[3];
  DAT_029f4e10 = param_3[2];
  DAT_029f4e08 = (long *)param_3[1];
  return;
}


