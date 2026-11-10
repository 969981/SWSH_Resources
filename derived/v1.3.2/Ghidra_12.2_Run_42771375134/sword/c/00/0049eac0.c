/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049eac0; name: FUN_0049eac0
 */


void FUN_0049eac0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long lVar1;
  
  lVar1 = FUN_0049d820();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x14) = param_5;
    *(undefined4 *)(lVar1 + 0x18) = param_1;
    *(undefined4 *)(lVar1 + 0x1c) = param_2;
  }
  return;
}


