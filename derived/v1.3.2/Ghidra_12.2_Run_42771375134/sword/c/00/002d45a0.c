/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002d45a0; name: FUN_002d45a0
 */


void FUN_002d45a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_02712050 + 0x10);
  if ((char)param_1[7] != '\0') {
    lVar2 = param_1[3];
    if (lVar2 != 0) {
                    /* try { // try from 002d45d0 to 002d45e3 has its CatchHandler @ 002d461c */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
    lVar2 = param_1[2];
    param_1[3] = 0;
    if (lVar2 != 0) {
                    /* try { // try from 002d45f0 to 002d4603 has its CatchHandler @ 002d4618 */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
    param_1[2] = 0;
  }
  FUN_002d48b0(param_1);
  return;
}


