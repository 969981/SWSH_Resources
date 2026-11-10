/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01059020; name: FUN_01059020
 */


void FUN_01059020(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *local_58;
  long *local_50;
  long *local_48;
  long local_40;
  long local_38;
  undefined8 local_28;
  
  local_28 = param_2;
  FUN_006cf0a0(&local_50,PTR_DAT_02723a08);
  FUN_00708690(param_1,&local_50,2);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
    param_2 = local_28;
  }
  param_1[0x50] = 0;
  puVar1 = PTR_DAT_02723a10;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[9] = (long)(puVar1 + 0xb0);
  param_1[10] = (long)(puVar1 + 0xf0);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x4d] = 0;
  local_58 = param_1;
  FUN_010591a0(&local_50,param_2,&local_58,&local_28);
  plVar2 = local_50;
  local_50 = (long *)0x0;
  plVar3 = (long *)param_1[0x4d];
  param_1[0x4d] = (long)plVar2;
  puVar1 = PTR_DAT_02723a18;
  if (plVar3 == (long *)0x0) {
    param_1[0x50] = local_38;
    param_1[0x4f] = local_40;
    param_1[0x4e] = (long)local_48;
  }
  else {
    *plVar3 = (long)(PTR_DAT_02723a18 + 0x10);
    if (plVar3[2] != 0) {
      (**(code **)(*(long *)(plVar3[2] + 0x48) + 0x18))();
      plVar3[2] = 0;
    }
    (**(code **)(*(long *)param_1[0x4e] + 0x18))
              ((long *)param_1[0x4e],plVar3,param_1[0x4f],param_1[0x50]);
    plVar2 = local_50;
    param_1[0x50] = local_38;
    param_1[0x4f] = local_40;
    param_1[0x4e] = (long)local_48;
    local_50 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      *plVar2 = (long)(puVar1 + 0x10);
      if (plVar2[2] != 0) {
        (**(code **)(*(long *)(plVar2[2] + 0x48) + 0x18))();
        plVar2[2] = 0;
      }
      (**(code **)(*local_48 + 0x18))(local_48,plVar2,local_40,local_38);
    }
  }
  return;
}


