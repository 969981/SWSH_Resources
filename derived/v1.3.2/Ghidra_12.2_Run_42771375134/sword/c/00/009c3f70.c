/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c3f70; name: FUN_009c3f70
 */


void FUN_009c3f70(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (((*(long *)(param_1 + 0xb0) != 0) && (*(int *)(*(long *)(param_1 + 0xb0) + 0x54) != 0)) &&
     (plVar3 = *(long **)(param_1 + 0xb8), plVar3 != (long *)0x0)) {
    bVar1 = (**(code **)(*plVar3 + 0x30))(plVar3,*param_2);
    *(undefined1 *)(param_1 + (ulong)bVar1 + 0xa5) = 1;
    (**(code **)(*plVar3 + 0x20))(plVar3,*param_2);
  }
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  lVar2 = *(long *)PTR_DAT_02716a30;
  if (((lVar2 != 0) && (*(long *)(param_1 + 0xb0) != 0)) &&
     ((*(int *)(*(long *)(param_1 + 0xb0) + 0x54) != 0 &&
      ((plVar3 = *(long **)(param_1 + 0xb8), plVar3 != (long *)0x0 &&
       (*(int *)(param_1 + 0x70) != 8)))))) {
    for (lVar4 = *(long *)(lVar2 + 0x1a0); lVar4 != lVar2 + 0x198; lVar4 = *(long *)(lVar4 + 8)) {
      while ((bVar1 = (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined8 *)(lVar4 + 0x10)),
             bVar1 != 5 && (*(char *)(param_1 + (ulong)bVar1 + 0xa5) == '\0'))) {
        *(undefined1 *)(param_1 + (ulong)bVar1 + 0xa0) = 1;
        lVar4 = *(long *)(lVar4 + 8);
        if (lVar4 == lVar2 + 0x198) {
          return;
        }
      }
    }
  }
  return;
}


