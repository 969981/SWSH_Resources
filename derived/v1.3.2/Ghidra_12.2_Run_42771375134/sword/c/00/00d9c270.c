/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9c270; name: FUN_00d9c270
 */


void FUN_00d9c270(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x98) = param_3;
  lVar2 = *param_4;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0xa0);
  *(long *)(param_1 + 0xa0) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  FUN_00d9c2e0(param_1,param_2);
  FUN_00d9c460(param_1);
  return;
}


