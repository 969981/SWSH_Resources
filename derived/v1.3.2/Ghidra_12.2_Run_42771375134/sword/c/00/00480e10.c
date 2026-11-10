/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00480e10; name: FUN_00480e10
 */


byte FUN_00480e10(long param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = 0;
  if (param_1 != 0) {
    bVar2 = false;
    do {
      bVar1 = param_1 == param_2;
      if ((bVar2) || ((bool)bVar1)) {
LAB_00480e50:
        param_1 = *(long *)(param_1 + 0x78);
      }
      else {
        if (*(long *)(param_1 + 0x80) != 0) {
          bVar1 = FUN_00455c80(*(long *)(param_1 + 0x80),param_2);
          bVar2 = true;
          goto LAB_00480e50;
        }
        bVar2 = false;
        param_1 = *(long *)(param_1 + 0x78);
        bVar1 = 0;
      }
    } while ((param_1 != 0) && ((bVar1 & 1) == 0));
  }
  return bVar1 & 1;
}


