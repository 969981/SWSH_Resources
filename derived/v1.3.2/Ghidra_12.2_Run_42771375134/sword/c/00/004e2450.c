/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e2450; name: FUN_004e2450
 */


undefined8 FUN_004e2450(long param_1)

{
  undefined8 *puVar1;
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  if (*(long *)PTR_DAT_02712ae0 == 0) {
    return 0;
  }
  local_30 = 0;
  FUN_004a7f60(*(undefined8 *)(param_1 + 200),&local_30,&local_34,&local_28);
  if (local_28 == 0) {
    return 0;
  }
  FUN_004a7fd0(*(undefined8 *)(param_1 + 200));
  puVar1 = *(undefined8 **)(param_1 + 0xd8);
  *(long *)(param_1 + 0xd8) = local_28;
  FUN_004e2f90(param_1 + 0xf0,local_30);
  *(undefined8 *)(param_1 + 0xe0) = local_30;
  *(undefined4 *)(param_1 + 0xe8) = local_34;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,0);
  }
  return 1;
}


