/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00884e90; name: FUN_00884e90
 */


undefined8 FUN_00884e90(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x58))(param_1,0);
  thunk_FUN_008787a0(uVar1,param_2);
  uVar1 = (**(code **)(*param_1 + 0x58))(param_1,1);
  thunk_FUN_008787a0(uVar1,param_2 + 0x158);
  uVar1 = (**(code **)(*param_1 + 0x58))(param_1,2);
  thunk_FUN_008787a0(uVar1,param_2 + 0x2b0);
  uVar1 = (**(code **)(*param_1 + 0x58))(param_1,3);
  thunk_FUN_008787a0(uVar1,param_2 + 0x408);
  uVar1 = (**(code **)(*param_1 + 0x58))(param_1,4);
  thunk_FUN_008787a0(uVar1,param_2 + 0x560);
  uVar1 = (**(code **)(*param_1 + 0x58))(param_1,5);
  thunk_FUN_008787a0(uVar1,param_2 + 0x6b8);
  return 0x810;
}


