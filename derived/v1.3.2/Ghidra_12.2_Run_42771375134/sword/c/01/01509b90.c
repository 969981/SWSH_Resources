/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01509b90; name: FUN_01509b90
 */


void FUN_01509b90(long param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x20) {
    uVar1 = param_2;
  }
  *(undefined1 *)(param_1 + (ulong)uVar1 + 0x570) = param_3;
  return;
}


