/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002010c0; name: FUN_002010c0
 */


void FUN_002010c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  *param_1 = (long)(PTR_DAT_027111d8 + 0x10);
  if (((lVar2 != 0) && (-1 < (int)*(uint *)((long)param_1 + 0x24))) &&
     ((*(uint *)((long)param_1 + 0x24) & 0x7fffffff) != 0)) {
                    /* try { // try from 002010f8 to 0020110b has its CatchHandler @ 0020113c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  FUN_003ffb20(param_1[1]);
  lVar2 = param_1[1];
  if (lVar2 != 0) {
                    /* try { // try from 0020111c to 0020112f has its CatchHandler @ 00201140 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


