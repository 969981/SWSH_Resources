/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c4420; name: FUN_003c4420
 */


void FUN_003c4420(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x28);
  do {
    lVar3 = *(long *)(lVar1 + 0x30);
    do {
      while (lVar2 = *(long *)(lVar1 + 0x40), lVar2 == 0) {
        lVar2 = *(long *)(lVar1 + 0x38);
        lVar4 = *(long *)(lVar1 + 0x48);
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        FUN_003c17c0();
        lVar1 = lVar2;
        if (lVar4 != 0) {
          lVar1 = lVar4;
        }
        if (lVar1 == 0) goto LAB_003c4478;
      }
      lVar1 = lVar2;
    } while (lVar2 != 0);
LAB_003c4478:
    lVar1 = lVar3;
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      return;
    }
  } while( true );
}


