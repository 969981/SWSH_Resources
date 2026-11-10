/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048e540; name: FUN_0048e540
 */


void FUN_0048e540(long param_1)

{
  uint5 *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar5;
  long *plVar4;
  uint local_24;
  
  puVar1 = (uint5 *)(param_1 + 0x26b);
  if ((*(uint *)puVar1 >> 0x1c & 1) != 0) {
    return;
  }
  uVar3 = (ulong)*puVar1 | 0x10000000;
  *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_1 + 0x26f);
  *(uint *)puVar1 = (uint)uVar3;
  if (*(int *)(param_1 + 0x2b0) != 0) {
    plVar4 = *(long **)(param_1 + 0x2a8);
    do {
      plVar5 = plVar4 + 1;
      *(short *)(*plVar4 + 0x2a) = *(short *)(*plVar4 + 0x2a) + 1;
      plVar4 = plVar5;
    } while (plVar5 != (long *)(*(long *)(param_1 + 0x2a8) + (ulong)*(uint *)(param_1 + 0x2b0) * 8))
    ;
    uVar3 = (ulong)*puVar1;
  }
  uVar2 = (uint)uVar3;
  if ((uVar2 >> 7 & 1) == 0) {
    *(char *)(param_1 + 0x26f) = (char)(uVar3 >> 0x20);
    *(uint *)puVar1 = uVar2 | 0x80;
    uVar2 = FUN_00480360(*(undefined8 *)(param_1 + 0x160),&local_24);
    if (uVar2 == 3) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x160) + 0x228))
                        (*(long **)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x1f0));
      uVar2 = 1;
      if ((uVar3 & 1) != 0) {
        uVar2 = 2;
      }
    }
    *(uint *)puVar1 = *(uint *)puVar1 & 0xffffff80 | local_24 & 7 | (uVar2 & 0xf) << 3;
    if (uVar2 != 2 || local_24 == 1) goto LAB_0048e640;
  }
  else {
    local_24 = uVar2 & 7;
    if ((uVar2 >> 3 & 0xf) != 2 || local_24 == 1) goto LAB_0048e640;
  }
  FUN_004bf710();
LAB_0048e640:
  *(int *)PTR_DAT_027132c8 = *(int *)PTR_DAT_027132c8 + 1;
  return;
}


