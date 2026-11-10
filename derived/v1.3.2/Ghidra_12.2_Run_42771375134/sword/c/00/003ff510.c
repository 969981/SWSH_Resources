/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ff510; name: FUN_003ff510
 */


int FUN_003ff510(fenv_t *param_1)

{
  int iVar1;
  
  fegetenv(param_1);
  fesetenv((fenv_t *)0xffffffffffffffff);
  iVar1 = fesetround(0x1000000);
  return iVar1;
}


