/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b44c0; name: FUN_014b44c0
 */


void FUN_014b44c0(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_0272a220;
  puVar2 = (undefined8 *)param_1[0x81];
  param_1[0x81] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar2)(puVar2);
                    /* WARNING: Could not recover jumptable at 0x014b451c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x82] + 0x18))
            ((long *)param_1[0x82],puVar2,param_1[0x83],param_1[0x84]);
  return;
}


