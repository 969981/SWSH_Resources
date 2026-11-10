/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01519ad0; name: FUN_01519ad0
 */


void FUN_01519ad0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xb8);
  if (0x5a0 < uVar2) {
    uVar2 = 0x5a0;
    *(undefined4 *)(param_1 + 0xb8) = 0x5a0;
  }
  uVar1 = param_2;
  if (param_2 <= uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0xb8) = uVar1 - param_2;
  return;
}


