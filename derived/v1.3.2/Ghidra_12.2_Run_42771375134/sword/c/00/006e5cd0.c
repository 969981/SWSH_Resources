/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e5cd0; name: FUN_006e5cd0
 */


int FUN_006e5cd0(int *param_1)

{
  Uid *pUVar1;
  int iVar2;
  char *pcVar3;
  long *plVar4;
  
  if ((*(long *)(param_1 + 2) == 0) ||
     (*(int *)(*(long *)(param_1 + 2) + (long)param_1[4] * 4) != 3)) {
    iVar2 = 0;
  }
  else {
    pUVar1 = (Uid *)(param_1 + 0x10);
    iVar2 = nn::fs::EnsureSaveData(pUVar1);
    if (iVar2 == 0) {
      pcVar3 = *(char **)(param_1 + 8);
      if (*(long *)(param_1 + 0xc) == 0) {
        iVar2 = nn::fs::MountSaveData(pcVar3,pUVar1);
      }
      else {
        plVar4 = (long *)(*(long *)(param_1 + 0xc) + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        iVar2 = nn::fs::MountSaveData(pcVar3,pUVar1);
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      if (iVar2 == 0) {
        *(undefined4 *)(*(long *)(param_1 + 2) + (long)param_1[4] * 4) = 3;
      }
    }
    *param_1 = iVar2;
  }
  return iVar2;
}


