/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085e160; name: FUN_0085e160
 */


void FUN_0085e160(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      FUN_00815f30(1,*(undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar2 * 8 + 8),param_2);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_00810910(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return;
}


