/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01426020; name: FUN_01426020
 */


void FUN_01426020(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long local_28;
  
  FUN_00ffa290(param_1,1,1);
  lVar1 = param_1 + 0x100;
  FUN_01425fa0(&local_28,&DAT_0269f5f8,&DAT_0269f730);
  puVar4 = (undefined8 *)PTR_PTR_02710928;
  puVar3 = (undefined8 *)PTR_PTR_02710928;
  if (local_28 != 0) {
    puVar3 = (undefined8 *)(local_28 + 0x60);
  }
  FUN_00ffd280(lVar1,*puVar3);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  puVar2 = &DAT_0269f748;
  if (*(int *)(param_1 + 0x5d0) != 0x4f0) {
    puVar2 = &DAT_0269f760;
  }
  FUN_01425fa0(&local_28,&DAT_0269f5f8,puVar2);
  puVar3 = puVar4;
  if (local_28 != 0) {
    puVar3 = (undefined8 *)(local_28 + 0x60);
  }
  FUN_00ffd280(lVar1,*puVar3);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  puVar2 = &DAT_0269f778;
  if (*(int *)(param_1 + 0x5d0) != 0x4f0) {
    puVar2 = &DAT_0269f790;
  }
  FUN_01425fa0(&local_28,&DAT_0269f5f8,puVar2);
  if (local_28 != 0) {
    puVar4 = (undefined8 *)(local_28 + 0x60);
  }
  FUN_00ffd3a0(lVar1,*puVar4);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


