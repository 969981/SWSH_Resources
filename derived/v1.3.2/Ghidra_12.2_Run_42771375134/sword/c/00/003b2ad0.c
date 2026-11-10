/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b2ad0; name: FUN_003b2ad0
 */


void FUN_003b2ad0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (((-1 < (int)*(uint *)(param_1 + 0x74)) && ((*(uint *)(param_1 + 0x74) & 0x7fffffff) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x68), lVar2 != 0)) {
                    /* try { // try from 003b2af8 to 003b2b0b has its CatchHandler @ 003b2c38 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)(param_1 + 100)) && ((*(uint *)(param_1 + 100) & 0x7fffffff) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x58), lVar2 != 0)) {
                    /* try { // try from 003b2b24 to 003b2b37 has its CatchHandler @ 003b2c34 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x54)) && ((*(uint *)(param_1 + 0x54) & 0x7fffffff) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x48), lVar2 != 0)) {
                    /* try { // try from 003b2b50 to 003b2b63 has its CatchHandler @ 003b2c30 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x44)) && ((*(uint *)(param_1 + 0x44) & 0x7fffffff) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
                    /* try { // try from 003b2b7c to 003b2b8f has its CatchHandler @ 003b2c2c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x34)) && ((*(uint *)(param_1 + 0x34) & 0x7fffffff) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
                    /* try { // try from 003b2ba8 to 003b2bbb has its CatchHandler @ 003b2c28 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x24)) && ((*(uint *)(param_1 + 0x24) & 0x7fffffff) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x18), lVar2 != 0)) {
                    /* try { // try from 003b2bd4 to 003b2be7 has its CatchHandler @ 003b2c24 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x14)) && ((*(uint *)(param_1 + 0x14) & 0x7fffffff) != 0)) &&
     (lVar2 = *(long *)(param_1 + 8), lVar2 != 0)) {
                    /* try { // try from 003b2c00 to 003b2c13 has its CatchHandler @ 003b2c20 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


