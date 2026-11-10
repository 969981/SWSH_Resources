/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b8420; name: FUN_011b8420
 */


void FUN_011b8420(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  
  local_40 = 0x23d4;
  lVar1 = FUN_011b8f90(auStack_38,param_2,&local_40);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  *param_1 = lVar1;
  FUN_0154b6d0(0,*(undefined8 *)(lVar1 + 0x60));
  local_40 = 0x1241c;
  lVar1 = FUN_011b8f90(auStack_38,param_2,&local_40);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  param_1[1] = lVar1;
  FUN_0154b6d0(1,*(undefined8 *)(lVar1 + 0x60));
  local_40 = 0x426c;
  lVar1 = FUN_011b8f90(auStack_38,param_2,&local_40);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  param_1[2] = lVar1;
  FUN_0154b6d0(2,*(undefined8 *)(lVar1 + 0x60));
  local_40 = 0x116c4;
  lVar1 = FUN_011b8f90(auStack_38,param_2,&local_40);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  param_1[3] = lVar1;
  FUN_0154b6d0(3,*(undefined8 *)(lVar1 + 0x60));
  local_40 = 0x23d4;
  lVar1 = FUN_011b8f90(auStack_38,param_2,&local_40);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
    param_1[4] = 0;
  }
  param_1[4] = lVar1;
  FUN_0154b6d0(4,*(undefined8 *)(lVar1 + 0x60));
  local_40 = 0x23d4;
  lVar1 = FUN_011b8f90(auStack_38,param_2,&local_40);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (param_1[5] != 0) {
    (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
    param_1[5] = 0;
  }
  param_1[5] = lVar1;
  FUN_0154b6d0(5,*(undefined8 *)(lVar1 + 0x60));
  return;
}


