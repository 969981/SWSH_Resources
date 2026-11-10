/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008db640; name: FUN_008db640
 */


bool FUN_008db640(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_008dbc40(*(undefined8 *)(param_1 + 0x70));
  if (lVar2 != 0) {
    uVar1 = FUN_008dbeb0();
    *param_3 = uVar1;
  }
  return lVar2 != 0;
}


