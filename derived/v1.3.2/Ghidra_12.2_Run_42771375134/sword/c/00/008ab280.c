/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ab280; name: FUN_008ab280
 */


void FUN_008ab280(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar8)(puVar8);
  lVar5 = FUN_00897d00();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  lVar5 = puVar8[0xb];
  uVar6 = (**(code **)(**(long **)(lVar5 + 0x10) + 0x50))
                    (*(long **)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x1c));
  iVar2 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  iVar3 = FUN_008783b0(uVar6);
  if (iVar3 == 0x286) {
    if (*(int *)(lVar5 + 0x20) == -1) {
      iVar3 = FUN_008783b0(0);
    }
    else {
      (**(code **)(**(long **)(lVar5 + 0x10) + 0x50))();
      iVar3 = FUN_008783b0();
    }
    if (iVar2 == 0x275) goto LAB_008ab3d8;
    if (iVar2 != 0x274) goto LAB_008ab3e8;
    bVar1 = iVar3 == 0x283;
LAB_008ab3a4:
    uVar7 = 1;
    if (!bVar1) {
      uVar7 = 2;
    }
  }
  else if (iVar3 == 0x382) {
    if (*(int *)(lVar5 + 0x20) == -1) {
      iVar3 = FUN_008783b0(0);
    }
    else {
      (**(code **)(**(long **)(lVar5 + 0x10) + 0x50))();
      iVar3 = FUN_008783b0();
    }
    if (iVar2 != 0x637) {
      if (iVar2 != 0x636) goto LAB_008ab3e8;
      bVar1 = iVar3 == 0x380;
      goto LAB_008ab3a4;
    }
LAB_008ab3d8:
    uVar7 = 0;
  }
  else {
    if (iVar3 != 800) goto LAB_008ab3e8;
    if (iVar2 - 0x3b1U < 2) goto LAB_008ab3d8;
    if (iVar2 == 0x3b0) {
      uVar7 = 2;
    }
    else {
      if (iVar2 != 0x3af) goto LAB_008ab3e8;
      uVar7 = 1;
    }
  }
  FUN_0087df30(uVar6,uVar7,0);
LAB_008ab3e8:
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  FUN_015351d0(lVar5,uVar6,0);
  return;
}


