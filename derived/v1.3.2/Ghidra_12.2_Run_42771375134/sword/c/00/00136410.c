/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00136410; name: FUN_00136410
 */


void FUN_00136410(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 00136428 to 0013643b has its CatchHandler @ 00136454 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    *param_1 = 0;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


