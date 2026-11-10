/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f8c60; name: FUN_008f8c60
 */


void FUN_008f8c60(long param_1,undefined1 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_008eef90(*(undefined4 *)(param_1 + 0x150),param_2);
  FUN_008ef010(*(undefined4 *)(param_1 + 0x150),*(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),
               uVar1);
  return;
}


