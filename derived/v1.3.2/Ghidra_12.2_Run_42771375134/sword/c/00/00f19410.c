/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f19410; name: FUN_00f19410
 */


void FUN_00f19410(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x158) = param_2[1];
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x150) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 3;
  return;
}


