/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00717c20; name: FUN_00717c20
 */


void FUN_00717c20(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  char *pcVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
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
    sVar4 = strlen((char *)*param_3);
    sVar5 = strlen((char *)*param_4);
    pcVar7 = acStack_61 + (1 - (lVar8 + sVar4 + sVar5 + 0x10 & 0xfffffffffffffff0));
    puVar1 = (undefined8 *)PTR_PTR_02710928;
    if (lVar9 != 0) {
      puVar1 = (undefined8 *)(lVar9 + 0x60);
    }
    local_48 = pcVar7;
    strcpy(pcVar7,(char *)*puVar1);
    if (pcVar7[lVar8 + -1] == '/') {
      pcVar7[lVar8 + -1] = '\0';
      pcVar7 = (char *)*param_3;
      cVar2 = *pcVar7;
      pcVar6 = local_48;
    }
    else {
      pcVar6 = strrchr(pcVar7,0x2f);
      if (pcVar6 == (char *)0x0) {
        *pcVar7 = '\0';
        pcVar7 = (char *)*param_3;
        cVar2 = *pcVar7;
        pcVar6 = local_48;
      }
      else {
        *pcVar6 = '\0';
        pcVar7 = (char *)*param_3;
        cVar2 = *pcVar7;
        pcVar6 = local_48;
      }
    }
    while (local_48 = pcVar6, cVar2 == '.') {
      while (pcVar7[1] != '.') {
        pcVar7 = pcVar7 + 2;
        if (*pcVar7 != '.') goto LAB_00717d98;
      }
      pcVar6 = strrchr(pcVar6,0x2f);
      *pcVar6 = '\0';
      pcVar7 = pcVar7 + 3;
      pcVar6 = local_48;
      cVar2 = *pcVar7;
    }
LAB_00717d98:
    sVar4 = strlen(pcVar6);
    pcVar3 = local_48;
    (pcVar6 + sVar4)[0] = '/';
    (pcVar6 + sVar4)[1] = '\0';
    strcat(local_48,pcVar7);
    if (*(char *)*param_4 == '\0') {
      FUN_0010d170(&local_58,pcVar3);
      FUN_006e5870(param_1,&local_58,(int)param_2[5]);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
    }
    else {
      FUN_0071b2c0(param_1,&local_48,param_4,(int)param_2[5]);
    }
  }
  return;
}


