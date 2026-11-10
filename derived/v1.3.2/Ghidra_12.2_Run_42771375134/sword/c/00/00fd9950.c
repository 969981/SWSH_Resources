/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd9950; name: FUN_00fd9950
 */


void FUN_00fd9950(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 0x5d8);
  *(undefined4 *)(lVar1 + 0x30) = param_1;
  *(undefined4 *)(lVar1 + 0x34) = param_2;
  *(undefined4 *)(lVar1 + 0x38) = 0;
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 0x10;
  return;
}


