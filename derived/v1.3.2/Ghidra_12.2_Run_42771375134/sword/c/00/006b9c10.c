/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b9c10; name: FUN_006b9c10
 */


undefined8 FUN_006b9c10(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    return 0x3c;
  }
  FUN_006ac330(param_1[8]);
  FUN_006a0e30();
  uVar1 = FUN_0069a7f0();
  return uVar1;
}


