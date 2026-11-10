/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00632f40; name: FUN_00632f40
 */


undefined8 FUN_00632f40(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (*(char *)(param_2 + 0x54) != '\0') {
    return 0;
  }
  if (*(int *)(param_2 + 0x4c) - *(int *)(param_2 + 0x48) < 2) {
    return 0;
  }
  lVar1 = param_1 + 0x10;
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar3 = *(long *)(param_1 + 0x128) << 1;
    if ((lVar3 == 0) && (lVar3 = 1, *(char *)(param_1 + 0x130) != '\0')) {
      lVar3 = 2;
    }
    (**(code **)(*(long *)(param_1 + 0x10) + 0x28))(lVar1,lVar3);
    if (*(long *)(param_1 + 0x40) != 0) goto LAB_00632fb8;
    puVar6 = (undefined8 *)0x0;
LAB_00633154:
    lVar3 = *(long *)(param_1 + 0x128) << 1;
    if ((lVar3 == 0) && (lVar3 = 1, *(char *)(param_1 + 0x130) != '\0')) {
      lVar3 = 2;
    }
    (**(code **)(*(long *)(param_1 + 0x10) + 0x28))(lVar1,lVar3);
    if (*(long *)(param_1 + 0x40) == 0) {
      if (puVar6 == (undefined8 *)0x0) {
        return 0;
      }
      goto LAB_006331a8;
    }
    puVar5 = puVar6;
    puVar6 = *(undefined8 **)(param_1 + 0x30);
  }
  else {
LAB_00632fb8:
    puVar4 = (undefined8 *)(param_1 + 0x30);
    puVar6 = (undefined8 *)*puVar4;
    if (puVar6 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)puVar6[1];
      if (puVar5 == (undefined8 *)0x0) {
        *puVar4 = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        *puVar5 = 0;
        *puVar4 = puVar5;
      }
      *puVar6 = 0;
      puVar6[1] = 0;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
    }
    if (*(long *)(param_1 + 0x58) == 0) {
      *(undefined8 **)(param_1 + 0x58) = puVar6;
    }
    else {
      *(undefined8 **)(*(long *)(param_1 + 0x60) + 8) = puVar6;
      *puVar6 = *(undefined8 *)(param_1 + 0x60);
    }
    *(undefined8 **)(param_1 + 0x60) = puVar6;
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
    *(undefined1 *)(puVar6 + 3) = 1;
    uVar2 = 0;
    if (*(ulong *)(param_1 + 0x120) != 0) {
      uVar2 = (ulong)puVar6[2] / *(ulong *)(param_1 + 0x120);
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x98) + uVar2 * 8);
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_00633154;
    puVar5 = puVar6;
    puVar6 = (undefined8 *)*puVar4;
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar6[1];
    if (puVar4 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      *puVar4 = 0;
      *(undefined8 *)(param_1 + 0x30) = puVar4;
    }
    *puVar6 = 0;
    puVar6[1] = 0;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    *(undefined8 **)(param_1 + 0x58) = puVar6;
  }
  else {
    *(undefined8 **)(*(long *)(param_1 + 0x60) + 8) = puVar6;
    *puVar6 = *(undefined8 *)(param_1 + 0x60);
  }
  *(undefined8 **)(param_1 + 0x60) = puVar6;
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  *(undefined1 *)(puVar6 + 3) = 1;
  uVar2 = 0;
  if (*(ulong *)(param_1 + 0x120) != 0) {
    uVar2 = (ulong)puVar6[2] / *(ulong *)(param_1 + 0x120);
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x98) + uVar2 * 8);
  *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
  if ((puVar5 != (undefined8 *)0x0) && (puVar6 != (undefined8 *)0x0)) {
    *(undefined1 *)((long)puVar5 + 0x54) = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)((long)puVar5 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(puVar5 + 9) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)((long)puVar5 + 0x4c) = param_3;
    *(undefined1 *)((long)puVar6 + 0x54) = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)((long)puVar6 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(puVar6 + 9) = *(undefined4 *)((long)puVar5 + 0x4c);
    *(undefined4 *)((long)puVar6 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined8 **)(param_2 + 0x20) = puVar5;
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    return 1;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00633930(lVar1,puVar5);
  }
LAB_006331a8:
  FUN_00633930(lVar1,puVar6);
  return 0;
}


