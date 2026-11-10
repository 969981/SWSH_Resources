/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e7e20; name: FUN_006e7e20
 */


int FUN_006e7e20(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  FileHandle *pFVar6;
  long *plVar7;
  long local_28;
  
  if (*(char *)(param_1 + 0xa9) != '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    puVar5 = (undefined8 *)(param_1 + 0x70);
  }
  else {
    puVar5 = (undefined8 *)PTR_PTR_02710928;
    if (*(long *)(param_1 + 0x60) != 0) {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x60);
    }
  }
  plVar7 = (long *)(param_1 + 0x98);
  lVar4 = 0;
  if (*plVar7 != -1) {
    lVar4 = *plVar7;
  }
  nn::fs::CreateFile((char *)*puVar5,lVar4);
  pFVar6 = (FileHandle *)(param_1 + 0x90);
  if (*(long *)(param_1 + 0x78) == 0) {
    pcVar3 = *(char **)(param_1 + 0x70);
  }
  else {
    puVar5 = (undefined8 *)PTR_PTR_02710928;
    if (*(long *)(param_1 + 0x60) != 0) {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x60);
    }
    pcVar3 = (char *)*puVar5;
  }
  if (*(char *)(param_1 + 0xa8) == '\0') {
    iVar1 = nn::fs::OpenFile(pFVar6,pcVar3,2);
    if (iVar1 != 0) {
      return iVar1;
    }
    *(undefined1 *)(param_1 + 0xa9) = 1;
    nn::fs::GetFileSize(&local_28,*(undefined8 *)(param_1 + 0x90));
    lVar4 = *(long *)(param_1 + 0x98);
    if (lVar4 == -1) {
      *plVar7 = local_28;
      return 0;
    }
    if (local_28 <= lVar4) {
      if (lVar4 <= local_28) {
        return 0;
      }
      if (*(char *)(param_1 + 0xa9) != '\0') {
        nn::fs::FlushFile(*(undefined8 *)(param_1 + 0x90));
        nn::fs::CloseFile(*(undefined8 *)(param_1 + 0x90));
        *(undefined1 *)(param_1 + 0xa9) = 0;
      }
      if (*(long *)(param_1 + 0x78) == 0) {
        iVar1 = nn::fs::DeleteFile(*(char **)(param_1 + 0x70));
      }
      else {
        puVar5 = (undefined8 *)PTR_PTR_02710928;
        if (*(long *)(param_1 + 0x60) != 0) {
          puVar5 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x60);
        }
        iVar1 = nn::fs::DeleteFile((char *)*puVar5);
      }
      if (iVar1 != 0) {
        return iVar1;
      }
      if (*(long *)(param_1 + 0x78) == 0) {
        puVar5 = (undefined8 *)(param_1 + 0x70);
      }
      else {
        puVar5 = (undefined8 *)PTR_PTR_02710928;
        if (*(long *)(param_1 + 0x60) != 0) {
          puVar5 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x60);
        }
      }
      nn::fs::CreateFile((char *)*puVar5,*(long *)(param_1 + 0x98));
      if (*(long *)(param_1 + 0x78) == 0) {
        puVar5 = (undefined8 *)(param_1 + 0x70);
      }
      else {
        puVar5 = (undefined8 *)PTR_PTR_02710928;
        if (*(long *)(param_1 + 0x60) != 0) {
          puVar5 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x60);
        }
      }
      iVar1 = nn::fs::OpenFile(pFVar6,(char *)*puVar5,2);
      *(bool *)(param_1 + 0xa9) = iVar1 == 0;
      return iVar1;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x90);
  }
  else {
    iVar1 = nn::fs::OpenFile(pFVar6,pcVar3,6);
    if (iVar1 != 0) {
      return iVar1;
    }
    *(undefined1 *)(param_1 + 0xa9) = 1;
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    if (*(long *)(param_1 + 0x98) == -1) {
      nn::fs::GetFileSize(plVar7,uVar2);
      FUN_006e8050(param_1,0,2);
      return 0;
    }
  }
  nn::fs::SetFileSize(uVar2);
  return 0;
}


