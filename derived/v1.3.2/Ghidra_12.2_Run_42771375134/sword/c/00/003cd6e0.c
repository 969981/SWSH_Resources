/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cd6e0; name: FUN_003cd6e0
 */


void FUN_003cd6e0(long param_1,long param_2)

{
  ulong uVar1;
  ulong local_20;
  ulong uStack_18;
  
  uStack_18 = *(ulong *)(param_2 + 0x28);
  uVar1 = *(ulong *)(param_2 + 0x30);
  local_20 = uStack_18;
  if (uVar1 <= uStack_18) {
    local_20 = uVar1;
  }
  if (uStack_18 <= uVar1) {
    uStack_18 = uVar1;
  }
  FUN_003d7220(param_1 + 0x1558,&local_20);
  return;
}


