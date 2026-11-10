/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa4ec0; name: FUN_00fa4ec0
 */


void FUN_00fa4ec0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  
  lVar1 = FUN_00fa5fc0(*(undefined8 *)(param_1 + 0x60));
  if (lVar1 == 0) {
    return;
  }
  FUN_00fa5f80(*(undefined8 *)(param_1 + 0x60),lVar1,param_4);
  return;
}


