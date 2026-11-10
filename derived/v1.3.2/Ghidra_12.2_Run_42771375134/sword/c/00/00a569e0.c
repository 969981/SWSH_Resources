/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a569e0; name: FUN_00a569e0
 */


void FUN_00a569e0(long param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x48);
  FUN_00ffd430(uVar1,&local_18);
  FUN_00ffd010(uVar1,&local_28);
  return;
}


