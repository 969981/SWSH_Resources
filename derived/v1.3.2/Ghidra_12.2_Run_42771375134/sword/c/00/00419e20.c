/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00419e20; name: FUN_00419e20
 */


void FUN_00419e20(long *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_00408790(param_1,param_3);
  puVar1 = PTR_DAT_02712bd8 + 0xa0;
  puVar2 = PTR_DAT_02712bd8 + 200;
  *param_1 = (long)(PTR_DAT_02712bd8 + 0x10);
  param_1[3] = (long)puVar1;
  param_1[5] = (long)puVar2;
  FUN_0041b250(param_1 + 0xc);
  puVar1 = PTR_DAT_02712be0;
  *(undefined8 *)((long)param_1 + 0x8d) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xc] = (long)(puVar1 + 0x10);
  param_1[0xf] = (long)param_2;
  if (param_2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00419e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}


