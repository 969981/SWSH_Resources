/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e2df0; name: FUN_003e2df0
 */


void FUN_003e2df0(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = *(long **)(param_1 + 0x1898);
  *(undefined4 *)(param_1 + 0x19f0) = 1;
  *(long **)(param_1 + 0x19e8) = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
    *(undefined8 *)(param_1 + 0x19e0) = *(undefined8 *)(*(long *)(param_1 + 0x19e8) + 0x10);
  }
  FUN_00114270(*(undefined8 *)(param_1 + 0x748),param_1 + 0x19d0);
  iVar2 = *(int *)(*(long *)(param_1 + 0x728) + 400);
  if (iVar2 != 0) {
    plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x728) + 0x188) + 0x10);
    do {
      lVar3 = *plVar1;
      iVar2 = iVar2 + -1;
      if (((lVar3 != 0) && (*(char *)(lVar3 + 0x24) == '\0')) && (*(long *)(lVar3 + 0x58) != 0)) {
        lVar4 = *(long *)(*(long *)(lVar3 + 8) + 0x48);
        (**(code **)(**(long **)(*(long *)(lVar4 + 0x720) + 0x6e8) + 0x48))();
        FUN_0011da90(*(undefined8 *)(lVar4 + 0x720),*(undefined8 *)(lVar3 + 0x58));
        *(undefined8 *)(lVar3 + 0x58) = 0;
      }
      plVar1 = plVar1 + 3;
    } while (iVar2 != 0);
  }
  return;
}


