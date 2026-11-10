/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f1720; name: FUN_010f1720
 */


undefined8 FUN_010f1720(long param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x68) == '\0') || (*(char *)(param_1 + 0x60) == '\0')) {
    return 1;
  }
  uVar1 = FUN_010f1750(param_1,*(undefined4 *)(param_1 + 100),param_1 + 0x70);
  return uVar1;
}


