/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d0210; name: FUN_006d0210
 */


void FUN_006d0210(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02715308 + 0x70;
  puVar2 = PTR_DAT_02715308 + 0xa0;
  *param_1 = (long)(PTR_DAT_02715308 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[0xb] = (long)puVar2;
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x2dc));
  lVar3 = param_1[0x57];
  param_1[0x57] = 0;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006d0270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x58] + 0x18))
            ((long *)param_1[0x58],lVar3,param_1[0x59],param_1[0x5a]);
  return;
}


