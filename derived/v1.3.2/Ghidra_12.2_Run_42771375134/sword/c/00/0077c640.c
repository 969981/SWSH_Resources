/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077c640; name: FUN_0077c640
 */


undefined8 FUN_0077c640(long param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  char *__s;
  undefined8 uVar5;
  int local_44;
  
  sVar2 = strlen(param_2);
  sVar3 = strlen((char *)(param_1 + 0x10c));
  sVar4 = strlen((char *)(param_1 + 0x210));
  if (sVar4 <= sVar3) {
    sVar4 = sVar3;
  }
  __s = (char *)FUN_004f8460();
  sVar3 = strlen(__s);
  if (sVar2 + sVar4 + sVar3 + 3 < 0x104) {
    sVar3 = strlen(param_2);
    sVar4 = 0x103;
    if (sVar3 + 1 < 0x103) {
      sVar4 = sVar3 + 1;
    }
    strncpy((char *)(param_1 + 8),param_2,sVar4);
    ((char *)(param_1 + 8))[sVar4] = '\0';
    if (2 < sVar2 + 2) {
      if (*(char *)(param_1 + sVar2 + 7) != '/') {
        *(undefined2 *)(param_1 + sVar2 + 8) = 0x2f;
      }
      iVar1 = nn::fs::GetEntryType((DirectoryEntryType *)&local_44,param_2);
      if (local_44 != 0 || iVar1 != 0) {
        return 0x24;
      }
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0x1f;
  }
  return uVar5;
}


