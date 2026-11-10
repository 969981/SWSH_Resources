/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001da5c0; name: FUN_001da5c0
 */


void FUN_001da5c0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_02711098 + 0x10);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1cc)) &&
     ((*(uint *)((long)param_1 + 0x1cc) & 0x7fffffff) != 0)) {
    plVar2 = (long *)param_1[0x38];
    if (param_1 + 0x33 == plVar2) {
      *(undefined1 *)(param_1 + 0x37) = 0;
    }
    else if (plVar2 != (long *)0x0) {
                    /* try { // try from 001da604 to 001da617 has its CatchHandler @ 001da678 */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar2);
    }
  }
  *param_1 = (long)(PTR_DAT_027110b0 + 0x10);
  thunk_FUN_003ba2c0(param_1 + 0x10);
  *param_1 = (long)(PTR_DAT_02711090 + 0x10);
  FUN_00206e80(param_1 + 5);
  *param_1 = (long)(PTR_DAT_027110a0 + 0x10);
                    /* try { // try from 001da660 to 001da667 has its CatchHandler @ 001da67c */
  FUN_001e1ec0(param_1);
  FUN_001e0d60(param_1 + 3);
  return;
}


