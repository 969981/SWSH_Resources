/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a5980; name: FUN_003a5980
 */


void FUN_003a5980(long *param_1)

{
  *param_1 = (long)(PTR_DAT_027126f8 + 0x10);
                    /* try { // try from 003a59a8 to 003a59b3 has its CatchHandler @ 003a5a00 */
  FUN_0039f470(param_1 + 2,1);
                    /* try { // try from 003a59bc to 003a59bf has its CatchHandler @ 003a59d0 */
  FUN_0039ebd0(param_1 + 0x3d4);
  return;
}


