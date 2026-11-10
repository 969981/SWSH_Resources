/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00578450; name: FUN_00578450
 */


void FUN_00578450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_c0 [64];
  
  uVar1 = *(undefined4 *)(param_9 + 0x22768);
  uVar2 = (**(code **)(**(long **)(param_9 + 0x30) + 0xf0))();
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))(*(long **)(param_9 + 0x30),uVar1);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xa8))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x108),auStack_c0);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x108),param_10);
  FUN_005734c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_11);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))(*(long **)(param_9 + 0x30),uVar2);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x108),auStack_c0);
  return;
}


