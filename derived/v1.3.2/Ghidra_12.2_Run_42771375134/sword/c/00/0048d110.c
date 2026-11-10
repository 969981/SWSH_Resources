/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048d110; name: FUN_0048d110
 */


void FUN_0048d110(long param_1)

{
  uint5 *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar6;
  long *plVar5;
  uint local_24;
  
  puVar1 = (uint5 *)(param_1 + 0x26b);
  if ((*(uint *)puVar1 >> 0x1c & 1) == 0) {
    return;
  }
  uVar2 = (ulong)*(uint *)puVar1 & 0xffffffffefffffff;
  uVar4 = uVar2 | (ulong)*(byte *)(param_1 + 0x26f) << 0x20;
  *(byte *)(param_1 + 0x26f) = *(byte *)(param_1 + 0x26f);
  *(uint *)puVar1 = (uint)uVar2;
  if (*(int *)(param_1 + 0x2b0) != 0) {
    plVar5 = *(long **)(param_1 + 0x2a8);
    do {
      plVar6 = plVar5 + 1;
      *(short *)(*plVar5 + 0x2a) = *(short *)(*plVar5 + 0x2a) + -1;
      plVar5 = plVar6;
    } while (plVar6 != (long *)(*(long *)(param_1 + 0x2a8) + (ulong)*(uint *)(param_1 + 0x2b0) * 8))
    ;
    uVar4 = (ulong)*puVar1;
  }
  uVar3 = (uint)uVar4;
  if ((uVar3 >> 7 & 1) == 0) {
    *(char *)(param_1 + 0x26f) = (char)(uVar4 >> 0x20);
    *(uint *)puVar1 = uVar3 | 0x80;
    uVar3 = FUN_00480360(*(undefined8 *)(param_1 + 0x160),&local_24);
    if (uVar3 == 3) {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x160) + 0x228))
                        (*(long **)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x1f0));
      uVar3 = 1;
      if ((uVar4 & 1) != 0) {
        uVar3 = 2;
      }
    }
    *(uint *)puVar1 = *(uint *)puVar1 & 0xffffff80 | local_24 & 7 | (uVar3 & 0xf) << 3;
    if (uVar3 != 2 || local_24 == 1) goto LAB_0048d210;
  }
  else {
    local_24 = uVar3 & 7;
    if ((uVar3 >> 3 & 0xf) != 2 || local_24 == 1) goto LAB_0048d210;
  }
  FUN_004bf730();
LAB_0048d210:
  FUN_004bf6f0();
  return;
}


