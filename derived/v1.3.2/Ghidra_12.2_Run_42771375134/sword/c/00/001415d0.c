/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001415d0; name: FUN_001415d0
 */


long FUN_001415d0(int param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    return 0;
  }
  lVar2 = FUN_00141630(0x28);
                    /* try { // try from 001415fc to 001415ff has its CatchHandler @ 00141618 */
  FUN_001416c0();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 8;
  }
  return lVar1;
}


