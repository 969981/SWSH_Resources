/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01524f30; name: FUN_01524f30
 */


void FUN_01524f30(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 local_14 [4];
  
  *(undefined1 *)(param_1 + 0x140) = param_2;
  local_14[0] = param_2;
  uVar1 = FUN_00cc2ce0(param_1 + 0x60,local_14);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  return;
}


