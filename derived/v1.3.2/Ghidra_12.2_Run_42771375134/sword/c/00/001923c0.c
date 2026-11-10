/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001923c0; name: FUN_001923c0
 */


long FUN_001923c0(long param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x730) = 1;
  *(long **)(param_1 + 0x728) = param_3;
  lVar1 = param_1 + 0x710;
  (**(code **)(*param_3 + 0x20))(param_3);
  *(undefined8 *)(param_1 + 0x720) = *(undefined8 *)(*(long *)(param_1 + 0x728) + 0x10);
  *(undefined4 *)(param_1 + 0x6f8) = 1;
  *(long *)(param_1 + 0x6f0) = lVar1;
  (**(code **)(*(long *)(param_1 + 0x710) + 0x20))(lVar1);
  *(undefined8 *)(param_1 + 0x6e8) = *(undefined8 *)(*(long *)(param_1 + 0x6f0) + 0x10);
  (**(code **)(**(long **)(param_1 + 0x720) + 0xa0))(*(long **)(param_1 + 0x720),lVar1);
  *(undefined8 *)(param_1 + 0x830) = param_2[1];
  *(undefined8 *)(param_1 + 0x828) = *param_2;
  return param_1 + 0x6d8;
}


