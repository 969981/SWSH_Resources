/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00153580; name: FUN_00153580
 */


void FUN_00153580(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  if ((lVar2 != 0 && (*(uint *)((long)param_1 + 0xc) & 0x7fffffff) != 0) &&
     (-1 < (int)*(uint *)((long)param_1 + 0xc))) {
    lVar3 = *(long *)(lVar2 + -8);
                    /* try { // try from 001535b8 to 001535cb has its CatchHandler @ 00153614 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2 - lVar3);
  }
  lVar2 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  if (((lVar2 != 0) && ((*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) != 0)) &&
     (-1 < (int)*(uint *)((long)param_1 + 0x1c))) {
    lVar3 = *(long *)(lVar2 + -8);
                    /* try { // try from 001535ec to 001535ff has its CatchHandler @ 00153610 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2 - lVar3);
  }
  return;
}


