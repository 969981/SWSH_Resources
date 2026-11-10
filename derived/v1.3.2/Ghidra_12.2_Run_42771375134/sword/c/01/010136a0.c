/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010136a0; name: FUN_010136a0
 */


void FUN_010136a0(long param_1,long param_2,undefined8 param_3)

{
  undefined *__s2;
  int iVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  long local_70;
  long local_68;
  undefined1 *local_60;
  long local_58;
  long local_50;
  char *local_38;
  
  *(undefined8 *)(param_1 + 8) = param_3;
  __s2 = PTR_s_data___02710918;
  pcVar6 = *(char **)(param_2 + 8);
  __n = strlen(PTR_s_data___02710918);
  iVar1 = strncmp(pcVar6,__s2,__n);
  if (iVar1 == 0) {
    local_38 = pcVar6;
    FUN_00d99c10(&local_70,&local_38,0);
  }
  else {
    FUN_008d5230(&local_38,PTR_s_data___02710918,param_2);
    FUN_006e5870(&local_70,&local_38,0);
    if (local_38 != (char *)0x0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = (char *)0x0;
    }
  }
  FUN_006dccd0(&local_38,*(undefined8 *)PTR_DAT_02710788,0,&local_70,0,param_3,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  pcVar6 = local_38;
  *(char **)(param_1 + 0x18) = local_38;
  if (local_38 != (char *)0x0) {
    plVar5 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if ((*(long *)(param_1 + 0x20) != 0) || (*(long *)(param_1 + 0xa0) != 0)) {
      FUN_006e1e70(pcVar6,param_1 + 0x10,1);
    }
    FUN_006e1be0(pcVar6);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if ((local_58 != 0) && (local_70 != 0)) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  local_70 = 0;
  local_68 = -0x340d631b7bddd9bb;
  local_60 = &DAT_01d38550;
  local_58 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if ((((*(long *)(param_1 + 0x130) == 0) &&
       (uVar2 = FUN_006e2fe0(param_1 + 0x120), (uVar2 & 1) == 0)) &&
      (lVar4 = *(long *)(param_1 + 0x18), lVar4 != 0)) && (*(char *)(lVar4 + 0x170) != '\0')) {
    FUN_006e2db0(&local_70,lVar4,*(undefined8 *)(lVar4 + 400));
    lVar4 = local_68;
    *(long *)(param_1 + 0x120) = local_70;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(param_1 + 0x128);
    *(long *)(param_1 + 0x128) = lVar4;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
  }
  return;
}


