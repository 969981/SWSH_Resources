/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001203a0; name: FUN_001203a0
 */


void FUN_001203a0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10) & 0xfffffff9;
  uVar2 = uVar1 | 2;
  if ((param_2 & 1) == 0) {
    uVar2 = uVar1;
  }
  *(uint *)(param_1 + 0x10) = uVar2;
  return;
}


