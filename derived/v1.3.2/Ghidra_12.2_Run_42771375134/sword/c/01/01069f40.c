/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01069f40; name: FUN_01069f40
 */


void FUN_01069f40(long *param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *local_70;
  long local_68;
  long *local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  byte local_34 [4];
  undefined8 local_28;
  
  local_34[0] = param_3 & 1;
  local_28 = param_2;
  FUN_00701720(param_1,0);
  puVar2 = PTR_DAT_02723ba0;
  puVar1 = PTR_DAT_02723ba0 + 0x10;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *param_1 = (long)puVar1;
  param_1[9] = (long)(puVar2 + 0xa0);
  param_1[10] = (long)(puVar2 + 0xe0);
  puVar1 = PTR_DAT_02710848;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x88);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_01066d60(&local_40,lVar4);
  FUN_01066db0(&local_48,lVar4);
  local_70 = param_1;
  FUN_0106a160(&local_68,param_2,&local_70,&local_28,&local_40,&local_48,local_34);
  lVar3 = local_68;
  local_68 = 0;
  lVar5 = param_1[0x29];
  param_1[0x29] = lVar3;
  if (lVar5 == 0) {
    param_1[0x2b] = local_58;
    param_1[0x2c] = local_50;
    param_1[0x2a] = (long)local_60;
    local_68 = 0;
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
    lVar3 = local_68;
    param_1[0x2a] = (long)local_60;
    param_1[0x2b] = local_58;
    param_1[0x2c] = local_50;
    local_68 = 0;
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x18) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + 0x18) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + 0x18) = 0;
      }
      if (*(long *)(lVar3 + 0x10) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + 0x10) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + 0x10) = 0;
      }
      if (*(long *)(lVar3 + 8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + 8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + 8) = 0;
      }
      (**(code **)(*local_60 + 0x18))(local_60,lVar3,local_58,local_50);
    }
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


