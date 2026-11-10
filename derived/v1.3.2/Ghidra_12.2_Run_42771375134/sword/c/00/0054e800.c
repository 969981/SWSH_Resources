/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054e800; name: FUN_0054e800
 */


long FUN_0054e800(long param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char *__nptr;
  long lVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x380);
  }
  lVar4 = 0;
  plVar5 = *(long **)(*(long *)(param_1 + 0x2f8) + (long)(param_2 + -1) * 8);
  lVar6 = *(long *)(*(long *)(*plVar5 + 0x310) + (long)*(int *)((long)plVar5 + 0x1c) * 8);
  piVar7 = (int *)(lVar6 + 0x20);
  __nptr = *(char **)(lVar6 + 0x28);
  do {
    if (*piVar7 <= lVar4) {
      uVar3 = atoi(__nptr);
      uVar8 = (ulong)uVar3;
      goto LAB_0054e8bc;
    }
    bVar1 = __nptr[lVar4];
  } while ((0x2f < bVar1) && (lVar4 = lVar4 + 1, bVar1 < 0x3a));
  if (*(int *)(param_1 + 0x350) < 1) {
    return 0;
  }
  lVar4 = 0;
  uVar8 = 0;
  while (iVar2 = FUN_00552890(piVar7,*(long *)(param_1 + 0x370) + lVar4), iVar2 == 0) {
    uVar8 = uVar8 + 1;
    lVar4 = lVar4 + 0x100;
    if ((long)*(int *)(param_1 + 0x350) <= (long)uVar8) {
      return 0;
    }
  }
LAB_0054e8bc:
  if ((int)uVar8 < 0) {
    return 0;
  }
  uVar3 = atoi((char *)(*(long *)(param_1 + 0x370) + (long)(int)uVar8 * 0x100 + 0xe0));
  return *(long *)(param_1 + 0x378) + (ulong)uVar3;
}


