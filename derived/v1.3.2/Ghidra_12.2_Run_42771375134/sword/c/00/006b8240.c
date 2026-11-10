/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b8240; name: FUN_006b8240
 */


void FUN_006b8240(long param_1)

{
  ulong uVar1;
  
  if (((*(long *)(param_1 + 0x58) == 0) || (*(char *)(param_1 + 0x8c) == '\0')) ||
     (uVar1 = FUN_006b8940(), (uVar1 & 1) == 0)) {
    return;
  }
  FUN_006b8a70(*(undefined8 *)(param_1 + 0x58));
  return;
}


