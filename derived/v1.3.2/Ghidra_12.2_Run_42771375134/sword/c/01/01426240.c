/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01426240; name: FUN_01426240
 */


void FUN_01426240(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long local_18;
  
  puVar1 = &DAT_0269f778;
  if (*(int *)(param_1 + 0x5d0) != 0x4f0) {
    puVar1 = &DAT_0269f790;
  }
  FUN_01425fa0(&local_18,&DAT_0269f5f8,puVar1);
  puVar2 = (undefined8 *)PTR_PTR_02710928;
  if (local_18 != 0) {
    puVar2 = (undefined8 *)(local_18 + 0x60);
  }
  FUN_00ffd280(param_1 + 0x100,*puVar2);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


