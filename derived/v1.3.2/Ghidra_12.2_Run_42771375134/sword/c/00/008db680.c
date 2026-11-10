/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008db680; name: FUN_008db680
 */


void FUN_008db680(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_008dc390(*(undefined8 *)(param_1 + 0x30));
  if (lVar1 == 0) {
    return;
  }
  FUN_008dbd70(lVar1,param_2);
  FUN_008dbe80(lVar1,param_3);
  FUN_008dbc60(*(undefined8 *)(param_1 + 0x70),lVar1);
  return;
}


