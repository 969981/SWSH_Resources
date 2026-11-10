/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fcb50; name: FUN_005fcb50
 */


undefined8 FUN_005fcb50(long param_1)

{
  undefined4 uVar1;
  
  FUN_005c47b0(param_1 + 0x38);
  uVar1 = FUN_005c35c0(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  return 1;
}


