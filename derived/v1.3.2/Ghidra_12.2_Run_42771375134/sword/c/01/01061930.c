/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01061930; name: FUN_01061930
 */


void FUN_01061930(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  
  if ((((**(long **)(param_2 + 0x78) != 0) && (*(int *)(**(long **)(param_2 + 0x78) + 0x54) != 0))
      && (*(long *)(*(long *)(param_2 + 0x78) + 0x10) != 0)) && (iVar1 = FUN_0069c6d0(), iVar1 != 0)
     ) {
    iVar3 = 0;
    do {
      FUN_0069c730(param_1,*(undefined8 *)(*(long *)(param_2 + 0x78) + 0x10),iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  plVar4 = (long *)(param_2 + 0x98);
  do {
    if (((*(long *)*plVar4 != 0) && (*(int *)(*(long *)*plVar4 + 0x54) != 0)) &&
       (lVar2 = *plVar4, *(char *)(lVar2 + 0x22) != '\0')) {
      if (*(long *)(lVar2 + 0x18) == 0) {
        if ((*(long *)(lVar2 + 0x10) != 0) && (iVar1 = FUN_0069c6d0(), iVar1 != 0)) {
          iVar3 = 0;
          do {
            FUN_0069c730(param_1,*(undefined8 *)(*plVar4 + 0x10),iVar3);
            iVar3 = iVar3 + 1;
          } while (iVar1 != iVar3);
        }
      }
      else {
        FUN_01061930(param_1);
      }
    }
    plVar4 = plVar4 + 4;
  } while (plVar4 != (long *)(param_2 + 0x298));
  return;
}


