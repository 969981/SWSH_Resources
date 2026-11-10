/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c2c70; name: FUN_004c2c70
 */


void FUN_004c2c70(long *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x30))();
  if (lVar1 == 0 || param_1[8] == 0) {
    return;
  }
  FUN_004c36c0(lVar1,param_1);
  return;
}


