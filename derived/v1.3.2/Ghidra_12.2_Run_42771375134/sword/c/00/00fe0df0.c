/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe0df0; name: FUN_00fe0df0
 */


void FUN_00fe0df0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0xf];
  *param_1 = (long)(PTR_DAT_02723138 + 0x10);
  param_1[0xf] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0x10] + 0x18))
              ((long *)param_1[0x10],puVar1,param_1[0x11],param_1[0x12]);
  }
  puVar1 = (undefined8 *)param_1[0xb];
  param_1[0xb] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],puVar1,param_1[0xd],param_1[0xe]);
  }
  puVar1 = (undefined8 *)param_1[7];
  param_1[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],puVar1,param_1[9],param_1[10]);
  }
  puVar1 = (undefined8 *)param_1[3];
  param_1[3] = 0;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar1)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00fe0ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],puVar1,param_1[5],param_1[6]);
  return;
}


