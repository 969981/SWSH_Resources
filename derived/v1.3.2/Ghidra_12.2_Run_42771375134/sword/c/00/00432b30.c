/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00432b30; name: FUN_00432b30
 */


undefined4 FUN_00432b30(char *param_1)

{
  undefined *puVar1;
  int iVar2;
  size_t sVar3;
  char *__dest;
  undefined4 uVar4;
  
  puVar1 = PTR_DAT_02712d90;
  if (*(char **)PTR_DAT_02712d90 != (char *)0x0) {
    iVar2 = strcmp(param_1,*(char **)PTR_DAT_02712d90);
    uVar4 = 0x53;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    return uVar4;
  }
  uVar4 = *(undefined4 *)PTR_DAT_02712a90;
  sVar3 = strlen(param_1);
  __dest = (char *)FUN_00404690(uVar4,sVar3 + 1);
  *(char **)puVar1 = __dest;
  if (__dest == (char *)0x0) {
    return 0x34;
  }
  strcpy(__dest,param_1);
  return 1;
}


