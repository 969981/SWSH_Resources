/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a9d50; name: FUN_003a9d50
 */


void FUN_003a9d50(undefined1 param_1 [16],long param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_003a93c0(param_1,*(float *)(param_2 + 0x3c) * *(float *)(param_2 + 0x38));
  *(undefined4 *)(param_2 + 0x50) = uVar1;
  return;
}


