/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bce80; name: FUN_005bce80
 */


undefined8
FUN_005bce80(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = param_1 + 0x110;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_005bd050(lVar4);
  FUN_005bd190(lVar4,(long)param_3);
  *(long *)(param_1 + 0x238) = param_1;
  *(undefined8 *)(param_1 + 0x48) = param_4;
  *(undefined8 **)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x28) = 1;
  *(undefined8 *)(param_1 + 0x50) = param_5;
  *(undefined8 *)(param_1 + 0x60) = param_4;
  *(undefined8 *)(param_1 + 0x30) = param_5;
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar2 = *(long *)(param_1 + 0x228) << 1;
    if ((lVar2 == 0) && (lVar2 = 1, *(char *)(param_1 + 0x230) != '\0')) {
      lVar2 = 2;
    }
    (**(code **)(*(long *)(param_1 + 0x110) + 0x28))(lVar4,lVar2);
    puVar3 = (undefined8 *)0x0;
    if (*(long *)(param_1 + 0x140) == 0) goto LAB_005bcfa4;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x130);
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)puVar3[1];
    if (puVar5 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    else {
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x130) = puVar5;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + -1;
  }
  if (*(long *)(param_1 + 0x158) == 0) {
    *(undefined8 **)(param_1 + 0x158) = puVar3;
  }
  else {
    *(undefined8 **)(*(long *)(param_1 + 0x160) + 8) = puVar3;
    *puVar3 = *(undefined8 *)(param_1 + 0x160);
  }
  *(undefined8 **)(param_1 + 0x160) = puVar3;
  *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 1;
  *(undefined1 *)(puVar3 + 3) = 1;
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x220) != 0) {
    uVar1 = (ulong)puVar3[2] / *(ulong *)(param_1 + 0x220);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x198) + uVar1 * 8);
  *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
LAB_005bcfa4:
  puVar3[5] = 0;
  puVar3[6] = puVar3;
  puVar5 = puVar3 + 4;
  *puVar5 = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 1;
  puVar3[0xc] = param_5;
  puVar3[0xd] = 0;
  puVar3[9] = puVar3;
  puVar3[10] = param_4;
  if (*(long *)(param_1 + 0xd0) == 0) {
    *(undefined8 **)(param_1 + 0xd0) = puVar5;
  }
  else {
    *(undefined8 **)(*(long *)(param_1 + 0xd8) + 8) = puVar5;
    *puVar5 = *(undefined8 *)(param_1 + 0xd8);
  }
  *(undefined8 **)(param_1 + 0xd8) = puVar5;
  *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 1;
  puVar3 = puVar3 + 7;
  if (*(long *)(param_1 + 0xf8) == 0) {
    *(undefined8 **)(param_1 + 0xf8) = puVar3;
  }
  else {
    *(undefined8 **)(*(long *)(param_1 + 0x100) + 8) = puVar3;
    *puVar3 = *(undefined8 *)(param_1 + 0x100);
  }
  *(undefined8 **)(param_1 + 0x100) = puVar3;
  *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
  return 1;
}


