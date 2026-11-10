/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b7b10; name: FUN_004b7b10
 */


void FUN_004b7b10(long param_1)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  FUN_004b7970(param_1 + 0xd8);
  puVar1 = PTR_DAT_02712a90;
  plVar5 = *(long **)(param_1 + 0x100);
  if (plVar5 != (long *)0x0) {
    do {
      if (plVar5[2] != 0) {
        *(undefined4 *)(plVar5 + 3) = 0;
        FUN_00404870(*(undefined4 *)puVar1);
        plVar5[2] = 0;
        *(undefined4 *)((long)plVar5 + 0x1c) = 0;
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    puVar3 = *(undefined8 **)(param_1 + 0x100);
    while (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x100) = *puVar3;
      if (*(undefined8 **)(param_1 + 0x108) == puVar3) {
        *(undefined8 *)(param_1 + 0x108) = 0;
      }
      *puVar3 = *(undefined8 *)(param_1 + 0x110);
      *(undefined8 **)(param_1 + 0x110) = puVar3;
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + -1;
      puVar3 = *(undefined8 **)(param_1 + 0x100);
    }
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x128);
  if (*(undefined8 **)(param_1 + 0x128) == (undefined8 *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x138);
    if (puVar2 != (undefined8 *)0x0) goto LAB_004b7c00;
    uVar4 = *(ulong *)(param_1 + 0x140);
  }
  else {
    do {
      puVar2 = puVar3;
      *(ulong *)(param_1 + 0x128) = *puVar2;
      if (*(undefined8 **)(param_1 + 0x130) == puVar2) {
        *(undefined8 *)(param_1 + 0x130) = 0;
      }
      *puVar2 = *(undefined8 *)(param_1 + 0x138);
      *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + -1;
      *(ulong **)(param_1 + 0x138) = puVar2;
      puVar3 = *(undefined8 **)(param_1 + 0x128);
    } while (*(undefined8 **)(param_1 + 0x128) != (undefined8 *)0x0);
LAB_004b7c00:
    puVar1 = PTR_DAT_02712a90;
    do {
      uVar4 = *(ulong *)(param_1 + 0x140);
      uVar6 = *puVar2;
      if ((puVar2 < uVar4) || (uVar4 + (ulong)*(uint *)(param_1 + 0x148) * 0x18 <= puVar2)) {
        FUN_00404870(*(undefined4 *)puVar1);
      }
      puVar2 = (ulong *)uVar6;
    } while (uVar6 != 0);
    uVar4 = *(ulong *)(param_1 + 0x140);
  }
  if (uVar4 != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x100);
  if (*(undefined8 **)(param_1 + 0x100) == (undefined8 *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x110);
    if (puVar2 == (undefined8 *)0x0) {
      uVar4 = *(ulong *)(param_1 + 0x118);
      goto joined_r0x004b7d54;
    }
  }
  else {
    do {
      puVar2 = puVar3;
      *(ulong *)(param_1 + 0x100) = *puVar2;
      if (*(undefined8 **)(param_1 + 0x108) == puVar2) {
        *(undefined8 *)(param_1 + 0x108) = 0;
      }
      *puVar2 = *(undefined8 *)(param_1 + 0x110);
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + -1;
      *(ulong **)(param_1 + 0x110) = puVar2;
      puVar3 = *(undefined8 **)(param_1 + 0x100);
    } while (*(undefined8 **)(param_1 + 0x100) != (undefined8 *)0x0);
  }
  puVar1 = PTR_DAT_02712a90;
  do {
    uVar4 = *(ulong *)(param_1 + 0x118);
    uVar6 = *puVar2;
    if ((puVar2 < uVar4) || (uVar4 + (ulong)*(uint *)(param_1 + 0x120) * 0x20 <= puVar2)) {
      FUN_00404870(*(undefined4 *)puVar1);
    }
    puVar2 = (ulong *)uVar6;
  } while (uVar6 != 0);
  uVar4 = *(ulong *)(param_1 + 0x118);
joined_r0x004b7d54:
  if (uVar4 != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(long *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_0047a050(param_1);
  return;
}


