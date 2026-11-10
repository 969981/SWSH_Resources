/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0155b530; name: FUN_0155b530
 */


void FUN_0155b530(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = (long)(PTR_DAT_0272ae58 + 0x10);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xf));
  puVar2 = (undefined8 *)param_1[0xb];
  param_1[0xb] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],puVar2,param_1[0xd],param_1[0xe]);
  }
  puVar2 = (undefined8 *)param_1[7];
  param_1[7] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],puVar2,param_1[9],param_1[10]);
  }
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    return;
  }
  param_1[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x0155b5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar1,param_1[3] - lVar1,8);
  return;
}


