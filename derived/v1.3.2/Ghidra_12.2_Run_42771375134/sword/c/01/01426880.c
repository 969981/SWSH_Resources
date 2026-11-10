/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01426880; name: FUN_01426880
 */


void FUN_01426880(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_30;
  undefined8 local_28;
  
  uVar3 = *param_3;
  FUN_01425e60(&local_30,&DAT_0269f658,&DAT_0269f5c8 + (long)param_2 * 0x18,&DAT_0269f8e0);
  puVar1 = (undefined8 *)PTR_DAT_02710920;
  if (local_30 != 0) {
    puVar1 = (undefined8 *)(local_30 + 0x58);
  }
  local_28 = *puVar1;
  uVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  FUN_016a66b0(uVar3,uVar2);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


