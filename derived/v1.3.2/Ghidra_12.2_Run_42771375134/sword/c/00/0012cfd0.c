/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012cfd0; name: FUN_0012cfd0
 */


void FUN_0012cfd0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (((-1 < (int)*(uint *)(param_1 + 0x34)) && ((*(uint *)(param_1 + 0x34) & 0x7fffffff) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
                    /* try { // try from 0012cff8 to 0012d00b has its CatchHandler @ 0012d078 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x24)) && ((*(uint *)(param_1 + 0x24) & 0x7fffffff) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x18), lVar2 != 0)) {
                    /* try { // try from 0012d024 to 0012d037 has its CatchHandler @ 0012d074 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x14)) && ((*(uint *)(param_1 + 0x14) & 0x7fffffff) != 0)) &&
     (lVar2 = *(long *)(param_1 + 8), lVar2 != 0)) {
                    /* try { // try from 0012d050 to 0012d063 has its CatchHandler @ 0012d070 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


