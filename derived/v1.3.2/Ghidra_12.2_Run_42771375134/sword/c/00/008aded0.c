/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008aded0; name: FUN_008aded0
 */


void FUN_008aded0(long param_1)

{
  long *plVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long local_70;
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  
  FUN_0010d170(&local_70,"BagStateFormChangeSimple");
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(long *)(param_1 + 0x70) = local_70;
  puVar12 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar12 != (undefined8 *)0x0) {
      plVar6 = (long *)(**(code **)*puVar12)(puVar12);
      lVar7 = FUN_00897d00();
      for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)lVar7) {
          puVar12 = puVar12 + -10;
          goto LAB_008adf60;
        }
      }
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_008adf60:
  *(undefined8 **)(param_1 + 0x90) = puVar12;
  lVar7 = puVar12[0x15];
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar12)(puVar12);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0))
  {
    uVar9 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar9;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar6 != (long *)PTR_DAT_02717530; plVar6 = (long *)*plVar6) {
  }
  lVar13 = puVar12[0x9f];
  plVar1 = *(long **)(lVar13 + 0x80);
  for (plVar6 = *(long **)(lVar13 + 0x78); plVar1 != plVar6; plVar6 = plVar6 + 1) {
    FUN_006cf0c0(&local_70,*plVar6 + 0x5c0);
    lVar14 = local_70;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar14 == 0x7fa9f4e48bfb22cf) {
      if (*(long **)(lVar13 + 0x80) == plVar6) goto LAB_008ae044;
      goto LAB_008ae018;
    }
  }
  plVar6 = plVar1;
  if (*(long **)(lVar13 + 0x80) == plVar1) {
LAB_008ae044:
    lVar14 = 0;
  }
  else {
LAB_008ae018:
    lVar14 = *plVar6;
    if (lVar14 == 0) goto LAB_008ae044;
    uVar8 = FUN_008a3e00(lVar14 + 0x50);
    if ((uVar8 & 1) == 0) {
      lVar14 = 0;
    }
  }
  *(long *)(param_1 + 0x88) = lVar14;
  local_70 = 0x25cf786e4a20d38f;
  pcStack_68 = "BagViewTop";
  local_60 = 10;
  local_58 = 0;
  uVar9 = FUN_008a3b60(lVar13,&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = uVar9;
  FUN_00ffa3f0(uVar9);
  *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x5cc) = 0;
  sVar2 = *(short *)(lVar7 + 0x24);
  (**(code **)(**(long **)(lVar7 + 0x10) + 0x50))
            (*(long **)(lVar7 + 0x10),*(undefined4 *)(lVar7 + 0x1c));
  iVar5 = FUN_008783b0();
  if (sVar2 == 0x27e) {
    if (iVar5 == 0x281) {
      lVar13 = 0x2616f70;
    }
    else if (iVar5 == 0x285) {
      lVar13 = 0x2616fa0;
    }
    else {
      if (iVar5 != 0x282) goto LAB_008ae0f4;
      lVar13 = 0x2616f88;
    }
    puVar11 = *(undefined4 **)(lVar13 + 0x10);
    *(undefined4 **)(param_1 + 0x98) = puVar11;
    FUN_008a6a20(&local_70,*(undefined8 *)(param_1 + 0x90),*puVar11);
    if (*(long *)(param_1 + 0xa8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    lVar14 = local_70;
    *(long *)(param_1 + 0xa8) = local_70;
    if (local_70 != 0) {
      uVar9 = FUN_008c8c30(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(lVar7 + 0x1c));
      FUN_016a66b0(lVar14,uVar9);
    }
    uVar9 = (**(code **)(**(long **)(lVar7 + 0x10) + 0x50))
                      (*(long **)(lVar7 + 0x10),*(undefined4 *)(lVar7 + 0x1c));
    sVar3 = *(short *)(lVar13 + 6);
    sVar2 = *(short *)(lVar13 + 8);
    FUN_008a6e20(*(undefined8 *)(param_1 + 0x90),*(undefined2 *)(lVar13 + 4),uVar9,0);
    sVar4 = FUN_008783c0(uVar9);
    if (sVar4 != sVar3) {
      sVar2 = sVar3;
    }
    FUN_0087df30(uVar9,sVar2,0);
    lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
    if (lVar7 != 0) {
      plVar6 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    FUN_015351d0(lVar7,uVar9,0);
    FUN_006cf0a0(&local_70,*(long *)(param_1 + 0x98) + 8);
    FUN_016d3620(&local_70);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  else {
LAB_008ae0f4:
    FUN_008a6b70(*(undefined8 *)(param_1 + 0x90),0xcf39f8ca2348b32d,1,0);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    FUN_008c4b10(*(undefined8 *)(param_1 + 0x80),0);
    FUN_008c82b0(*(undefined8 *)(param_1 + 0x80),0);
    uVar10 = 2;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar10;
  return;
}


