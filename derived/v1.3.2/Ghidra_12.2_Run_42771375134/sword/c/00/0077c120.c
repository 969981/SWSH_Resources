/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077c120; name: FUN_0077c120
 */


void FUN_0077c120(undefined8 param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  size_t sVar5;
  long lVar6;
  char *__dest;
  char cStack_31;
  
  sVar3 = strlen(param_2);
  uVar4 = sVar3 + 1 & 0xffffffff;
  __dest = (char *)((long)register0x00000008 + (-0x30 - (uVar4 + 0xf & 0x1fffffff0)));
  sVar5 = uVar4 - 1;
  if (sVar3 + 1 <= sVar5) {
    sVar5 = sVar3 + 1;
  }
  strncpy(__dest,param_2,sVar5);
  __dest[sVar5] = '\0';
  sVar5 = strlen(__dest);
  lVar6 = (long)(int)sVar5;
  do {
    lVar1 = lVar6 + -1;
    if (lVar6 < 1) goto LAB_0077c1a4;
    lVar2 = lVar6 + -1;
    lVar6 = lVar1;
  } while (__dest[lVar2] != '.');
  __dest[lVar1] = '\0';
LAB_0077c1a4:
  FUN_0042ef70(__dest);
  return;
}


