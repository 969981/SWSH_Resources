/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01208ea0; name: FUN_01208ea0
 */


void FUN_01208ea0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = FUN_012098f0(auStack_38);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_01209440(param_1 + 1,param_2);
  lVar1 = FUN_0120a110(auStack_30,param_2);
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_012095d0(param_1 + 3,param_2);
  FUN_01209760(param_1 + 4,param_2);
  lVar1 = FUN_0120acc0(auStack_28,param_2);
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  return;
}


