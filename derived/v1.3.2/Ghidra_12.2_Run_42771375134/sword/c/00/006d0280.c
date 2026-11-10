/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d0280; name: FUN_006d0280
 */


void FUN_006d0280(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_02715308;
  param_1[-9] = (long)(PTR_DAT_02715308 + 0x10);
  *param_1 = (long)(puVar1 + 0x70);
  param_1[2] = (long)(puVar1 + 0xa0);
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x294));
  lVar2 = param_1[0x4e];
  param_1[0x4e] = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006d02e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x4f] + 0x18))
            ((long *)param_1[0x4f],lVar2,param_1[0x50],param_1[0x51]);
  return;
}


