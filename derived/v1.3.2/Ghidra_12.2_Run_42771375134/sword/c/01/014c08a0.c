/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c08a0; name: FUN_014c08a0
 */


void FUN_014c08a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *__s2;
  undefined *__s2_00;
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  byte *__s;
  char *pcVar4;
  long local_60;
  long local_58 [2];
  char *local_48;
  
  pcVar4 = (char *)*param_2;
  sVar2 = strlen(pcVar4);
  pcVar3 = (char *)((long)local_58 + (-8 - (sVar2 + 0x10 & 0xfffffffffffffff0)));
  local_48 = pcVar3;
  strcpy(pcVar3,pcVar4);
  pcVar4 = strrchr(pcVar3,0x2e);
  pcVar3 = strrchr(pcVar3,0x2f);
  if (pcVar3 < pcVar4) {
    *pcVar4 = '\0';
  }
  __s2_00 = PTR_DAT_02710b80;
  __s2 = PTR_s_data___02710918;
  switch(param_4) {
  case 0:
    pcVar4 = (char *)*param_2;
    sVar2 = strlen(PTR_s_data___02710918);
    iVar1 = strncmp(pcVar4,__s2,sVar2);
    if (iVar1 == 0) break;
    FUN_014c0b40(local_58,PTR_s_data___02710918,&local_48,param_3);
    FUN_006e5870(param_1,local_58,0);
joined_r0x014c0a5c:
    if (local_58[0] == 0) {
      return;
    }
    goto LAB_014c0b18;
  case 2:
    __s = (byte *)*param_2;
    iVar1 = isalpha((uint)*__s);
    if ((((iVar1 == 0) || (__s[1] != 0x3a)) || (__s[2] != 0x2f)) ||
       (pcVar4 = strchr((char *)__s,0x5c), pcVar4 != (char *)0x0)) {
      FUN_014c0bf0(local_58,PTR_DAT_02710b78,&local_48,param_3);
      FUN_006e5870(param_1,local_58,2);
      goto joined_r0x014c0a5c;
    }
    break;
  case 3:
    pcVar4 = (char *)*param_2;
    sVar2 = strlen(PTR_DAT_02710b80);
    iVar1 = strncmp(pcVar4,__s2_00,sVar2);
    if (iVar1 != 0) {
      FUN_014c0b40(local_58,PTR_DAT_02710b80,&local_48,param_3);
      FUN_006e5870(param_1,local_58,3);
      goto joined_r0x014c0a5c;
    }
    break;
  case 5:
    pcVar3 = (char *)*param_2;
    pcVar4 = strchr(pcVar3,0x2f);
    if ((pcVar4 == (char *)0x0) || (iVar1 = strncmp(pcVar3,"aoc",3), iVar1 != 0)) {
      strncpy((char *)local_58,pcVar3,(long)pcVar4 - (long)pcVar3);
      *(undefined1 *)((long)local_58 + ((long)pcVar4 - (long)pcVar3)) = 0;
      FUN_014c0b40(&local_60,local_58,&local_48,param_3);
      FUN_006e5870(param_1,&local_60,5);
      if (local_60 == 0) {
        return;
      }
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      return;
    }
  }
  FUN_014c0ca0(local_58,&local_48,param_3);
  FUN_006e5870(param_1,local_58,param_4);
  if (local_58[0] != 0) {
LAB_014c0b18:
    (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
  }
  return;
}


