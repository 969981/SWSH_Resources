/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fcf10; name: FUN_003fcf10
 */


bool FUN_003fcf10(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0x50) + 0xd);
  return cVar1 == '\x01' || cVar1 == '\x04';
}


