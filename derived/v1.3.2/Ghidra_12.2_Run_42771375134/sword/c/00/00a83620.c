/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a83620; name: FUN_00a83620
 */


void FUN_00a83620(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *__s2;
  int iVar4;
  size_t __n;
  long lVar5;
  long lVar6;
  long lVar7;
  char *__s1;
  long local_38;
  
  plVar2 = (long *)PTR_PTR_02710928;
  __s2 = PTR_s_data___02710918;
  puVar1 = (undefined8 *)PTR_PTR_02710928;
  if (*param_2 != 0) {
    puVar1 = (undefined8 *)(*param_2 + 0x60);
  }
  __s1 = (char *)*puVar1;
  __n = strlen(PTR_s_data___02710918);
  iVar4 = strncmp(__s1,__s2,__n);
  if (iVar4 != 0) {
    FUN_00a877c0(&local_38,PTR_s_data___02710918,param_2);
    FUN_006e5870(param_1,&local_38,0);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    return;
  }
  FUN_0010d170(param_1,__s1);
  lVar7 = *param_1;
  plVar3 = (long *)PTR_DAT_02710920;
  if (lVar7 != 0) {
    plVar2 = (long *)(lVar7 + 0x60);
    plVar3 = (long *)(lVar7 + 0x58);
  }
  lVar5 = *plVar2;
  if (lVar7 == 0) {
    param_1[1] = *plVar3;
    param_1[2] = lVar5;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    lVar6 = *(long *)(lVar7 + 0x68);
    param_1[1] = *plVar3;
    param_1[2] = lVar5;
    param_1[3] = lVar6;
    param_1[4] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      lVar5 = param_1[4];
      param_1[4] = lVar7;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      goto LAB_00a83754;
    }
  }
  param_1[4] = lVar7;
LAB_00a83754:
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_00110660(param_1);
  return;
}


