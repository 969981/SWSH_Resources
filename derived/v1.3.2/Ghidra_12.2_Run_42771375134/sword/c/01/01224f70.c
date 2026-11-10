/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01224f70; name: FUN_01224f70
 */


void FUN_01224f70(void *param_1)

{
  undefined1 auStack_280 [608];
  
  if (*(long *)PTR_DAT_02710958 == 0) {
                    /* WARNING: Subroutine does not return */
    memset(param_1,0,0x10a);
  }
  FUN_01211940(auStack_280);
  FUN_01225050(param_1,auStack_280);
  return;
}


