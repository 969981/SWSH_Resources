/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00683370; name: FUN_00683370
 */


undefined8 FUN_00683370(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1);
  *param_2 = uVar1;
  uVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1);
  param_2[1] = uVar1;
  uVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1);
  param_2[2] = uVar1;
  uVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1);
  param_2[3] = uVar1;
  return 1;
}


