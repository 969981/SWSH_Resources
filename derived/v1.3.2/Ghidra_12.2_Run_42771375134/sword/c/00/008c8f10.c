/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c8f10; name: FUN_008c8f10
 */


void FUN_008c8f10(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (1 < *(uint *)(param_1 + 0x648)) {
    uVar2 = *(uint *)(param_1 + 0x640);
    uVar1 = *(uint *)(param_1 + 0x648);
    if (0 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x640) = uVar1 - 1;
    *(uint *)(param_1 + 0x644) = uVar2;
    *(undefined4 *)(param_1 + 0x5cc) = 1;
  }
  if (*(long *)(param_1 + 0x4c0) == 0) {
    return;
  }
  FUN_016d2080();
  return;
}


