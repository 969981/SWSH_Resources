/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0140ade0; name: FUN_0140ade0
 */


undefined8 FUN_0140ade0(long param_1)

{
  undefined8 uVar1;
  
  FUN_0168b630(param_1 + 0x5f0);
  FUN_0140c100(param_1 + 0x9e0);
  if (*(int *)(param_1 + 0x5f8) == 0) {
    uVar1 = FUN_0140bf20(param_1 + 0x9e0);
    return uVar1;
  }
  return 0;
}


