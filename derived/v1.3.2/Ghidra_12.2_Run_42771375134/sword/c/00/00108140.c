/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00108140; name: FUN_00108140
 */


void FUN_00108140(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0xc];
  *param_1 = (long)(PTR_DAT_02710a38 + 0x10);
  param_1[0xc] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0xd] + 0x18))
              ((long *)param_1[0xd],puVar1,param_1[0xe],param_1[0xf]);
  }
  puVar1 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],puVar1,param_1[10],param_1[0xb]);
  }
  puVar1 = (undefined8 *)param_1[4];
  param_1[4] = 0;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar1)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00108200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],puVar1,param_1[6],param_1[7]);
  return;
}


