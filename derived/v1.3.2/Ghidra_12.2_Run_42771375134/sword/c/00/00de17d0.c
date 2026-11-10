/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de17d0; name: FUN_00de17d0
 */


void FUN_00de17d0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_00ddd2f0();
  lVar2 = param_1[0xbc];
  if (lVar2 != 0) {
    lVar1 = FUN_00794780(lVar2);
    if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00de1834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))(param_1);
      return;
    }
    if ((char)param_1[0xcc] != '\0') {
      *(undefined1 *)(param_1 + 0xcc) = 0;
      FUN_00794700(lVar2);
      return;
    }
  }
  return;
}


