/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00768a30; name: FUN_00768a30
 */


void FUN_00768a30(long param_1)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  pvVar2 = *(void **)(param_1 + 0x20);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x28) = pvVar2;
    operator_delete(pvVar2);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


