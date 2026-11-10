/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081dcd0; name: FUN_0081dcd0
 */


undefined4 FUN_0081dcd0(long *param_1)

{
  undefined4 uVar1;
  
  FUN_00801420(param_1 + 5);
  uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_008014c0(param_1 + 5);
  return uVar1;
}


