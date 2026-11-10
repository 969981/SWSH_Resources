/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01013440; name: FUN_01013440
 */


void FUN_01013440(long param_1,char *param_2,undefined8 param_3,long param_4)

{
  undefined *__s2;
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  long *plVar5;
  long local_80 [2];
  undefined1 *local_70;
  long local_68;
  long local_60;
  char *local_50;
  char *local_48;
  
  __s2 = PTR_s_data___02710918;
  local_50 = param_2;
  if (param_4 == 0) {
    sVar3 = strlen(PTR_s_data___02710918);
    iVar2 = strncmp(param_2,__s2,sVar3);
    if (iVar2 == 0) {
      local_48 = param_2;
      FUN_00d99c10(local_80,&local_48,0);
    }
    else {
      FUN_008d51b0(&local_48,PTR_s_data___02710918,&local_50);
      FUN_006e5870(local_80,&local_48,0);
      if (local_48 != (char *)0x0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = (char *)0x0;
      }
    }
    FUN_010138d0(&local_48,*(undefined8 *)PTR_DAT_02710788,0,local_80,0,param_3,0);
    lVar4 = *(long *)(param_1 + 8);
  }
  else {
    sVar3 = strlen(PTR_s_data___02710918);
    iVar2 = strncmp(param_2,__s2,sVar3);
    if (iVar2 == 0) {
      local_48 = param_2;
      FUN_00d99c10(local_80,&local_48,0);
    }
    else {
      FUN_008d51b0(&local_48,PTR_s_data___02710918,&local_50);
      FUN_006e5870(local_80,&local_48,0);
      if (local_48 != (char *)0x0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = (char *)0x0;
      }
    }
    FUN_010138d0(&local_48,*(undefined8 *)PTR_DAT_02710788,0,local_80,0,param_3,param_4);
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  pcVar1 = local_48;
  *(char **)(param_1 + 8) = local_48;
  if (local_48 != (char *)0x0) {
    plVar5 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if ((*(long *)(param_1 + 0x10) != 0) || (*(long *)(param_1 + 0x90) != 0)) {
      FUN_006e1e70(pcVar1,param_1,1);
    }
    FUN_006e1be0(pcVar1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  return;
}


