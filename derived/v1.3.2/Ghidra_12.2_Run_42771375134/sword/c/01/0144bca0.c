/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144bca0; name: FUN_0144bca0
 */


undefined8 FUN_0144bca0(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x3e0) == '\0') {
    return 1;
  }
  uVar1 = FUN_01451a70();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x3e1) == '\0') {
    *(undefined1 *)(param_1 + 0x3e1) = 1;
    FUN_0144bb70(param_1,1);
    return 1;
  }
  return 1;
}


