/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00435b10; name: FUN_00435b10
 */


void FUN_00435b10(long param_1)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  FUN_00435cf0();
  FUN_00435ea0(param_1);
  FUN_00435fb0(param_1);
  puVar1 = PTR_DAT_02712a90;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x38);
    if (puVar2 != (undefined8 *)0x0) goto LAB_00435bb0;
    uVar4 = *(ulong *)(param_1 + 0x40);
  }
  else {
    do {
      puVar2 = puVar3;
      *(ulong *)(param_1 + 0x28) = *puVar2;
      if (*(undefined8 **)(param_1 + 0x30) == puVar2) {
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      *puVar2 = *(undefined8 *)(param_1 + 0x38);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      *(ulong **)(param_1 + 0x38) = puVar2;
      puVar3 = *(undefined8 **)(param_1 + 0x28);
    } while (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0);
LAB_00435bb0:
    do {
      uVar4 = *(ulong *)(param_1 + 0x40);
      uVar5 = *puVar2;
      if ((puVar2 < uVar4) || (uVar4 + (ulong)*(uint *)(param_1 + 0x48) * 0x18 <= puVar2)) {
        FUN_00404870(*(undefined4 *)puVar1);
      }
      puVar2 = (ulong *)uVar5;
    } while (uVar5 != 0);
    uVar4 = *(ulong *)(param_1 + 0x40);
  }
  if (uVar4 != 0) {
    FUN_00404870(*(undefined4 *)puVar1);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(ulong *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (puVar3 == (undefined8 *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x60);
    if (puVar2 == (undefined8 *)0x0) {
      uVar4 = *(ulong *)(param_1 + 0x68);
      goto joined_r0x00435ce0;
    }
  }
  else {
    do {
      puVar2 = puVar3;
      *(ulong *)(param_1 + 0x50) = *puVar2;
      if (*(undefined8 **)(param_1 + 0x58) == puVar2) {
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      *puVar2 = *(undefined8 *)(param_1 + 0x60);
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
      *(ulong **)(param_1 + 0x60) = puVar2;
      puVar3 = *(undefined8 **)(param_1 + 0x50);
    } while (*(undefined8 **)(param_1 + 0x50) != (undefined8 *)0x0);
  }
  do {
    uVar4 = *(ulong *)(param_1 + 0x68);
    uVar5 = *puVar2;
    if ((puVar2 < uVar4) || (uVar4 + (ulong)*(uint *)(param_1 + 0x70) * 0x18 <= puVar2)) {
      FUN_00404870(*(undefined4 *)puVar1);
    }
    puVar2 = (ulong *)uVar5;
  } while (uVar5 != 0);
  uVar4 = *(ulong *)(param_1 + 0x68);
joined_r0x00435ce0:
  if (uVar4 != 0) {
    FUN_00404870(*(undefined4 *)puVar1);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(ulong *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}


