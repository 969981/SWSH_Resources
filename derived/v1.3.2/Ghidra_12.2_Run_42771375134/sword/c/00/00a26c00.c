/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a26c00; name: FUN_00a26c00
 */


undefined8 FUN_00a26c00(long param_1,uint param_2)

{
  int *piVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x428) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x420) + 4);
    lVar2 = *(long *)(param_1 + 0x428) << 3;
    do {
      if ((piVar1[-1] != 0 && piVar1[-1] == (param_2 & 0xffff)) && (*piVar1 != 0)) {
        return 1;
      }
      piVar1 = piVar1 + 2;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0;
}


