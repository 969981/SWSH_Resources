/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039a690; name: FUN_0039a690
 */


void FUN_0039a690(long param_1)

{
  int iVar1;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    local_24 = 0;
    FUN_001ed3f0(param_1 + 0x18,0,&local_24);
    FUN_001ed4d0(param_1 + 0x18,*(undefined4 *)(param_1 + 0x20));
    iVar1 = *(int *)(param_1 + 0x50);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x50);
  }
  if (iVar1 == 0) {
    local_24 = 0;
    FUN_001ed3f0(param_1 + 0x48,0,&local_24);
    FUN_001ed4d0(param_1 + 0x48,*(undefined4 *)(param_1 + 0x50));
    return;
  }
  return;
}


