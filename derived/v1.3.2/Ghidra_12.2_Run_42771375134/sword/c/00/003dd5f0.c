/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dd5f0; name: FUN_003dd5f0
 */


void FUN_003dd5f0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (((-1 < (int)*(uint *)(param_1 + 0x3c)) && ((*(uint *)(param_1 + 0x3c) & 0x7fffffff) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x30), lVar2 != 0)) {
                    /* try { // try from 003dd618 to 003dd62b has its CatchHandler @ 003dd690 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if ((lVar2 != 0) && (-1 < *(int *)(param_1 + 0x28))) {
                    /* try { // try from 003dd63c to 003dd64f has its CatchHandler @ 003dd694 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (((-1 < (int)*(uint *)(param_1 + 0x1c)) && ((*(uint *)(param_1 + 0x1c) & 0x7fffffff) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
                    /* try { // try from 003dd66c to 003dd67f has its CatchHandler @ 003dd68c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


