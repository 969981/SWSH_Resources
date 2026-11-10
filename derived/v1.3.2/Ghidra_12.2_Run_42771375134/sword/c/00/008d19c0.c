/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d19c0; name: FUN_008d19c0
 */


void FUN_008d19c0(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  FUN_00865c70();
  lVar1 = *(long *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = FUN_008d3130(auStack_28,*(undefined8 *)(param_1 + 0x98));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  *(long *)(param_1 + 0xa0) = lVar1;
  FUN_008d1a50(param_1);
  FUN_008d2910(param_1);
  return;
}


