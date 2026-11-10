/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013717a0; name: FUN_013717a0
 */


undefined8 FUN_013717a0(long param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = 1;
  lVar4 = 0x558;
  do {
    while( true ) {
      puVar1 = (undefined1 *)(param_1 + lVar4);
      if ((*(long **)(puVar1 + -8) != (long *)0x0) && (*(char *)(param_1 + lVar4) != '\0')) break;
LAB_013717fc:
      lVar4 = lVar4 + 0x10;
      if (lVar4 == 0x758) {
        return uVar5;
      }
    }
    uVar2 = (**(code **)(**(long **)(puVar1 + -8) + 0x50))();
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(puVar1 + -8);
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + -8) = 0;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      goto LAB_013717fc;
    }
    uVar5 = 0;
    lVar4 = lVar4 + 0x10;
    if (lVar4 == 0x758) {
      return 0;
    }
  } while( true );
}


