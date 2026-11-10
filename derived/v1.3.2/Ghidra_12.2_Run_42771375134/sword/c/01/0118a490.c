/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0118a490; name: FUN_0118a490
 */


void FUN_0118a490(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x14) != 0) {
    if (0x7f < *(uint *)(param_1 + 0x14)) {
      iVar2 = FUN_0080e440();
      *(int *)(param_1 + 0x18) = iVar2 + 1;
      return;
    }
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}


