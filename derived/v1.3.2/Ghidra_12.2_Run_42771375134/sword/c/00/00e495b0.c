/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e495b0; name: FUN_00e495b0
 */


void FUN_00e495b0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = FUN_00e4f200(auStack_28,param_2);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  *param_1 = lVar1;
  return;
}


