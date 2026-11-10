/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0b2c0; name: FUN_00a0b2c0
 */


void FUN_00a0b2c0(long param_1,undefined8 param_2,undefined1 param_3,undefined2 *param_4,
                 undefined8 param_5)

{
  undefined2 uVar1;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x28) = param_3;
  uVar1 = *param_4;
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_4 + 1);
  *(undefined2 *)(param_1 + 0x29) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = param_5;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}


