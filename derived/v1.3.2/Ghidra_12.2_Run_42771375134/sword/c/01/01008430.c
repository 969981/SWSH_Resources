/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01008430; name: FUN_01008430
 */


void FUN_01008430(long param_1,long param_2,undefined8 param_3)

{
  undefined *__s2;
  int iVar1;
  size_t __n;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  undefined *local_c0;
  code *local_b8;
  code *local_b0;
  undefined *local_a8;
  long local_a0 [12];
  char *local_38;
  
  *(undefined8 *)(param_1 + 8) = param_3;
  __s2 = PTR_s_data___02710918;
  pcVar5 = *(char **)(param_2 + 8);
  __n = strlen(PTR_s_data___02710918);
  iVar1 = strncmp(pcVar5,__s2,__n);
  if (iVar1 == 0) {
    local_38 = pcVar5;
    FUN_00d99c10(&local_c0,&local_38,0);
  }
  else {
    FUN_008d5230(&local_38,PTR_s_data___02710918,param_2);
    FUN_006e5870(&local_c0,&local_38,0);
    if (local_38 != (char *)0x0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = (char *)0x0;
    }
  }
  FUN_006dccd0(&local_38,*(undefined8 *)PTR_DAT_02710788,1,&local_c0,0,param_3,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  pcVar5 = local_38;
  *(char **)(param_1 + 0x18) = local_38;
  if (local_38 != (char *)0x0) {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x20) != 0) || (*(long *)(param_1 + 0xa0) != 0)) {
      FUN_006e1e70(pcVar5,param_1 + 0x10,1);
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_a8 != (undefined *)0x0) && (local_c0 != (undefined *)0x0)) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
  }
  local_c0 = (undefined *)0x0;
  local_b8 = (code *)0xcbf29ce484222645;
  local_b0 = (code *)&DAT_01d38550;
  local_a8 = (undefined *)0x0;
  if (local_a0[0] != 0) {
    (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    return;
  }
  local_c0 = PTR_LAB_027234d0;
  local_b8 = (code *)PTR_FUN_027234d8;
  local_b0 = (code *)PTR_FUN_027234e0;
  local_a8 = PTR_LAB_027234e8;
  pcVar2 = *(code **)(param_1 + 0x28);
  local_a0[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    (*pcVar2)(param_1 + 0x40);
    if (local_b0 == (code *)0x0) goto LAB_01008654;
  }
  (*local_b0)(local_a0,param_1 + 0x40);
  *(undefined **)(param_1 + 0x38) = local_a8;
  *(code **)(param_1 + 0x28) = local_b8;
  *(code **)(param_1 + 0x30) = local_b0;
  *(undefined8 *)(param_1 + 0x20) = local_c0;
LAB_01008654:
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_006e1e70(lVar3,param_1 + 0x10,1);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar2)(local_a0);
  }
  return;
}


