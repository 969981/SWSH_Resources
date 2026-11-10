/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00192510; name: FUN_00192510
 */


long FUN_00192510(long param_1,long *param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x7d8) = 1;
  *(long **)(param_1 + 2000) = param_2;
  lVar1 = param_1 + 0x7b8;
  (**(code **)(*param_2 + 0x20))(param_2);
  *(undefined8 *)(param_1 + 0x7c8) = *(undefined8 *)(*(long *)(param_1 + 2000) + 0x10);
  *(undefined4 *)(param_1 + 0x7a0) = 1;
  *(long *)(param_1 + 0x798) = lVar1;
  (**(code **)(*(long *)(param_1 + 0x7b8) + 0x20))(lVar1);
  *(undefined8 *)(param_1 + 0x790) = *(undefined8 *)(*(long *)(param_1 + 0x798) + 0x10);
  (**(code **)(**(long **)(param_1 + 0x7c8) + 0xa0))(*(long **)(param_1 + 0x7c8),lVar1);
  return param_1 + 0x780;
}


