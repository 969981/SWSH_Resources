/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bb930; name: FUN_003bb930
 */


void FUN_003bb930(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*param_1 != 0) {
                    /* try { // try from 003bb94c to 003bb95f has its CatchHandler @ 003bbb54 */
    FUN_003e9ee0(param_1[1]);
    FUN_001136f0(*(undefined8 *)(param_1[1] + 0x748),(int)param_1[9]);
    *(undefined8 *)param_1[2] = 0;
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x10c)) &&
      ((*(uint *)((long)param_1 + 0x10c) & 0x7fffffff) != 0)) && (lVar2 = param_1[0x20], lVar2 != 0)
     ) {
                    /* try { // try from 003bb980 to 003bb993 has its CatchHandler @ 003bbb48 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = param_1[0x1e];
  if (((lVar2 != 0) && (-1 < (int)*(uint *)((long)param_1 + 0xfc))) &&
     ((*(uint *)((long)param_1 + 0xfc) & 0x7fffffff) != 0)) {
                    /* try { // try from 003bb9ac to 003bb9bf has its CatchHandler @ 003bbb50 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = param_1[0x1c];
  if (((lVar2 != 0) && (-1 < (int)*(uint *)((long)param_1 + 0xec))) &&
     ((*(uint *)((long)param_1 + 0xec) & 0x7fffffff) != 0)) {
                    /* try { // try from 003bb9d8 to 003bb9eb has its CatchHandler @ 003bbb4c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0xdc)) &&
      ((*(uint *)((long)param_1 + 0xdc) & 0x7fffffff) != 0)) && (lVar2 = param_1[0x1a], lVar2 != 0))
  {
                    /* try { // try from 003bba04 to 003bba17 has its CatchHandler @ 003bbb44 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0xcc)) &&
      ((*(uint *)((long)param_1 + 0xcc) & 0x7fffffff) != 0)) && (lVar2 = param_1[0x18], lVar2 != 0))
  {
                    /* try { // try from 003bba30 to 003bba43 has its CatchHandler @ 003bbb40 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0xbc)) &&
      ((*(uint *)((long)param_1 + 0xbc) & 0x7fffffff) != 0)) && (lVar2 = param_1[0x16], lVar2 != 0))
  {
                    /* try { // try from 003bba5c to 003bba6f has its CatchHandler @ 003bbb3c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0xac)) &&
      ((*(uint *)((long)param_1 + 0xac) & 0x7fffffff) != 0)) && (lVar2 = param_1[0x14], lVar2 != 0))
  {
                    /* try { // try from 003bba88 to 003bba9b has its CatchHandler @ 003bbb38 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x44)) &&
      ((*(uint *)((long)param_1 + 0x44) & 0x7fffffff) != 0)) && (lVar2 = param_1[7], lVar2 != 0)) {
                    /* try { // try from 003bbab4 to 003bbac7 has its CatchHandler @ 003bbb34 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x34)) &&
      ((*(uint *)((long)param_1 + 0x34) & 0x7fffffff) != 0)) && (lVar2 = param_1[5], lVar2 != 0)) {
                    /* try { // try from 003bbae0 to 003bbaf3 has its CatchHandler @ 003bbb30 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x24)) &&
      ((*(uint *)((long)param_1 + 0x24) & 0x7fffffff) != 0)) && (lVar2 = param_1[3], lVar2 != 0)) {
                    /* try { // try from 003bbb0c to 003bbb1f has its CatchHandler @ 003bbb2c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


