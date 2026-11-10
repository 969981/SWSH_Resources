/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010696a0; name: FUN_010696a0
 */


void FUN_010696a0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *local_60;
  long local_58;
  long *local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_38 = param_2;
  FUN_00701720(param_1,0);
  puVar1 = PTR_DAT_02723b88 + 0x10;
  puVar2 = PTR_DAT_02723b88 + 0xa0;
  puVar3 = PTR_DAT_02723b88 + 0xe0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  *param_1 = (long)puVar1;
  local_60 = param_1;
  FUN_01069800(&local_58,param_2,&local_60,&local_38,param_3,param_4);
  lVar4 = local_58;
  local_58 = 0;
  lVar5 = param_1[0x29];
  param_1[0x29] = lVar4;
  if (lVar5 == 0) {
    param_1[0x2b] = local_48;
    param_1[0x2c] = local_40;
    param_1[0x2a] = (long)local_50;
  }
  else {
    if (*(long *)(lVar5 + 0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar5 + 0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar5 + 0x10) = 0;
    }
    if (*(long *)(lVar5 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar5 + 8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar5 + 8) = 0;
    }
    (**(code **)(*(long *)param_1[0x2a] + 0x18))
              ((long *)param_1[0x2a],lVar5,param_1[0x2b],param_1[0x2c]);
    lVar4 = local_58;
    param_1[0x2a] = (long)local_50;
    param_1[0x2b] = local_48;
    param_1[0x2c] = local_40;
    local_58 = 0;
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x10) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + 0x10) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + 0x10) = 0;
      }
      if (*(long *)(lVar4 + 8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + 8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + 8) = 0;
      }
      (**(code **)(*local_50 + 0x18))(local_50,lVar4,local_48,local_40);
    }
  }
  return;
}


