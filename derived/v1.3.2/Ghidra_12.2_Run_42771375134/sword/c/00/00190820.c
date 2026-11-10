/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00190820; name: FUN_00190820
 */


void FUN_00190820(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (-1 < (int)param_1[1])) {
                    /* try { // try from 00190840 to 00190853 has its CatchHandler @ 00190864 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  *param_1 = 0;
  return;
}


