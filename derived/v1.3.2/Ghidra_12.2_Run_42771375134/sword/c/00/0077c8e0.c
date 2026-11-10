/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077c8e0; name: FUN_0077c8e0
 */


void FUN_0077c8e0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_004f8060();
  if (lVar1 == param_1) {
    FUN_004f8070(0);
    FUN_004f82b0(*(undefined4 *)(param_1 + 0x324));
    return;
  }
  FUN_004f82b0(*(undefined4 *)(param_1 + 0x324));
  return;
}


