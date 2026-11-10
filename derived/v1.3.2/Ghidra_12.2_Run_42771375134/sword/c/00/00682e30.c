/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00682e30; name: FUN_00682e30
 */


bool FUN_00682e30(char *param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  DirectoryEntryType aDStack_430 [1024];
  
  bVar1 = false;
  if (param_1 != (char *)0x0) {
    if (*param_1 == '\0') {
      bVar1 = false;
    }
    else {
      if ((param_2 & 1) != 0) {
        FUN_0067d060();
        lVar3 = FUN_0067d8f0();
        if (lVar3 != 0) {
          FUN_0067d060();
          uVar4 = FUN_0067d8f0();
          uVar5 = FUN_005c4db0(param_1,aDStack_430,0x400);
          lVar3 = FUN_00683c20(uVar4,uVar5);
          if (lVar3 != 0) {
            return true;
          }
        }
      }
      pcVar6 = strchr(param_1,0x3a);
      bVar1 = false;
      if (pcVar6 != (char *)0x0) {
        iVar2 = nn::fs::GetEntryType(aDStack_430,param_1);
        bVar1 = iVar2 == 0;
      }
    }
  }
  return bVar1;
}


