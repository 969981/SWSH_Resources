/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbd5f0; name: FUN_00dbd5f0
 */


undefined8
FUN_00dbd5f0(long *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
            undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar6;
  undefined8 *puVar5;
  long lVar7;
  undefined8 *puVar8;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_48;
  
  local_58 = *param_3;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  local_60 = *param_4;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
  }
  local_68 = *param_5;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  uVar1 = FUN_00db5ea0(param_1,param_2,&local_58,&local_60,&local_68,param_6,param_7);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (param_1[0x8b] != param_1[0x8c]) {
      uVar2 = (**(code **)(*param_1 + 0x220))(param_1);
      FUN_00dbd850(param_1 + 0x91,uVar2);
    }
    puVar8 = (undefined8 *)param_1[0x75];
    if ((undefined8 *)param_1[0x74] != puVar8) {
      lVar4 = *param_3;
      puVar5 = (undefined8 *)param_1[0x74];
      do {
        puVar6 = puVar5 + 4;
        (**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,lVar4);
        puVar5 = puVar6;
      } while (puVar8 != puVar6);
    }
    local_70 = *param_4;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    }
    lVar7 = param_1[0x8c];
    for (lVar4 = param_1[0x8b]; lVar4 != lVar7; lVar4 = lVar4 + 0x180) {
      if (-1 < *(int *)(lVar4 + 0x170)) {
        for (lVar3 = param_1[0x8b]; lVar3 != param_1[0x8c]; lVar3 = lVar3 + 0x180) {
          if (*(int *)(lVar3 + 0x170) == *(int *)(lVar4 + 0x170)) {
            lVar3 = *(long *)(lVar3 + 0x120);
            if (lVar3 != 0) goto LAB_00dbd76c;
            break;
          }
        }
      }
      lVar3 = FUN_00add530(&local_48,param_2,&local_70);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      local_48 = lVar3;
      FUN_006d9640(param_1,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
LAB_00dbd76c:
      *(long *)(lVar4 + 0x120) = lVar3;
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
    uVar2 = 1;
  }
  return uVar2;
}


