/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00633460; name: FUN_00633460
 */


undefined8 FUN_00633460(long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (*(char *)(param_2 + 0x54) != '\0') {
    return 0;
  }
  if (*(int *)(param_2 + 0x44) - *(int *)(param_2 + 0x40) < 2) {
    return 0;
  }
  if (*(int *)(param_2 + 0x4c) - *(int *)(param_2 + 0x48) < 2) {
    return 0;
  }
  lVar1 = param_1 + 0x10;
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar4 = *(long *)(param_1 + 0x128) << 1;
    if ((lVar4 == 0) && (lVar4 = 1, *(char *)(param_1 + 0x130) != '\0')) {
      lVar4 = 2;
    }
    (**(code **)(*(long *)(param_1 + 0x10) + 0x28))(lVar1,lVar4);
    if (*(long *)(param_1 + 0x40) != 0) goto LAB_006334f4;
    puVar10 = (undefined8 *)0x0;
LAB_006338d0:
    lVar4 = *(long *)(param_1 + 0x128) << 1;
    if ((lVar4 == 0) && (lVar4 = 1, *(char *)(param_1 + 0x130) != '\0')) {
      lVar4 = 2;
    }
    (**(code **)(*(long *)(param_1 + 0x10) + 0x28))(lVar1,lVar4);
    if (*(long *)(param_1 + 0x40) != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x30);
      goto joined_r0x00633588;
    }
    puVar5 = (undefined8 *)0x0;
    lVar4 = *(long *)(param_1 + 0x128);
joined_r0x0063361c:
    lVar4 = lVar4 << 1;
    if ((lVar4 == 0) && (lVar4 = 1, *(char *)(param_1 + 0x130) != '\0')) {
      lVar4 = 2;
    }
    (**(code **)(*(long *)(param_1 + 0x10) + 0x28))(lVar1,lVar4);
    if (*(long *)(param_1 + 0x40) != 0) goto LAB_0063364c;
    puVar7 = (undefined8 *)0x0;
    lVar4 = *(long *)(param_1 + 0x128);
joined_r0x006336f8:
    lVar4 = lVar4 << 1;
    if ((lVar4 == 0) && (lVar4 = 1, *(char *)(param_1 + 0x130) != '\0')) {
      lVar4 = 2;
    }
    (**(code **)(*(long *)(param_1 + 0x10) + 0x28))(lVar1,lVar4);
    if (*(long *)(param_1 + 0x40) == 0) {
      puVar8 = (undefined8 *)0x0;
      goto LAB_0063386c;
    }
  }
  else {
LAB_006334f4:
    puVar5 = (undefined8 *)(param_1 + 0x30);
    puVar10 = (undefined8 *)*puVar5;
    if (puVar10 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)puVar10[1];
      if (puVar7 == (undefined8 *)0x0) {
        *puVar5 = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        *puVar7 = 0;
        *puVar5 = puVar7;
      }
      *puVar10 = 0;
      puVar10[1] = 0;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
    }
    if (*(long *)(param_1 + 0x58) == 0) {
      *(undefined8 **)(param_1 + 0x58) = puVar10;
    }
    else {
      *(undefined8 **)(*(long *)(param_1 + 0x60) + 8) = puVar10;
      *puVar10 = *(undefined8 *)(param_1 + 0x60);
    }
    *(undefined8 **)(param_1 + 0x60) = puVar10;
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
    *(undefined1 *)(puVar10 + 3) = 1;
    uVar3 = 0;
    if (*(ulong *)(param_1 + 0x120) != 0) {
      uVar3 = (ulong)puVar10[2] / *(ulong *)(param_1 + 0x120);
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x98) + uVar3 * 8);
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_006338d0;
    puVar5 = (undefined8 *)*puVar5;
joined_r0x00633588:
    if (puVar5 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)puVar5[1];
      if (puVar7 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        *puVar7 = 0;
        *(undefined8 *)(param_1 + 0x30) = puVar7;
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
    }
    if (*(long *)(param_1 + 0x58) == 0) {
      *(undefined8 **)(param_1 + 0x58) = puVar5;
    }
    else {
      *(undefined8 **)(*(long *)(param_1 + 0x60) + 8) = puVar5;
      *puVar5 = *(undefined8 *)(param_1 + 0x60);
    }
    *(undefined8 **)(param_1 + 0x60) = puVar5;
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
    *(undefined1 *)(puVar5 + 3) = 1;
    uVar3 = 0;
    if (*(ulong *)(param_1 + 0x120) != 0) {
      uVar3 = (ulong)puVar5[2] / *(ulong *)(param_1 + 0x120);
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x98) + uVar3 * 8);
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar4 = *(long *)(param_1 + 0x128);
      goto joined_r0x0063361c;
    }
