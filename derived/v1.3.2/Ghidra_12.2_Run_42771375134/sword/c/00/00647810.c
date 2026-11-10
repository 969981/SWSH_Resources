/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00647810; name: FUN_00647810
 */


undefined8 FUN_00647810(long param_1)

{
  int iVar1;
  void *__dest;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x184) == '\0') {
    return 0;
  }
  __dest = *(void **)(param_1 + 0x168);
  uVar2 = 0;
  if (__dest != (void *)0x0) {
    if ((void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)) <= __dest) {
      return 0;
    }
    memcpy(__dest,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
    *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
    iVar1 = *(int *)(param_1 + 0x178) + 1;
    *(int *)(param_1 + 0x178) = iVar1;
    if (*(int *)(param_1 + 0x17c) <= iVar1) {
      FUN_006475b0(param_1,0,0);
    }
    uVar2 = 1;
  }
  return uVar2;
}


