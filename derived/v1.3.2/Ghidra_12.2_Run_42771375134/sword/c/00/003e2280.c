/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e2280; name: FUN_003e2280
 */


void FUN_003e2280(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x11b0);
  if (*(uint *)(param_1 + 0x11b0) != 0) {
    lVar6 = 8;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x11a8) + lVar6);
      if ((*(byte *)(lVar2 + 0x42) >> 2 & 1) == 0) {
        FUN_00114380(*(undefined8 *)(param_1 + 0x748),*(undefined4 *)(lVar2 + 0x60));
      }
      lVar6 = lVar6 + 0x10;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_00114000(*(long *)(param_1 + 0x748));
  lVar6 = *(long *)(param_1 + 0x748);
  uVar1 = *(int *)(lVar6 + 0x130) - *(uint *)(lVar6 + 0x1e0);
  if (uVar1 != 0) {
    puVar4 = (uint *)(*(long *)(lVar6 + 0x128) + (ulong)*(uint *)(lVar6 + 0x1e0) * 4);
    uVar5 = (ulong)uVar1;
    do {
      lVar2 = *(long *)(lVar6 + 200) + (ulong)(*puVar4 >> 6) * 0x20;
      lVar3 = *(long *)(lVar2 + 0x18);
      if ((lVar3 != 0) && ((*(byte *)(lVar2 + 4) >> 1 & 1) != 0)) {
        FUN_003bf100(lVar3 + -0x60,1,2);
      }
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
  }
  uVar1 = *(int *)(lVar6 + 0x140) - *(uint *)(lVar6 + 0x1e4);
  if (uVar1 != 0) {
    puVar4 = (uint *)(*(long *)(lVar6 + 0x138) + (ulong)*(uint *)(lVar6 + 0x1e4) * 4);
    uVar5 = (ulong)uVar1;
    do {
      lVar2 = *(long *)(lVar6 + 200) + (ulong)(*puVar4 >> 6) * 0x20;
      lVar3 = *(long *)(*(long *)(lVar2 + 0x18) + 8);
      if ((lVar3 != 0) && ((*(byte *)(lVar2 + 4) >> 1 & 1) != 0)) {
        FUN_003bc5b0(lVar3,1,2);
      }
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
  }
  return;
}


