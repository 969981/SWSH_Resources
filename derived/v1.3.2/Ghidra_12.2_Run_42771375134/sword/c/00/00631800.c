/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00631800; name: FUN_00631800
 */


void FUN_00631800(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_006322d0(param_1 + 0x10);
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar2 = *(long *)(param_1 + 0x128) << 1;
    if ((lVar2 == 0) && (lVar2 = 1, *(char *)(param_1 + 0x130) != '\0')) {
      lVar2 = 2;
    }
    (**(code **)(*(long *)(param_1 + 0x10) + 0x28))(param_1 + 0x10,lVar2);
    puVar3 = (undefined8 *)0x0;
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_006318e0;
  }
  puVar4 = (undefined8 *)(param_1 + 0x30);
  puVar3 = (undefined8 *)*puVar4;
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)puVar3[1];
    if (puVar5 == (undefined8 *)0x0) {
      *puVar4 = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      *puVar5 = 0;
      *puVar4 = puVar5;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    *(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  else {
    *(undefined8 **)(*(long *)(param_1 + 0x60) + 8) = puVar3;
    *puVar3 = *(undefined8 *)(param_1 + 0x60);
  }
  *(undefined8 **)(param_1 + 0x60) = puVar3;
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  *(undefined1 *)(puVar3 + 3) = 1;
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x120) != 0) {
    uVar1 = (ulong)puVar3[2] / *(ulong *)(param_1 + 0x120);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x98) + uVar1 * 8);
  *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
LAB_006318e0:
  *(undefined8 **)(param_1 + 0x138) = puVar3;
  *(undefined1 *)((long)puVar3 + 0x54) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x138) + 0x40) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x138) + 0x48) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x138) + 0x44) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(*(long *)(param_1 + 0x138) + 0x4c) = *(undefined4 *)(param_1 + 0x144);
  return;
}


