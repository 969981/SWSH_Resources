/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00744660; name: FUN_00744660
 */


void FUN_00744660(long *param_1)

{
  long lVar1;
  
  FUN_019a42e0(param_1 + 0x44);
  FUN_019a42e0(param_1 + 0x3e);
  FUN_019a42e0(param_1 + 0x38);
  FUN_019a42e0(param_1 + 0x32);
  FUN_019a4750((long)param_1 + 0x174);
  FUN_019a4750(param_1 + 0x2b);
  FUN_019a4750((long)param_1 + 0x13c);
  FUN_019a4750(param_1 + 0x24);
  FUN_019a44f0(param_1 + 0x1f);
  FUN_019a44f0(param_1 + 0x1a);
  FUN_019a44f0(param_1 + 0x15);
  FUN_019a44f0(param_1 + 0x10);
  lVar1 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[0xd] + 0x18))
              ((long *)param_1[0xd],lVar1,param_1[0xe],param_1[0xf]);
  }
  lVar1 = param_1[8];
  param_1[8] = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],lVar1,param_1[10],param_1[0xb]);
  }
  lVar1 = param_1[4];
  param_1[4] = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],lVar1,param_1[6],param_1[7]);
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00744760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],lVar1,param_1[2],param_1[3]);
  return;
}


