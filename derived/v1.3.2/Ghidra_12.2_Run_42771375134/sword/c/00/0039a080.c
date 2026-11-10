/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039a080; name: FUN_0039a080
 */


void FUN_0039a080(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x70))();
  }
  *param_1 = 0;
  if (((-1 < (int)*(uint *)((long)param_1 + 0x24)) &&
      ((*(uint *)((long)param_1 + 0x24) & 0x7fffffff) != 0)) && (lVar2 = param_1[3], lVar2 != 0)) {
                    /* try { // try from 0039a0c0 to 0039a0d3 has its CatchHandler @ 0039a108 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = param_1[1];
  if ((lVar2 != 0) && (-1 < (int)param_1[2])) {
                    /* try { // try from 0039a0e4 to 0039a0f7 has its CatchHandler @ 0039a10c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  param_1[1] = 0;
  return;
}


