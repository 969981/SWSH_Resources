/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f8330; name: FUN_004f8330
 */


undefined8 FUN_004f8330(char *param_1)

{
  size_t __n;
  undefined *puVar1;
  size_t sVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  
  if (param_1 == (char *)0x0) {
    return 2;
  }
  sVar2 = strlen(param_1);
  if (0x1f < sVar2) {
    return 2;
  }
  if (sVar2 == 0) {
    strncpy(&DAT_0275b358,param_1,1);
    puVar3 = &DAT_0275b359;
  }
  else {
    if (param_1[sVar2 - 1] == '/') {
      return 2;
    }
    if (param_1[sVar2 - 1] == '\\') {
      return 2;
    }
    __n = 0x1f;
    if (sVar2 + 1 < 0x1f) {
      __n = sVar2 + 1;
    }
    strncpy(&DAT_0275b358,param_1,__n);
    puVar3 = &DAT_0275b358 + __n;
  }
  *puVar3 = 0;
  puVar1 = PTR_DAT_027137e8;
  iVar4 = *(int *)(PTR_DAT_027137e8 + 8);
  if (iVar4 != 0) {
    lVar5 = (ulong)(iVar4 - 1) << 4;
    do {
      (**(code **)(*(long *)puVar1 + lVar5))
                (&DAT_0275b358,((undefined8 *)(*(long *)puVar1 + lVar5))[1]);
      iVar4 = iVar4 + -1;
      lVar5 = lVar5 + -0x10;
    } while (iVar4 != 0);
  }
  return 1;
}


