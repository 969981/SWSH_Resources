/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077ad50; name: FUN_0077ad50
 */


void FUN_0077ad50(undefined8 param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_2 + 0x340); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    FUN_0077bfa0(lVar1 + 0x10,param_1);
  }
  return;
}


