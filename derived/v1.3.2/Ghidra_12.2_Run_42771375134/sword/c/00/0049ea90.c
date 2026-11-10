/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049ea90; name: FUN_0049ea90
 */


void FUN_0049ea90(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = FUN_0049d820();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = param_1;
  }
  return;
}


