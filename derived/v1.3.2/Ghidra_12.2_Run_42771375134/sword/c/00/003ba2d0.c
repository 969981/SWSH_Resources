/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ba2d0; name: FUN_003ba2d0
 */


void FUN_003ba2d0(long *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)((long)param_1 + 0xc);
  if (*param_2 != cVar1) {
    *(char *)((long)param_1 + 0xc) = *param_2;
    param_1 = (long *)*param_1;
    if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003ba2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))(param_1,cVar1,*param_2);
      return;
    }
  }
  return;
}


