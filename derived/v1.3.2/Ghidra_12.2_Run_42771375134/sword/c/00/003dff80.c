/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dff80; name: FUN_003dff80
 */


void FUN_003dff80(long param_1,long param_2)

{
  long *plVar1;
  long local_20;
  char local_14 [4];
  
  local_20 = param_2;
  plVar1 = (long *)FUN_003c3540(param_1 + 0x968,&local_20,local_14);
  if (local_14[0] == '\0') {
    *plVar1 = local_20;
  }
  *(byte *)(local_20 + 0x88) = *(byte *)(local_20 + 0x88) | 4;
  return;
}


