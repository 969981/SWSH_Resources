/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01560800; name: FUN_01560800
 */


void FUN_01560800(long param_1)

{
  undefined *puVar1;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_02710798;
  local_24 = 0;
  FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_24);
  FUN_0155b0b0();
  local_28 = 1;
  FUN_0153bf80(*(undefined8 *)puVar1,&local_28);
  FUN_0155b0b0();
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


