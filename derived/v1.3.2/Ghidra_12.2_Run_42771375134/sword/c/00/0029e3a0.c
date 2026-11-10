/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029e3a0; name: FUN_0029e3a0
 */


void FUN_0029e3a0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02711f80 + 0x10;
  param_1[2] = (long)(PTR_DAT_02711f80 + 0xb8);
  *param_1 = (long)puVar1;
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
    lVar3 = param_1[9];
    if (lVar3 != 0) {
                    /* try { // try from 0029e3d8 to 0029e3eb has its CatchHandler @ 0029e428 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
    lVar3 = param_1[0xe];
    param_1[9] = 0;
    if (lVar3 != 0) {
      FUN_0029f0e0(lVar3);
                    /* try { // try from 0029e400 to 0029e413 has its CatchHandler @ 0029e424 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
    param_1[0xe] = 0;
  }
  return;
}


