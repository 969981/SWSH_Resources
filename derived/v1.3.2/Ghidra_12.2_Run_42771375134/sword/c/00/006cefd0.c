/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cefd0; name: FUN_006cefd0
 */


void FUN_006cefd0(void)

{
  long lVar1;
  
  lVar1 = (long)DAT_029ef628;
  if (0 < DAT_029ef628) {
    do {
      lVar1 = lVar1 + -1;
      if (0x3ff < (uint)lVar1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      (**(code **)**(undefined8 **)(&DAT_029ed628 + lVar1 * 8))();
    } while (lVar1 != 0);
  }
  return;
}


