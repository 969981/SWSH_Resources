/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fb260; name: FUN_013fb260
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013fb260(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined2 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar11 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar11)(puVar11);
    lVar7 = FUN_013f9d40();
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)lVar7) {
        puVar11 = puVar11 + -10;
        goto LAB_013fb2c4;
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
LAB_013fb2c4:
  FUN_013faeb0(puVar11);
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar12)(puVar12);
  puVar3 = PTR_DAT_02717528;
  puVar11 = (undefined8 *)PTR_DAT_02717530;
  if (((*PTR_DAT_02717528 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), puVar11 = (undefined8 *)PTR_DAT_02717530,
     iVar5 != 0)) {
    uVar9 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar9;
    __cxa_guard_release(PTR_DAT_02717528);
    puVar11 = (undefined8 *)PTR_DAT_02717530;
  }
  for (; plVar6 != puVar11; plVar6 = (long *)*plVar6) {
  }
  lVar7 = puVar12[0x9f];
  plVar1 = *(long **)(lVar7 + 0x80);
  PTR_DAT_02717530 = (undefined *)puVar11;
  for (plVar6 = *(long **)(lVar7 + 0x78); plVar1 != plVar6; plVar6 = plVar6 + 1) {
    FUN_006cf0c0(&local_80,*plVar6 + 0x5c0);
    lVar13 = local_80;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (lVar13 == 0x7fa9f4e48bfb22cf) {
      if (*(long **)(lVar7 + 0x80) != plVar6) goto LAB_013fb37c;
      goto LAB_013fb3b4;
    }
  }
  plVar6 = plVar1;
  if (*(long **)(lVar7 + 0x80) != plVar1) {
LAB_013fb37c:
    lVar7 = *plVar6;
    if (lVar7 != 0) {
      uVar8 = FUN_008a3e00(lVar7 + 0x50);
      if ((uVar8 & 1) == 0) {
        lVar7 = 0;
      }
      *(long *)(param_1 + 0x90) = lVar7;
      uVar8 = FUN_010386c0();
      goto joined_r0x013fb3c0;
    }
  }
LAB_013fb3b4:
  *(undefined8 *)(param_1 + 0x90) = 0;
  uVar8 = FUN_010386c0();
