/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01426170; name: FUN_01426170
 */


void FUN_01426170(long param_1)

{
  undefined8 *puVar1;
  long local_40 [3];
  long local_28;
  
  FUN_01425fa0(local_40,&DAT_0269f5f8,&DAT_0269f7a8);
  puVar1 = (undefined8 *)PTR_PTR_02710928;
  if (local_40[0] != 0) {
    puVar1 = (undefined8 *)(local_40[0] + 0x60);
  }
  FUN_00ffd280(param_1 + 0x100,*puVar1);
  if (local_40[0] != 0) {
    (**(code **)(*(long *)(local_40[0] + 0x48) + 0x18))();
    local_40[0] = 0;
  }
  FUN_00ffa290(param_1,0,1);
  FUN_006cf0a0(local_40,(ulong)*(uint *)(param_1 + 0x5e0) * 0x30 + 0x269f7d8);
  FUN_012d6d40(local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


