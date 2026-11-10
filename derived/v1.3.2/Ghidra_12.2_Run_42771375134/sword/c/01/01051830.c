/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01051830; name: FUN_01051830
 */


void FUN_01051830(long param_1,undefined8 param_2,long param_3,long param_4)

{
  *(undefined8 *)(param_3 + 0x98) = 0;
  *(undefined8 *)(param_3 + 0xa0) = 0x3f80000000000000;
  if (param_3 != 0) {
    (**(code **)(*(long *)(param_3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  *(long *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_4 + 0x580) = 0x3f800000;
  if (param_4 != 0) {
    (**(code **)(*(long *)(param_4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x130) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  *(long *)(param_1 + 0x130) = param_4;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  FUN_00701e00(param_2,param_1);
  return;
}


