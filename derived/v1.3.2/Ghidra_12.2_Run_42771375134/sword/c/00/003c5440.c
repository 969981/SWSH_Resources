/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c5440; name: FUN_003c5440
 */


void FUN_003c5440(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (((*(long *)(param_1 + 0x78) != 0) &&
      (lVar1 = *(long *)(*(long *)(param_1 + 0x78) + 200), lVar1 != 0)) ||
     ((*(long *)(param_1 + 0x80) != 0 &&
      (lVar1 = *(long *)(*(long *)(param_1 + 0x80) + 200), lVar1 != 0)))) {
    FUN_003c2510(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x800),lVar1,param_1);
  }
  if ((*(byte *)(param_1 + 0x88) >> 3 & 1) == 0) {
    FUN_003c64f0(*(undefined8 *)(param_1 + 0x70));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x70);
  if (puVar2 != (undefined8 *)0x0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x1160);
    (**(code **)*puVar2)(puVar2);
    *(int *)(lVar1 + 0x224) = *(int *)(lVar1 + 0x224) + -1;
    *puVar2 = *(undefined8 *)(lVar1 + 0x230);
    *(undefined8 **)(lVar1 + 0x230) = puVar2;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}


