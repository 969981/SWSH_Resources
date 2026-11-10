/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bfe30; name: FUN_003bfe30
 */


void FUN_003bfe30(long param_1,uint param_2)

{
  long *plVar1;
  long local_20;
  char local_14 [4];
  
  if (*(uint *)(param_1 + 0xb8) < 0xfffffffe) {
    local_20 = param_1;
    if ((param_2 >> 4 & 1) == 0) {
      FUN_003c12d0(*(long *)(param_1 + 0x48) + 0x1ee8,&local_20);
      return;
    }
    plVar1 = (long *)FUN_003c0fd0(*(long *)(param_1 + 0x48) + 0x1ee8,&local_20,local_14);
    if (local_14[0] == '\0') {
      *plVar1 = local_20;
      return;
    }
  }
  return;
}


