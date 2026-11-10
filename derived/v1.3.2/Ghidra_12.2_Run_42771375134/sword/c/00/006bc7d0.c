/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bc7d0; name: FUN_006bc7d0
 */


void FUN_006bc7d0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  for (lVar1 = *param_1; lVar1 != lVar2; lVar1 = lVar1 + 0x200) {
    FUN_006a0590(lVar1,param_2);
  }
  return;
}


