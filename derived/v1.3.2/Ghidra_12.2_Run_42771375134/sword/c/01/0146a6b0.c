/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0146a6b0; name: FUN_0146a6b0
 */


void FUN_0146a6b0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  local_28 = 0x970ffa262cc5f8b1;
  uVar2 = FUN_00ffde30(param_1 + 0x100,&local_28);
  uVar1 = FUN_016c0020();
  *param_2 = uVar1;
  uVar1 = FUN_016c0010(uVar2);
  *param_3 = uVar1;
  return;
}


