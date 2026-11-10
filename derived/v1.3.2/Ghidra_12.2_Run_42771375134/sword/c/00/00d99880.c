/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d99880; name: FUN_00d99880
 */


void FUN_00d99880(long param_1)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = *(long *)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = FUN_009e3950(&local_40,*(undefined8 *)(param_1 + 0x60));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x4c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x4c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x4c8) = 0;
  }
  *(long *)(param_1 + 0x4c8) = lVar1;
  local_40 = 0x26dc89d457193c10;
  pcStack_38 = "common/townmap_target.dat";
  local_30 = 0x19;
  local_28 = 0;
  FUN_014bc440(lVar1,&local_40,0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


