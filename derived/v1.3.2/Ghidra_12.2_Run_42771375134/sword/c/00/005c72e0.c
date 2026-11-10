/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c72e0; name: FUN_005c72e0
 */


undefined8 FUN_005c72e0(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  if (1 < param_2) {
    do {
      uVar1 = FUN_005c8460(param_1,param_2,param_3);
      FUN_005c72e0(param_1,uVar1,param_3);
      param_2 = param_2 + ~uVar1;
      param_3 = param_3 + uVar1 * 8 + 8;
    } while (1 < param_2);
  }
  return 1;
}


