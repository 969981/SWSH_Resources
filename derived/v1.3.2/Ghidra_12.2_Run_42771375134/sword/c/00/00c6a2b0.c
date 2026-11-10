/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6a2b0; name: FUN_00c6a2b0
 */


void FUN_00c6a2b0(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 0x90) + 0x168))();
  if (lVar1 == 0) {
    return;
  }
  FUN_00c77200(lVar1,param_2 & 1);
  return;
}


