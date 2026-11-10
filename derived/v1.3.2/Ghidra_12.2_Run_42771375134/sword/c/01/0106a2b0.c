/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106a2b0; name: FUN_0106a2b0
 */


void FUN_0106a2b0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *local_68;
  long local_60;
  long *local_58;
  long local_50;
  long local_48;
  byte local_3c [4];
  undefined8 local_38;
  
  local_3c[0] = param_5 & 1;
  local_38 = param_2;
  FUN_00701720(param_1,0);
  puVar1 = PTR_DAT_02723ba0 + 0x10;
  puVar2 = PTR_DAT_02723ba0 + 0xa0;
  puVar3 = PTR_DAT_02723ba0 + 0xe0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  *param_1 = (long)puVar1;
  local_68 = param_1;
  FUN_0106a160(&local_60,param_2,&local_68,&local_38,param_3,param_4,local_3c);
  lVar4 = local_60;
  local_60 = 0;
  lVar5 = param_1[0x29];
  param_1[0x29] = lVar4;
  if (lVar5 == 0) {
    param_1[0x2b] = local_50;
    param_1[0x2c] = local_48;
    param_1[0x2a] = (long)local_58;
  }
  else {
    if (*(long *)(lVar5 + 0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar5 + 0x18) + 0x48) + 0x18))();
      *(undefined8 *)(lVar5 + 0x18) = 0;
    }
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
    lVar4 = local_60;
    param_1[0x2a] = (long)local_58;
    param_1[0x2b] = local_50;
    param_1[0x2c] = local_48;
    local_60 = 0;
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x18) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + 0x18) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
      if (*(long *)(lVar4 + 0x10) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + 0x10) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + 0x10) = 0;
      }
      if (*(long *)(lVar4 + 8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + 8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + 8) = 0;
      }
      (**(code **)(*local_58 + 0x18))(local_58,lVar4,local_50,local_48);
    }
  }
  return;
}


