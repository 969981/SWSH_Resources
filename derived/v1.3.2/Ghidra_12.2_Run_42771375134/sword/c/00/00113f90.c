/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00113f90; name: FUN_00113f90
 */


void FUN_00113f90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x310;
  *(undefined4 *)(param_1 + 0x450) = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x530) = 0;
  *(undefined4 *)(param_1 + 0x540) = 0;
  FUN_00116a80(lVar1);
  FUN_00117740(lVar1);
  FUN_001176c0(lVar1);
  FUN_00118b60(lVar1,param_1 + 0x30,0,0,*(undefined4 *)(param_1 + 0x610));
  return;
}


