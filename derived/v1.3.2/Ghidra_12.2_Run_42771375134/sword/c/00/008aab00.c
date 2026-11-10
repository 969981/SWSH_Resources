/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008aab00; name: FUN_008aab00
 */


void FUN_008aab00(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  uVar3 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar3 & 1) == 0) {
    return;
  }
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar9)(puVar9);
  lVar5 = FUN_00897d00();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  lVar5 = puVar9[0xb];
  (**(code **)(**(long **)(lVar5 + 0x10) + 0x50))
            (*(long **)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x1c));
  iVar1 = FUN_008783b0();
  iVar2 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  if (iVar1 == 0x382) {
    uVar7 = 0x338;
    if (*(char *)(lVar5 + 0x29) == '\0') {
      uVar7 = 0x339;
    }
  }
  else {
    if (*(int *)PTR_DAT_027179d8 == iVar2) {
      lVar8 = 0;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x10) == iVar2) {
      lVar8 = 1;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x20) == iVar2) {
      lVar8 = 2;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x30) == iVar2) {
      lVar8 = 3;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x40) == iVar2) {
      lVar8 = 4;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x50) == iVar2) {
      lVar8 = 5;
    }
    else if (*(int *)(PTR_DAT_027179d8 + 0x60) == iVar2) {
      lVar8 = 6;
    }
    else {
      if (*(int *)(PTR_DAT_027179d8 + 0x70) != iVar2) {
        uVar7 = 0;
        goto LAB_008aac48;
      }
      lVar8 = 7;
    }
    uVar7 = *(undefined4 *)(PTR_DAT_027179d8 + lVar8 * 0x10 + 4);
  }
LAB_008aac48:
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
  uVar6 = (**(code **)(**(long **)(lVar5 + 0x10) + 0x50))
                    (*(long **)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x1c));
  FUN_014c7bf0(uVar10,0,uVar6);
  FUN_014c9660(uVar10,1,uVar7);
  iVar1 = FUN_008ab800(param_1);
  if (iVar1 == 0) {
    uVar6 = *(undefined8 *)PTR_DAT_027179f0;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0)) {
      plVar4 = (long *)(**(code **)*puVar9)(puVar9);
      lVar5 = FUN_00897d00();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar5) {
          puVar9 = puVar9 + -10;
          goto LAB_008aad04;
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
LAB_008aad04:
    FUN_008a6b70(puVar9,uVar6,0,0);
    *(undefined4 *)(param_1 + 0x80) = 0;
    uVar7 = 2;
  }
  else {
    *(undefined4 *)(lVar5 + 0x68) = uVar7;
    *(undefined1 *)(lVar5 + 100) = 0;
    FUN_008a6c20(puVar9 + -10,*(undefined8 *)PTR_DAT_027179e8,0);
    uVar7 = 10;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar7;
  return;
}


