/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ff530; name: FUN_003ff530
 */


int FUN_003ff530(fenv_t *param_1)

{
  int iVar1;
  
                    /* try { // try from 003ff538 to 003ff53b has its CatchHandler @ 003ff544 */
  iVar1 = fesetenv(param_1);
  return iVar1;
}


