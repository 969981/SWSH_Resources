/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a5d90; name: FUN_014a5d90
 */


void FUN_014a5d90(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 local_28;
  
  local_28 = 8;
  FUN_00727220(*(undefined8 *)(param_1 + 0x80),*param_2,&local_28);
  FUN_007270a0(*(undefined8 *)(param_1 + 0x80),param_3);
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_00794790(*(long *)(param_1 + 0xa8),*param_2);
    FUN_007947c0(*(undefined8 *)(param_1 + 0xa8),param_3);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_00794790(*(long *)(param_1 + 0xb0),*param_2);
    FUN_007947c0(*(undefined8 *)(param_1 + 0xb0),param_3);
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_00794790(*(long *)(param_1 + 0xb8),*param_2);
    FUN_007947c0(*(undefined8 *)(param_1 + 0xb8),param_3);
  }
  return;
}


