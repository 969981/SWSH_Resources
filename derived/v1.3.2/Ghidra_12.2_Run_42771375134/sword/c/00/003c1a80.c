/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c1a80; name: FUN_003c1a80
 */


void FUN_003c1a80(long param_1,long param_2)

{
  long *plVar1;
  long local_28;
  char local_14 [4];
  
  local_28 = param_2;
  plVar1 = (long *)FUN_003c3810(param_1 + 0x278,&local_28,local_14);
  if (local_14[0] == '\0') {
    *plVar1 = local_28;
  }
  *(byte *)(param_2 + 0x58) = *(byte *)(param_2 + 0x58) | 4;
  return;
}


