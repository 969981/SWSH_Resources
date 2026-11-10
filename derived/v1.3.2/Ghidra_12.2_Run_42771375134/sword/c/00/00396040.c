/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00396040; name: FUN_00396040
 */


void FUN_00396040(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_027126d8 + 0x10);
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
    lVar2 = param_1[6];
    if (lVar2 != 0) {
                    /* try { // try from 00396070 to 00396083 has its CatchHandler @ 00396108 */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
    lVar2 = param_1[3];
    if (lVar2 != 0) {
                    /* try { // try from 0039608c to 0039609f has its CatchHandler @ 00396104 */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
    lVar2 = param_1[7];
    if (lVar2 != 0) {
                    /* try { // try from 003960a8 to 003960bb has its CatchHandler @ 00396108 */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
    lVar2 = param_1[4];
    if (lVar2 != 0) {
                    /* try { // try from 003960c4 to 003960d7 has its CatchHandler @ 00396104 */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
    lVar2 = param_1[9];
    if (lVar2 != 0) {
                    /* try { // try from 003960e0 to 003960f3 has its CatchHandler @ 00396100 */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
  }
  return;
}


