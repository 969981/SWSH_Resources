/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01046e90; name: FUN_01046e90
 */


void FUN_01046e90(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = *(long *)(param_1 + 0x9b8);
  *(undefined8 *)(param_1 + 0x9b8) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x9b0);
  *(undefined8 *)(param_1 + 0x9b0) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = FUN_009e3950(auStack_40,*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x9b0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x9b0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x9b0) = 0;
  }
  *(long *)(param_1 + 0x9b0) = lVar1;
  FUN_006cf0a0(auStack_40,&DAT_0266b220);
  FUN_014bc440(lVar1,auStack_40,1);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  lVar1 = FUN_009e3950(auStack_40,*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x9b8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x9b8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x9b8) = 0;
  }
  *(long *)(param_1 + 0x9b8) = lVar1;
  FUN_006cf0a0(auStack_40,&DAT_0266b238);
  FUN_014bc440(lVar1,auStack_40,1);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


