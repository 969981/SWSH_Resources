/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a9d760; name: FUN_00a9d760
 */


void FUN_00a9d760(long *param_1,char *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *__s2;
  int iVar3;
  size_t __n;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_28;
  
  __s2 = PTR_s_data___02710918;
  __n = strlen(PTR_s_data___02710918);
  iVar3 = strncmp(param_2,__s2,__n);
  if (iVar3 != 0) {
    FUN_00aa52b0(&local_28,PTR_s_data___02710918,param_2);
    FUN_006e5870(param_1,&local_28,0);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    return;
  }
  FUN_0010d170(param_1,param_2);
  lVar6 = *param_1;
  plVar1 = (long *)PTR_DAT_02710920;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 0x58);
  }
  plVar2 = (long *)PTR_PTR_02710928;
  if (lVar6 != 0) {
    plVar2 = (long *)(lVar6 + 0x60);
  }
  lVar4 = *plVar2;
  if (lVar6 == 0) {
    param_1[1] = *plVar1;
    param_1[2] = lVar4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    lVar5 = *(long *)(lVar6 + 0x68);
    param_1[1] = *plVar1;
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
      goto LAB_00a9d878;
    }
  }
  param_1[4] = lVar6;
LAB_00a9d878:
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_00110660(param_1);
  return;
}


