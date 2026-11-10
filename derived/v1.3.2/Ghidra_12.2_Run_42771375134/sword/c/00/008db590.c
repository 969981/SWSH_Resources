/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008db590; name: FUN_008db590
 */


void FUN_008db590(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = FUN_008dbc40(*(undefined8 *)(param_1 + 0x70));
  if (lVar1 == 0) {
    return;
  }
  FUN_008dbdd0(lVar1,param_3);
  return;
}


