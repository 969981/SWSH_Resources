/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007270a0; name: FUN_007270a0
 */


void FUN_007270a0(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x370);
  for (lVar1 = *(long *)(param_1 + 0x368); lVar1 != lVar2; lVar1 = lVar1 + 0x48) {
    FUN_0072ed90(lVar1,param_2);
  }
  return;
}


