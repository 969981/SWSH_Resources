/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002af410; name: FUN_002af410
 */


undefined4 FUN_002af410(ulong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 local_14;
  
  (**(code **)*param_2)(param_2,&local_14,4);
  if ((param_1 & 1) != 0) {
    uVar1 = (undefined1)local_14;
    uVar2 = local_14._1_1_;
    local_14._0_2_ = CONCAT11(local_14._2_1_,local_14._3_1_);
    local_14 = CONCAT13(uVar1,CONCAT12(uVar2,(undefined2)local_14));
  }
  return local_14;
}


