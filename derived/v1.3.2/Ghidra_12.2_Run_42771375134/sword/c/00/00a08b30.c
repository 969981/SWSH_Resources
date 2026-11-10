/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a08b30; name: FUN_00a08b30
 */


bool FUN_00a08b30(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x380) + 0x8b0))();
  if ((uVar1 & 1) != 0) {
    return true;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = FUN_010367c0(lVar2);
  if ((uVar1 & 1) == 0) {
    return *(int *)(*(long *)(lVar2 + 0x5d0) + 0x60) == 0;
  }
  return false;
}


