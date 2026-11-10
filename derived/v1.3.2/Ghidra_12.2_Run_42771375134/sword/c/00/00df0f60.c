/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df0f60; name: FUN_00df0f60
 */


undefined8 FUN_00df0f60(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0xe0) == '\0') ||
     (((*(char *)(param_1 + 0xe3) == '\0' && (*(int *)(param_1 + 0xf4) == 1)) ||
      (uVar1 = FUN_00df0520(param_1), (uVar1 & 1) == 0)))) {
    return 0;
  }
  uVar2 = FUN_00dee640(param_1);
  return uVar2;
}


