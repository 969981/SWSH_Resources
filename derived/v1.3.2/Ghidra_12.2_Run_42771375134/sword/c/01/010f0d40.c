/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f0d40; name: FUN_010f0d40
 */


void FUN_010f0d40(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = FUN_010f1260(auStack_28,*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(long *)(param_1 + 0x80) = lVar1;
  return;
}


