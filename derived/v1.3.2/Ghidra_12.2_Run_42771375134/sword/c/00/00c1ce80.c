/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c1ce80; name: FUN_00c1ce80
 */


void FUN_00c1ce80(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00be53f0(param_2 + 0x80);
  if (lVar1 == 0) {
    *param_1 = 0;
    return;
  }
  FUN_00bdd770(param_1);
  return;
}


