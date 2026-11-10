/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007893f0; name: FUN_007893f0
 */


undefined4 FUN_007893f0(long *param_1)

{
  undefined4 uVar1;
  long local_28;
  
  (**(code **)(*param_1 + 0x48))(&local_28);
  if (param_1[0x32] != 0) {
    (**(code **)(*(long *)(param_1[0x32] + 0x48) + 0x18))();
    param_1[0x32] = 0;
  }
  param_1[0x32] = local_28;
  FUN_006e1c90(param_1);
  uVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  FUN_006e1d70(param_1);
  FUN_019ac710(param_1[0x33] + 0x80,*(undefined8 *)(param_1[0x32] + 0x58),&DAT_01cddc9a,0,0,0);
  return uVar1;
}


