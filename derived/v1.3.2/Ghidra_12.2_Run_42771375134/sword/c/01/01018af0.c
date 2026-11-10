/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01018af0; name: FUN_01018af0
 */


void FUN_01018af0(long *param_1,undefined8 *param_2,uint *param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  size_t __n;
  long lVar4;
  long lVar5;
  long lVar6;
  char *__s1;
  long local_48;
  char acStack_40 [16];
  
  __s1 = (char *)*param_2;
  snprintf(acStack_40,0x10,PTR_s_aoc_x___027235b8,(ulong)*param_3);
  __n = strlen(acStack_40);
  iVar3 = strncmp(__s1,acStack_40,__n);
  if (iVar3 != 0) {
    snprintf(acStack_40,0x10,PTR_s_aoc_x___027235b8,(ulong)*param_3);
    FUN_008d51b0(&local_48,acStack_40,param_2);
    FUN_006e5870(param_1,&local_48,5);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    return;
  }
  FUN_0010d170(param_1,*param_2);
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
      goto LAB_01018c3c;
    }
  }
  param_1[4] = lVar6;
LAB_01018c3c:
  *(undefined4 *)(param_1 + 5) = 5;
  FUN_00110660(param_1);
  return;
}


