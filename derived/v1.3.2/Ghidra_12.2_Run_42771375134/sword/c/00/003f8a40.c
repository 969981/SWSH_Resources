/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f8a40; name: FUN_003f8a40
 */


void FUN_003f8a40(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x48) == 6) {
    if (*(char *)(param_1 + 0x41) != '\0') {
      lVar2 = *(long *)(param_1 + 0x70);
      if (lVar2 != 0) {
                    /* try { // try from 003f8aa8 to 003f8abb has its CatchHandler @ 003f8acc */
        plVar1 = (long *)FUN_00400d30();
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
      }
      *(undefined2 *)(param_1 + 0x78) = 0;
    }
  }
  else if ((*(int *)(param_1 + 0x48) == 5) && (*(char *)(param_1 + 0x41) != '\0')) {
    lVar2 = *(long *)(param_1 + 0x88);
    if (lVar2 != 0) {
                    /* try { // try from 003f8a74 to 003f8a87 has its CatchHandler @ 003f8ad0 */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
    *(undefined2 *)(param_1 + 0x90) = 0;
    return;
  }
  return;
}


