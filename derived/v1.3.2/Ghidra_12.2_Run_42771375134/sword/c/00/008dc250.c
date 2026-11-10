/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dc250; name: FUN_008dc250
 */


void FUN_008dc250(long param_1)

{
  uint uVar1;
  short sVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc08);
  while( true ) {
    if (0x5f < uVar1) {
      return;
    }
    sVar2 = FUN_008dbea0(*(undefined8 *)(param_1 + (ulong)uVar1 * 0x20 + 8));
    uVar1 = *(uint *)(param_1 + 0xc08);
    if (sVar2 == 0) break;
    uVar1 = uVar1 + 1;
    *(uint *)(param_1 + 0xc08) = uVar1;
  }
  if (uVar1 < 0x5f) {
    FUN_008dbd70(*(undefined8 *)(param_1 + (ulong)uVar1 * 0x20 + 8),1);
    *(int *)(param_1 + 0xc08) = *(int *)(param_1 + 0xc08) + 1;
    return;
  }
  return;
}


