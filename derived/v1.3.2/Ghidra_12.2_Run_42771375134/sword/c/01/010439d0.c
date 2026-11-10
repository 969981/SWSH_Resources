/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010439d0; name: FUN_010439d0
 */


void FUN_010439d0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_01524c00(param_2);
  *param_1 = uVar1;
  FUN_01524ba0(param_2,param_1 + 2);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x28) = param_4;
  uVar1 = FUN_01524de0(param_2);
  param_1[0x30] = uVar1;
  uVar1 = FUN_01524bf0(param_2);
  param_1[0x31] = uVar1;
  return;
}


