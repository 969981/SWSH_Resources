/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a5e40; name: FUN_014a5e40
 */


void FUN_014a5e40(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long local_38;
  
  uVar1 = *param_2;
  local_38 = *(long *)(param_1 + 0x80);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_01065720(uVar1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
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


