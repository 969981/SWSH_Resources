/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a7570; name: FUN_004a7570
 */


void FUN_004a7570(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(long *)(param_2 + 0x70) != 0) {
    for (lVar1 = *(long *)(*(long *)(param_2 + 0x70) + 0x10); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x48)) {
      FUN_0048cb20(param_1,lVar1 + -0x18,param_3,0);
    }
  }
  return;
}


