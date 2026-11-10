/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00911f50; name: FUN_00911f50
 */


void FUN_00911f50(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = param_1[0xc1];
  puVar1 = PTR_DAT_02717d58 + 0x48;
  *param_1 = (long)(PTR_DAT_02717d58 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[0xc1] = 0;
  if (lVar2 != 0) {
    FUN_008d61f0(lVar2);
    (**(code **)(*(long *)param_1[0xc2] + 0x18))
              ((long *)param_1[0xc2],lVar2,param_1[0xc3],param_1[0xc4]);
  }
  puVar3 = (undefined8 *)param_1[0xbd];
  param_1[0xbd] = 0;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar3)(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00911fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0xbe] + 0x18))
            ((long *)param_1[0xbe],puVar3,param_1[0xbf],param_1[0xc0]);
  return;
}


