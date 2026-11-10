/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b2fe0; name: FUN_009b2fe0
 */


void FUN_009b2fe0(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 600);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 5;
                    /* WARNING: Subroutine does not return */
  memset(puVar1 + 2,0,0x2721);
}


