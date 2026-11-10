/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01426310; name: FUN_01426310
 */


void FUN_01426310(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long local_30;
  undefined8 local_28;
  
  *(undefined4 *)(param_1 + 0x6d8) = 0;
  if (*(char *)(param_1 + 0x6c0) == '\0') {
    *(undefined8 *)(param_1 + 0x6c8) = 0;
    nn::os::GetSystemTick();
    uVar3 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(param_1 + 0x6b0) = uVar3;
    *(undefined1 *)(param_1 + 0x6c0) = 1;
  }
  FUN_01425e60(&local_30,&DAT_0269f5f8,&DAT_0269f5c8,&DAT_0269f760);
  puVar2 = (undefined8 *)PTR_DAT_02710920;
  puVar1 = (undefined8 *)PTR_DAT_02710920;
  if (local_30 != 0) {
    puVar1 = (undefined8 *)(local_30 + 0x58);
  }
  local_28 = *puVar1;
  FUN_00ffd510(0,param_1 + 0x100,&local_28);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  FUN_01425e60(&local_30,&DAT_0269f5f8,&DAT_0269f5e0,&DAT_0269f760);
  if (local_30 != 0) {
    puVar2 = (undefined8 *)(local_30 + 0x58);
  }
  local_28 = *puVar2;
  FUN_00ffd510(0,param_1 + 0x100,&local_28);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