joined_r0x013fb3c0:
  if ((uVar8 & 1) == 0) {
    FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
  }
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar12)(puVar12);
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
    uVar9 = FUN_00b8c810();
    *puVar11 = uVar9;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar6 != puVar11; plVar6 = (long *)*plVar6) {
  }
  local_80 = -0x77ce150df0d8ce16;
  local_78 = "BagViewFade";
  local_70 = 0xb;
  local_68 = 0;
  uVar9 = FUN_008ad510(puVar12[0x9f],&local_80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  *(undefined8 *)(param_1 + 0x78) = uVar9;
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar12)(puVar12);
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
    uVar9 = FUN_00b8c810();
    *puVar11 = uVar9;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar6 != puVar11; plVar6 = (long *)*plVar6) {
  }
  local_80 = 0x25cf786e4a20d38f;
  local_78 = "BagViewTop";
  local_70 = 10;
  local_68 = 0;
  uVar9 = FUN_008a3b60(puVar12[0x9f],&local_80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = uVar9;
  FUN_010364c0(*(undefined8 *)(param_1 + 0x78),1);
  FUN_010364c0(*(undefined8 *)(param_1 + 0x80),1);
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar12)(puVar12);
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
    uVar9 = FUN_00b8c810();
    *puVar11 = uVar9;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar6 != puVar11; plVar6 = (long *)*plVar6) {
  }
  uVar9 = puVar12[0x9f];
  FUN_006cf0a0(&local_80,PTR_DAT_027176e0);
  uVar9 = FUN_0089c480(uVar9,&local_80);
  *(undefined8 *)(param_1 + 0x88) = uVar9;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))((long *)(local_68 + 0x48));
    local_68 = 0;
    uVar9 = *(undefined8 *)(param_1 + 0x88);
  }
  FUN_01037030(uVar9);
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar11)(puVar11);
  lVar7 = FUN_013f9d40();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  if (*(int *)puVar11[9] != 9) {
    lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    fVar14 = *(float *)(*(long *)(param_1 + 0x80) + 0x764);
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x740);
    uVar4 = FUN_01520330(lVar13,0);
    *(short *)(lVar7 + 0x488) = (short)uVar2;
    *(float *)(lVar7 + 0x48c) = (float)(uint)(int)fVar14;
    *(undefined2 *)(lVar7 + 0x490) = uVar4;
    fVar14 = *(float *)(*(long *)(param_1 + 0x80) + 0x768);
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x744);
    uVar4 = FUN_01520330(lVar13,1);
    *(short *)(lVar7 + 0x494) = (short)uVar2;
    *(float *)(lVar7 + 0x498) = (float)(uint)(int)fVar14;
    *(undefined2 *)(lVar7 + 0x49c) = uVar4;
    fVar14 = *(float *)(*(long *)(param_1 + 0x80) + 0x76c);
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x748);
    uVar4 = FUN_01520330(lVar13,2);
    *(short *)(lVar7 + 0x4a0) = (short)uVar2;
    *(float *)(lVar7 + 0x4a4) = (float)(uint)(int)fVar14;
    *(undefined2 *)(lVar7 + 0x4a8) = uVar4;
    fVar14 = *(float *)(*(long *)(param_1 + 0x80) + 0x770);
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x74c);
    uVar4 = FUN_01520330(lVar13,3);
    *(short *)(lVar7 + 0x4ac) = (short)uVar2;
    *(float *)(lVar7 + 0x4b0) = (float)(uint)(int)fVar14;
    *(undefined2 *)(lVar7 + 0x4b4) = uVar4;
    fVar14 = *(float *)(*(long *)(param_1 + 0x80) + 0x774);
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x750);
    uVar4 = FUN_01520330(lVar13,4);
    *(short *)(lVar7 + 0x4b8) = (short)uVar2;
    *(float *)(lVar7 + 0x4bc) = (float)(uint)(int)fVar14;
    *(undefined2 *)(lVar7 + 0x4c0) = uVar4;
    fVar14 = *(float *)(*(long *)(param_1 + 0x80) + 0x778);
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x754);
    uVar4 = FUN_01520330(lVar13,5);
    *(short *)(lVar7 + 0x4c4) = (short)uVar2;
    *(float *)(lVar7 + 0x4c8) = (float)(uint)(int)fVar14;
    *(undefined2 *)(lVar7 + 0x4cc) = uVar4;
    fVar14 = *(float *)(*(long *)(param_1 + 0x80) + 0x77c);
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x758);
    uVar4 = FUN_01520330(lVar13,6);
    *(short *)(lVar7 + 0x4d0) = (short)uVar2;
    *(float *)(lVar7 + 0x4d4) = (float)(uint)(int)fVar14;
    *(undefined2 *)(lVar7 + 0x4d8) = uVar4;
    fVar14 = *(float *)(*(long *)(param_1 + 0x80) + 0x780);
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x75c);
    uVar4 = FUN_01520330(lVar13,7);
    *(short *)(lVar7 + 0x4dc) = (short)uVar2;
    *(float *)(lVar7 + 0x4e0) = (float)(uint)(int)fVar14;
    *(undefined2 *)(lVar7 + 0x4e4) = uVar4;
    fVar14 = *(float *)(*(long *)(param_1 + 0x80) + 0x784);
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x760);
    uVar4 = FUN_01520330(lVar13,8);
    *(short *)(lVar7 + 0x4e8) = (short)uVar2;
    *(float *)(lVar7 + 0x4ec) = (float)(uint)(int)fVar14;
    *(undefined2 *)(lVar7 + 0x4f0) = uVar4;
    *(char *)(lVar7 + 0x560) =
         (char)*(undefined4 *)
                (*(long *)(param_1 + 0x80) + (long)*(int *)(*(long *)(param_1 + 0x80) + 0x640) * 4 +
                0x64c);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 == 0) {
    lVar7 = _DAT_00000060;
  }
  else {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar7 = *(long *)(lVar7 + 0x60);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_016b1790(*(undefined8 *)(lVar7 + 0x630),0,0);
  pcVar10 = *(code **)(param_1 + 0xa8);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    (*pcVar10)(param_1 + 0xc0);
  }
  *(long *)(param_1 + 0xc0) = param_1;
  *(undefined1 **)(param_1 + 0xa0) = &LAB_013fbe00;
  *(undefined1 **)(param_1 + 0xa8) = &LAB_013fbe10;
  *(undefined1 **)(param_1 + 0xb0) = &LAB_013fbe20;
  *(undefined1 **)(param_1 + 0xb8) = &LAB_013fbe30;
  return;
}


