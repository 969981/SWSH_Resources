/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bf580; name: FUN_003bf580
 */


void FUN_003bf580(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x38);
  do {
    lVar2 = lVar1;
    if (lVar1 == 0) {
      return;
    }
    while (lVar1 = *(long *)(lVar2 + 8), (*(byte *)(lVar2 + 0x1b) & 0x60) != 0) {
      lVar2 = lVar1;
      if (lVar1 == 0) {
        return;
      }
    }
    FUN_003fd100(lVar2,param_2,param_3);
  } while( true );
}


