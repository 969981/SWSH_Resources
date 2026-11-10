/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007aad10; name: FUN_007aad10
 */


undefined8 FUN_007aad10(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x89) == '\0') {
    return 0;
  }
  uVar1 = nn::nifm::IsNetworkAvailable();
  return uVar1;
}


