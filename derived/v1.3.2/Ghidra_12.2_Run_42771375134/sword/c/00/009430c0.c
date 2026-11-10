/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009430c0; name: FUN_009430c0
 */


void FUN_009430c0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0xd];
  *param_1 = (long)(PTR_DAT_02717e28 + 0x10);
  param_1[0xd] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[0xe] + 0x18))
              ((long *)param_1[0xe],puVar2,param_1[0xf],param_1[0x10]);
  }
  puVar2 = (undefined8 *)param_1[9];
  param_1[9] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[10] + 0x18))((long *)param_1[10],puVar2,param_1[0xb],param_1[0xc])
    ;
  }
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],lVar1,param_1[7],param_1[8]);
  }
  puVar2 = (undefined8 *)param_1[1];
  param_1[1] = 0;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar2)(puVar2);
                    /* WARNING: Could not recover jumptable at 0x009431a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],puVar2,param_1[3],param_1[4]);
  return;
}


