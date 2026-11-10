/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00573360; name: FUN_00573360
 */


void FUN_00573360(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                 uint param_9)

{
  undefined8 *puVar1;
  undefined1 auStack_64 [4];
  
  if ((param_9 >> 0x12 & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x148))(*(long **)(param_1 + 0x20),0xffffffff,1);
  }
  if ((param_9 >> 0x11 & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
              (*(long **)(param_1 + 0x30),auStack_64,param_9 & 0xffff);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x118))(*(long **)(param_1 + 0x30),0);
  }
  puVar1 = (undefined8 *)(param_1 + 0x30);
  FUN_0056d7a0(puVar1);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x150))
            (*(long **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x29a48),param_5,param_7,0,0,1);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x48))(*(long **)(param_1 + 0x20),param_6,param_8);
  FUN_0059a530(*(undefined8 *)(param_1 + 0x30));
  (**(code **)(**(long **)(param_1 + 0x20) + 0x1d0))
            (*(long **)(param_1 + 0x20),4,param_2,0,param_3,param_4);
  if ((param_9 >> 0x11 & 1) == 0) {
    (**(code **)(*(long *)*puVar1 + 0x120))();
    (**(code **)(*(long *)*puVar1 + 0x110))();
  }
  return;
}


