/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bf7b0; name: FUN_014bf7b0
 */


void FUN_014bf7b0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_18 [8];
  
  lVar1 = FUN_014c05c0(auStack_18,param_2);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  return;
}


