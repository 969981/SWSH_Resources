/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c4590; name: FUN_004c4590
 */


void FUN_004c4590(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  puVar3 = (ulong *)(param_1 + 0x18);
  puVar4 = (ulong *)*puVar3;
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (ulong *)0x0) {
    do {
      (**(code **)(*(long *)puVar4[2] + 0x18))();
      puVar4 = (ulong *)*puVar4;
    } while (puVar4 != (ulong *)0x0);
    puVar5 = (undefined8 *)*puVar3;
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar4 = *(ulong **)(param_1 + 0x28);
    if (puVar4 != (undefined8 *)0x0) goto LAB_004c461c;
    uVar2 = *(ulong *)(param_1 + 0x30);
  }
  else {
    do {
      puVar4 = puVar5;
      *(ulong *)(param_1 + 0x18) = *puVar4;
      if (*(undefined8 **)(param_1 + 0x20) == puVar4) {
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      *puVar4 = *(undefined8 *)(param_1 + 0x28);
      *(ulong **)(param_1 + 0x28) = puVar4;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
      puVar5 = *(undefined8 **)(param_1 + 0x18);
    } while (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0);
LAB_004c461c:
    puVar1 = PTR_DAT_02712a90;
    do {
      uVar2 = *(ulong *)(param_1 + 0x30);
      uVar6 = *puVar4;
      if ((puVar4 < uVar2) || (uVar2 + (ulong)*(uint *)(param_1 + 0x38) * 0x20 <= puVar4)) {
        FUN_00404870(*(undefined4 *)puVar1);
      }
      puVar4 = (ulong *)uVar6;
    } while (uVar6 != 0);
    uVar2 = *(ulong *)(param_1 + 0x30);
  }
  if (uVar2 != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (puVar5 == (undefined8 *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x50);
    if (puVar3 != (undefined8 *)0x0) goto LAB_004c46d4;
    uVar2 = *(ulong *)(param_1 + 0x58);
  }
  else {
    do {
      puVar3 = puVar5;
      *(ulong *)(param_1 + 0x40) = *puVar3;
      if (*(undefined8 **)(param_1 + 0x48) == puVar3) {
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      *puVar3 = *(undefined8 *)(param_1 + 0x50);
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
      *(ulong **)(param_1 + 0x50) = puVar3;
      puVar5 = *(undefined8 **)(param_1 + 0x40);
    } while (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0);
LAB_004c46d4:
    puVar1 = PTR_DAT_02712a90;
    do {
      uVar2 = *(ulong *)(param_1 + 0x58);
      uVar6 = *puVar3;
      if ((puVar3 < uVar2) || (uVar2 + (ulong)*(uint *)(param_1 + 0x60) * 0x18 <= puVar3)) {
        FUN_00404870(*(undefined4 *)puVar1);
      }
      puVar3 = (ulong *)uVar6;
    } while (uVar6 != 0);
    uVar2 = *(ulong *)(param_1 + 0x58);
  }
  if (uVar2 != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(ulong *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (puVar5 == (undefined8 *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x78);
    if (puVar3 == (undefined8 *)0x0) {
      uVar2 = *(ulong *)(param_1 + 0x80);
      goto joined_r0x004c4834;
    }
  }
  else {
    do {
      puVar3 = puVar5;
      *(ulong *)(param_1 + 0x68) = *puVar3;
      if (*(undefined8 **)(param_1 + 0x70) == puVar3) {
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
      *puVar3 = *(undefined8 *)(param_1 + 0x78);
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -1;
      *(ulong **)(param_1 + 0x78) = puVar3;
      puVar5 = *(undefined8 **)(param_1 + 0x68);
    } while (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0);
  }
  puVar1 = PTR_DAT_02712a90;
  do {
    uVar2 = *(ulong *)(param_1 + 0x80);
    uVar6 = *puVar3;
    if ((puVar3 < uVar2) || (uVar2 + (ulong)*(uint *)(param_1 + 0x88) * 0x18 <= puVar3)) {
      FUN_00404870(*(undefined4 *)puVar1);
    }
    puVar3 = (ulong *)uVar6;
  } while (uVar6 != 0);
  uVar2 = *(ulong *)(param_1 + 0x80);
joined_r0x004c4834:
  if (uVar2 != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(ulong *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}


