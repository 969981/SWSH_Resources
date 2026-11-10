/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ab800; name: FUN_008ab800
 */


int FUN_008ab800(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  long local_28;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar6)(puVar6);
  lVar4 = FUN_00897d00();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  lVar7 = puVar6[0xb];
  lVar4 = (**(code **)(**(long **)(lVar7 + 0x10) + 0x50))
                    (*(long **)(lVar7 + 0x10),*(undefined4 *)(lVar7 + 0x1c));
  iVar1 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  (**(code **)(**(long **)(lVar7 + 0x10) + 0x50))
            (*(long **)(lVar7 + 0x10),*(undefined4 *)(lVar7 + 0x1c));
  iVar2 = FUN_008783b0();
  if (iVar2 == 0x382) {
    uVar5 = 0x338;
    if (*(char *)(lVar7 + 0x29) == '\0') {
      uVar5 = 0x339;
    }
  }
  else {
    if (*(int *)PTR_DAT_027179d8 == iVar1) {
      lVar7 = 0;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x10) == iVar1) {
      lVar7 = 1;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x20) == iVar1) {
      lVar7 = 2;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x30) == iVar1) {
      lVar7 = 3;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x40) == iVar1) {
      lVar7 = 4;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x50) == iVar1) {
      lVar7 = 5;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x60) == iVar1) {
      lVar7 = 6;
    }
    else {
      if (*(int *)(PTR_DAT_027179d8 + 0x70) != iVar1) {
        uVar5 = 0;
        goto LAB_008ab954;
      }
      lVar7 = 7;
    }
    uVar5 = *(undefined4 *)(PTR_DAT_027179d8 + lVar7 * 0x10 + 4);
  }
LAB_008ab954:
  iVar1 = FUN_0087bba0(lVar4,uVar5);
  if (iVar1 == 0) {
    local_50 = 0xea89adefc6ba7fa7;
    pcStack_48 = "LEARN_SKILL";
    local_40 = 0xb;
    local_38 = 0;
    local_28 = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))((long *)(lVar4 + 0x48));
    }
    FUN_014af7f0(&local_50,uVar5,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return iVar1;
}


