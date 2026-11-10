/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e6310; name: FUN_009e6310
 */


void FUN_009e6310(long param_1,undefined8 param_2,undefined2 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(undefined2 *)(param_1 + 0xb8) = param_3;
  *(undefined8 *)(param_1 + 0xbc) = 100;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  FUN_009e6cc0();
  return;
}


