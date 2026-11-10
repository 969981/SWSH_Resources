/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a7a060; name: FUN_00a7a060
 */


void FUN_00a7a060(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *__s2;
  int iVar2;
  size_t __n;
  long *plVar3;
  long lVar4;
  long lVar5;
  char *__s1;
  long lVar6;
  long local_38;
  
  __s2 = PTR_s_data___02710918;
  lVar6 = param_2[3];
  if (lVar6 == 0) {
    plVar3 = param_2 + 2;
  }
  else {
    plVar3 = (long *)PTR_PTR_02710928;
    if (*param_2 != 0) {
      plVar3 = (long *)(*param_2 + 0x60);
    }
  }
  __s1 = (char *)*plVar3;
  __n = strlen(PTR_s_data___02710918);
  iVar2 = strncmp(__s1,__s2,__n);
  if (iVar2 != 0) {
    FUN_00a8d1f0(&local_38,PTR_s_data___02710918,param_2);
    FUN_006e5870(param_1,&local_38,0);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    return;
  }
  if (lVar6 == 0) {
    plVar3 = param_2 + 2;
  }
  else {
    plVar3 = (long *)PTR_PTR_02710928;
    if (*param_2 != 0) {
      plVar3 = (long *)(*param_2 + 0x60);
    }
  }
  FUN_0010d170(param_1,*plVar3);
  lVar6 = *param_1;
  plVar3 = (long *)PTR_DAT_02710920;
  if (lVar6 != 0) {
    plVar3 = (long *)(lVar6 + 0x58);
  }
  plVar1 = (long *)PTR_PTR_02710928;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 0x60);
  }
  lVar4 = *plVar1;
  if (lVar6 == 0) {
    param_1[1] = *plVar3;
    param_1[2] = lVar4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    lVar5 = *(long *)(lVar6 + 0x68);
    param_1[1] = *plVar3;
    param_1[2] = lVar4;
    param_1[3] = lVar5;
    param_1[4] = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      lVar4 = param_1[4];
      param_1[4] = lVar6;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      }
      goto LAB_00a7a1d0;
    }
  }
  param_1[4] = lVar6;
LAB_00a7a1d0:
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_00110660(param_1);
  return;
}


