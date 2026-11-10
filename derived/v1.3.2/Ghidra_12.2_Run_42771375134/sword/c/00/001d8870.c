/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d8870; name: FUN_001d8870
 */


void FUN_001d8870(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_02711088 + 0x10);
                    /* try { // try from 001d889c to 001d88a3 has its CatchHandler @ 001d8904 */
  FUN_001b8d00(*(undefined8 *)PTR_DAT_02711048,param_1);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94)) &&
     ((*(uint *)((long)param_1 + 0x94) & 0x7fffffff) != 0)) {
    plVar2 = (long *)param_1[0x11];
    if (param_1 + 0xc == plVar2) {
      *(undefined1 *)(param_1 + 0x10) = 0;
      FUN_003ba930(param_1 + 6);
      return;
    }
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 001d88c8 to 001d88db has its CatchHandler @ 001d8900 */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar2);
    }
  }
  FUN_003ba930(param_1 + 6);
  return;
}


