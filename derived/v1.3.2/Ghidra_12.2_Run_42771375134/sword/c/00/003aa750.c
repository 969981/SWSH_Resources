/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003aa750; name: FUN_003aa750
 */


void FUN_003aa750(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x2a0);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x298) + uVar2 * 8) + 0x20))();
      (**(code **)(**(long **)(*(long *)(param_1 + 0x298) + uVar2 * 8) + 0x18))();
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}


