/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008aba10; name: FUN_008aba10
 */


ulong FUN_008aba10(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long local_78 [2];
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  long local_48;
  
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  lVar7 = FUN_00897d00();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  lVar12 = puVar9[0xb];
  lVar7 = (**(code **)(**(long **)(lVar12 + 0x10) + 0x50))
                    (*(long **)(lVar12 + 0x10),*(undefined4 *)(lVar12 + 0x1c));
  iVar2 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  (**(code **)(**(long **)(lVar12 + 0x10) + 0x50))
            (*(long **)(lVar12 + 0x10),*(undefined4 *)(lVar12 + 0x1c));
  iVar3 = FUN_008783b0();
  if (iVar3 == 0x382) {
    iVar2 = 0x338;
    if (*(char *)(lVar12 + 0x29) == '\0') {
      iVar2 = 0x339;
    }
  }
  else {
    if (*(int *)PTR_DAT_027179d8 == iVar2) {
      lVar12 = 0;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x10) == iVar2) {
      lVar12 = 1;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x20) == iVar2) {
      lVar12 = 2;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x30) == iVar2) {
      lVar12 = 3;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x40) == iVar2) {
      lVar12 = 4;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x50) == iVar2) {
      lVar12 = 5;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x60) == iVar2) {
      lVar12 = 6;
    }
    else {
      if (*(int *)(PTR_DAT_027179d8 + 0x70) != iVar2) {
        iVar2 = 0;
        goto LAB_008abb70;
      }
      lVar12 = 7;
    }
    iVar2 = *(int *)(PTR_DAT_027179d8 + lVar12 * 0x10 + 4);
  }
LAB_008abb70:
  cVar1 = FUN_0087b890(lVar7);
  uVar13 = 0;
  uVar11 = 4;
  do {
    iVar4 = FUN_0087b880(lVar7,uVar13);
    uVar5 = uVar13;
    if (iVar4 != iVar2) {
      uVar5 = uVar11;
    }
    uVar13 = uVar13 + 1;
  } while ((uVar13 < 4) && (uVar11 = uVar5, iVar4 != iVar2));
  if ((iVar3 == 0x382) && ((uVar5 & 0xff) == 4)) {
    local_48 = lVar7;
    if (lVar7 == 0) {
      uVar5 = FUN_008abd30(param_1,&local_48);
    }
    else {
      plVar6 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      uVar5 = FUN_008abd30(param_1,&local_48);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      local_48 = 0;
    }
  }
  if ((uVar5 & 0xff) == 4) {
    uVar8 = 0;
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_0087b880(lVar7,uVar5);
    uVar10 = uVar10 & 0xffffffff;
    if (cVar1 == '\x01') {
      FUN_0087bfb0(lVar7,uVar5,0x5d);
      local_78[1] = 0xea89adefc6ba7fa7;
      pcStack_68 = "LEARN_SKILL";
      local_60 = 0xb;
      local_58 = 0;
      local_78[0] = lVar7;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))((long *)(lVar7 + 0x48));
      }
      FUN_014af7f0(local_78 + 1,0x5d,local_78);
      if (local_78[0] != 0) {
        (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
        local_78[0] = 0;
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
      uVar8 = 2;
    }
    else {
      FUN_0087bcd0(lVar7,uVar5);
      FUN_0087c370(lVar7);
      uVar8 = 1;
    }
  }
  return uVar8 | uVar10 << 0x20;
}


