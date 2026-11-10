/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b19c0; name: FUN_009b19c0
 */


char FUN_009b19c0(long param_1)

{
  char cVar1;
  
  cVar1 = 'n';
  if (*(char *)(param_1 + 0x211) != '\x05') {
    cVar1 = *(char *)(param_1 + 0x211);
  }
  return cVar1;
}