LAB_0063364c:
    puVar6 = (undefined8 *)(param_1 + 0x30);
    puVar7 = (undefined8 *)*puVar6;
    if (puVar7 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)puVar7[1];
      if (puVar8 == (undefined8 *)0x0) {
        *puVar6 = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        *puVar8 = 0;
        *puVar6 = puVar8;
      }
      *puVar7 = 0;
      puVar7[1] = 0;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
    }
    if (*(long *)(param_1 + 0x58) == 0) {
      *(undefined8 **)(param_1 + 0x58) = puVar7;
    }
    else {
      *(undefined8 **)(*(long *)(param_1 + 0x60) + 8) = puVar7;
      *puVar7 = *(undefined8 *)(param_1 + 0x60);
    }
    *(undefined8 **)(param_1 + 0x60) = puVar7;
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
    *(undefined1 *)(puVar7 + 3) = 1;
    uVar3 = 0;
    if (*(ulong *)(param_1 + 0x120) != 0) {
      uVar3 = (ulong)puVar7[2] / *(ulong *)(param_1 + 0x120);
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x98) + uVar3 * 8);
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar4 = *(long *)(param_1 + 0x128);
      goto joined_r0x006336f8;
    }
  }
  puVar6 = (undefined8 *)(param_1 + 0x30);
  puVar8 = (undefined8 *)*puVar6;
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)puVar8[1];
    if (puVar9 == (undefined8 *)0x0) {
      *puVar6 = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      *puVar9 = 0;
      *puVar6 = puVar9;
    }
    *puVar8 = 0;
    puVar8[1] = 0;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    *(undefined8 **)(param_1 + 0x58) = puVar8;
  }
  else {
    *(undefined8 **)(*(long *)(param_1 + 0x60) + 8) = puVar8;
    *puVar8 = *(undefined8 *)(param_1 + 0x60);
  }
  *(undefined8 **)(param_1 + 0x60) = puVar8;
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  *(undefined1 *)(puVar8 + 3) = 1;
  uVar3 = 0;
  if (*(ulong *)(param_1 + 0x120) != 0) {
    uVar3 = (ulong)puVar8[2] / *(ulong *)(param_1 + 0x120);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x98) + uVar3 * 8);
  *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
  if ((((puVar8 != (undefined8 *)0x0) && (puVar7 != (undefined8 *)0x0)) &&
      (puVar10 != (undefined8 *)0x0)) && (puVar5 != (undefined8 *)0x0)) {
    *(undefined1 *)((long)puVar10 + 0x54) = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)((long)puVar10 + 0x44) = param_3;
    *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)((long)puVar10 + 0x4c) = param_4;
    *(undefined1 *)((long)puVar5 + 0x54) = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 8) = *(undefined4 *)((long)puVar10 + 0x44);
    *(undefined4 *)((long)puVar5 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    uVar2 = *(undefined4 *)(param_2 + 0x48);
    *(undefined1 *)((long)puVar5 + 0x54) = 0;
    *(undefined4 *)(puVar5 + 9) = uVar2;
    *(undefined4 *)((long)puVar5 + 0x4c) = param_4;
    *(undefined1 *)((long)puVar7 + 0x54) = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)((long)puVar7 + 0x44) = param_3;
    *(undefined4 *)(puVar7 + 9) = *(undefined4 *)((long)puVar10 + 0x4c);
    *(undefined4 *)((long)puVar7 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined1 *)((long)puVar8 + 0x54) = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    *(undefined4 *)(puVar8 + 8) = *(undefined4 *)((long)puVar7 + 0x44);
    *(undefined4 *)((long)puVar8 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(puVar8 + 9) = *(undefined4 *)((long)puVar5 + 0x4c);
    *(undefined4 *)((long)puVar8 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined8 **)(param_2 + 0x20) = puVar10;
    *(undefined8 **)(param_2 + 0x28) = puVar5;
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(undefined8 **)(param_2 + 0x38) = puVar8;
    return 1;
  }
LAB_0063386c:
  if (puVar10 != (undefined8 *)0x0) {
    FUN_00633930(lVar1,puVar10);
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00633930(lVar1,puVar5);
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00633930(lVar1,puVar7);
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00633930(lVar1,puVar8);
  }
  return 0;
}


