/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e9310; name: FUN_001e9310
 */


void FUN_001e9310(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar1 = (**(code **)*param_2)(param_2,0x80000000,*(long *)(param_1 + 0xb0));
    *(long *)(param_1 + 0xb0) = lVar1;
  }
  FUN_003ff470(lVar1 + 0x18);
  FUN_003afc00(param_1 + 0x40,*(long *)(param_1 + 0xb0) + 0x20);
  return;
}


