/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cd660; name: FUN_003cd660
 */


void FUN_003cd660(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong local_30;
  ulong local_28;
  char local_14 [4];
  
  local_28 = *(ulong *)(param_2 + 0x28);
  uVar1 = *(ulong *)(param_2 + 0x30);
  local_30 = local_28;
  if (uVar1 <= local_28) {
    local_30 = uVar1;
  }
  if (local_28 <= uVar1) {
    local_28 = uVar1;
  }
  puVar2 = (ulong *)FUN_003d7090(param_1 + 0x1558,&local_30,local_14);
  if (local_14[0] == '\0') {
    puVar2[1] = local_28;
    puVar2[2] = param_2;
    *puVar2 = local_30;
    return;
  }
  return;
}


