/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01025d10; name: FUN_01025d10
 */


undefined8 FUN_01025d10(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined4 local_b0;
  undefined1 local_ac;
  CachedNintendoAccountInfo aCStack_a8 [104];
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar7 = 0;
  }
  else if ((*(char *)(param_1 + 0x7c) == '\0') || (*(char *)(param_1 + 0x74) == '\0')) {
    pvVar4 = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x800,8);
    nn::account::CachedNintendoAccountInfo::CachedNintendoAccountInfo(aCStack_a8);
    iVar1 = nn::account::LoadCachedNintendoAccountInfo
                      (aCStack_a8,(UserHandle *)(param_1 + 0x58),pvVar4,0x800);
    if (iVar1 == 0) {
      pcVar5 = (char *)nn::account::CachedNintendoAccountInfo::GetBirthday((ulong *)aCStack_a8);
      local_ac = 0;
      local_b0 = 0;
      local_b2 = 0;
      local_b4 = 0;
      local_b6 = 0;
      local_b8 = 0;
      strncpy((char *)&local_b0,pcVar5,4);
      strncpy((char *)&local_b4,pcVar5 + 5,2);
      strncpy((char *)&local_b8,pcVar5 + 8,2);
      pcVar5 = (char *)nn::account::CachedNintendoAccountInfo::GetCountry((ulong *)aCStack_a8);
      uVar6 = nn::util::GetCountryFromIso31661Alpha2((Country *)&local_bc,pcVar5,0);
      uVar7 = 0;
      if ((uVar6 & 1) != 0) {
        iVar1 = atoi((char *)&local_b0);
        iVar2 = atoi((char *)&local_b4);
        iVar3 = atoi((char *)&local_b8);
        if (*(char *)(param_1 + 0x7c) == '\0') {
          *(int *)(param_1 + 0x80) = iVar1;
          *(int *)(param_1 + 0x84) = iVar2;
          *(int *)(param_1 + 0x88) = iVar3;
          *(undefined1 *)(param_1 + 0x7c) = 1;
        }
        else {
          *(int *)(param_1 + 0x80) = iVar1;
          *(int *)(param_1 + 0x84) = iVar2;
          *(int *)(param_1 + 0x88) = iVar3;
        }
        uVar7 = 1;
        *(undefined1 *)(param_1 + 0x74) = 1;
        *(undefined4 *)(param_1 + 0x78) = local_bc;
      }
    }
    else {
      uVar7 = 0;
    }
    if (pvVar4 != (void *)0x0) {
      (**(code **)(*param_2 + 0x18))(param_2,pvVar4,0x800,8);
    }
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}


