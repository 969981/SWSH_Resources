/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df0870; name: FUN_00df0870
 */


void FUN_00df0870(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0xa8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0xa0);
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  return;
}


