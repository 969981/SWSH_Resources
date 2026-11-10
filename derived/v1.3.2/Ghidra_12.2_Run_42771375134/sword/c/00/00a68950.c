/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a68950; name: FUN_00a68950
 */


void FUN_00a68950(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0xba0) != 0) {
    FUN_00aad6e0();
  }
  if (*(long *)(param_1 + 0xba8) != 0) {
    FUN_00aad6e0();
  }
  if (*(long *)(param_1 + 0xbb0) != 0) {
    FUN_00aad6e0();
  }
  if (*(long *)(param_1 + 3000) != 0) {
    FUN_00aad6e0();
  }
  if (*(long *)(param_1 + 0xbc0) != 0) {
    FUN_00aad6e0();
  }
  if (*(int *)(param_1 + 0xbc8) == 0x10) {
    iVar1 = *(int *)(param_1 + 0xbcc);
  }
  else {
    FUN_00aa57a0(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0xbc8) = 0x10;
    iVar1 = *(int *)(param_1 + 0xbcc);
  }
  if (iVar1 == 0x10) {
    return;
  }
  FUN_00aa57a0(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0xbcc) = 0x10;
  return;
}


