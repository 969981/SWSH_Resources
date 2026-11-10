/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ba3b0; name: FUN_003ba3b0
 */


void FUN_003ba3b0(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02712768;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if ((void *)param_1[5] != (void *)0x0) {
                    /* try { // try from 003ba3dc to 003ba403 has its CatchHandler @ 003ba418 */
    memcpy((void *)0x0,(void *)param_1[5],0);
    if ((long *)param_1[5] != param_1 + 1) {
      FUN_003ddee0(param_1[9],(long *)param_1[5],(int)param_1[6]);
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = 0;
  return;
}


