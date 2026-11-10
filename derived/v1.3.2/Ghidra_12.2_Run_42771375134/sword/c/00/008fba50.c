/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fba50; name: FUN_008fba50
 */


void FUN_008fba50(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x150) == 2) {
    if (((puVar2[0x29c] & 0x41800) == 0) && ((puVar2[0x29d] & 0x30) == 0)) {
      return;
    }
  }
  else if (1 < *puVar2) {
    return;
  }
  uVar1 = FUN_009c98b0(param_2);
  *(uint *)(*(long *)(param_1 + 0x88) + 0xcf0) = uVar1 & 0xff;
  uVar1 = FUN_009c9830(param_2);
  *(uint *)(*(long *)(param_1 + 0x88) + 0xcf4) = uVar1 & 0xff;
  return;
}


