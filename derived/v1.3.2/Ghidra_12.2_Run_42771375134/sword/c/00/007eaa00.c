/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007eaa00; name: FUN_007eaa00
 */


void FUN_007eaa00(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if ((*(byte *)(param_1 + 0xb0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xc0));
  }
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xa8));
  }
  FUN_007f87d0(param_1 + 0x78,*(undefined8 *)(param_1 + 0x80));
  FUN_007f87d0(param_1 + 0x60,*(undefined8 *)(param_1 + 0x68));
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == pvVar1) {
    pvVar2 = pvVar1;
  }
  else {
    do {
      while ((*(byte *)((long)pvVar2 + -0x28) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x18));
        if ((*(byte *)((long)pvVar2 + -0x40) & 1) == 0) goto LAB_007eaa84;
LAB_007eaaa8:
        pvVar3 = (void *)((long)pvVar2 + -0x40);
        operator_delete(*(void **)((long)pvVar2 + -0x30));
        pvVar2 = pvVar3;
        if (pvVar1 == pvVar3) goto LAB_007eaabc;
      }
      if ((*(byte *)((long)pvVar2 + -0x40) & 1) != 0) goto LAB_007eaaa8;
LAB_007eaa84:
      pvVar2 = (void *)((long)pvVar2 + -0x40);
    } while (pvVar1 != pvVar2);
LAB_007eaabc:
    pvVar2 = *(void **)(param_1 + 0x18);
  }
  *(void **)(param_1 + 0x20) = pvVar1;
  operator_delete(pvVar2);
  return;
}


