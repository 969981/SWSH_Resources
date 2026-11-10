/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c9d1e0; name: FUN_00c9d1e0
 */


void FUN_00c9d1e0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar1 != 0) {
    FUN_00784490(lVar1);
    (**(code **)(*(long *)param_1[0xd] + 0x18))
              ((long *)param_1[0xd],lVar1,param_1[0xe],param_1[0xf]);
  }
  lVar1 = param_1[8];
  param_1[8] = 0;
  if (lVar1 != 0) {
    FUN_00784490(lVar1);
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],lVar1,param_1[10],param_1[0xb]);
  }
  lVar1 = param_1[4];
  param_1[4] = 0;
  if (lVar1 != 0) {
    FUN_00784490(lVar1);
    (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],lVar1,param_1[6],param_1[7]);
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_00784490(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00c9d2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],lVar1,param_1[2],param_1[3]);
  return;
}


