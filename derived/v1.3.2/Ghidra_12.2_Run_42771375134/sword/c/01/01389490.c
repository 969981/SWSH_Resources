/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01389490; name: FUN_01389490
 */


void FUN_01389490(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0137ef10();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0xd8);
  *(long *)(param_1 + 0xd8) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    lVar1 = *(long *)(param_1 + 0xd8);
  }
  FUN_00794370(lVar1,param_2);
  FUN_00794790(*(undefined8 *)(param_1 + 0xd8),*param_4);
  FUN_007947d0(1.0 / *(float *)(param_1 + 0x7c),*(undefined8 *)(param_1 + 0xd8));
  lVar1 = FUN_0137ef10(param_1);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0xe0);
  *(long *)(param_1 + 0xe0) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    lVar1 = *(long *)(param_1 + 0xe0);
  }
  FUN_00794370(lVar1,param_3);
  FUN_00794790(*(undefined8 *)(param_1 + 0xe0),*param_4);
  FUN_007947d0(1.0 / *(float *)(param_1 + 0x7c),*(undefined8 *)(param_1 + 0xe0));
  return;
}


