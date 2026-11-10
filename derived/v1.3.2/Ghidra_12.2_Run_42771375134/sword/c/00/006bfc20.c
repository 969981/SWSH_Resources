/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bfc20; name: FUN_006bfc20
 */


void FUN_006bfc20(undefined8 *param_1,long *param_2,long param_3,char *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char acStack_61 [9];
  long local_58;
  char *local_48;
  
  if (param_2[3] == 0) {
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = 0;
    param_1[1] = 0xcbf29ce484222645;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[2] = &DAT_01d38550;
  }
  else {
    lVar9 = *param_2;
    if (lVar9 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(lVar9 + 0x68);
    }
    lVar7 = *(long *)(param_3 + 0x10);
    sVar4 = strlen(param_4);
    pcVar6 = acStack_61 + (1 - (lVar8 + lVar7 + sVar4 + 0x10 & 0xfffffffffffffff0));
    puVar1 = (undefined8 *)PTR_PTR_02710928;
    if (lVar9 != 0) {
      puVar1 = (undefined8 *)(lVar9 + 0x60);
    }
    local_48 = pcVar6;
    strcpy(pcVar6,(char *)*puVar1);
    if (pcVar6[lVar8 + -1] == '/') {
      pcVar6[lVar8 + -1] = '\0';
      pcVar6 = *(char **)(param_3 + 8);
      cVar2 = *pcVar6;
      pcVar5 = local_48;
    }
    else {
      pcVar5 = strrchr(pcVar6,0x2f);
      if (pcVar5 == (char *)0x0) {
        *pcVar6 = '\0';
        pcVar6 = *(char **)(param_3 + 8);
        cVar2 = *pcVar6;
        pcVar5 = local_48;
      }
      else {
        *pcVar5 = '\0';
        pcVar6 = *(char **)(param_3 + 8);
        cVar2 = *pcVar6;
        pcVar5 = local_48;
      }
    }
    while (local_48 = pcVar5, cVar2 == '.') {
      while (pcVar6[1] != '.') {
        pcVar6 = pcVar6 + 2;
        if (*pcVar6 != '.') goto LAB_006bfd90;
      }
      pcVar5 = strrchr(pcVar5,0x2f);
      *pcVar5 = '\0';
      pcVar6 = pcVar6 + 3;
      pcVar5 = local_48;
      cVar2 = *pcVar6;
    }
LAB_006bfd90:
    sVar4 = strlen(pcVar5);
    pcVar3 = local_48;
    (pcVar5 + sVar4)[0] = '/';
    (pcVar5 + sVar4)[1] = '\0';
    strcat(local_48,pcVar6);
    sVar4 = strlen(param_4);
    if (sVar4 == 0) {
      FUN_0010d170(&local_58,pcVar3);
      FUN_006e5870(param_1,&local_58,(int)param_2[5]);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
    }
    else {
      FUN_0010d310(param_1,&local_48,param_4,(int)param_2[5]);
    }
  }
  return;
}


