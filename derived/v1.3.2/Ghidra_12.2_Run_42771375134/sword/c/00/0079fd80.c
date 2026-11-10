/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079fd80; name: FUN_0079fd80
 */


undefined8 FUN_0079fd80(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long local_48;
  long local_40;
  long local_38;
  
  lVar3 = *param_2;
  local_38 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)*param_3 + 0x10))(&local_48);
  lVar1 = local_48;
  local_48 = 0;
  local_40 = lVar1;
  uVar2 = FUN_0079fb00(param_1,&local_38,&local_40,param_4,1);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    local_40 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return uVar2;
}


