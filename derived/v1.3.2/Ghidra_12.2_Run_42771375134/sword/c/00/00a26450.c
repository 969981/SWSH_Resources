/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a26450; name: FUN_00a26450
 */


void FUN_00a26450(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  uVar1 = *param_2;
  local_28 = param_2[2];
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = local_28;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_00ffd430(uVar2,&local_28);
  local_28 = *(undefined8 *)(param_1 + 0x28);
  FUN_00ffd010(uVar2,&local_28);
  return;
}


