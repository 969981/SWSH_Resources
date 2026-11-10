/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c83200; name: FUN_00c83200
 */


void FUN_00c83200(long *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = param_1[6];
  *param_1 = (long)(PTR_DAT_0271c3e8 + 0x10);
  param_1[6] = 0;
  if (lVar2 != 0) {
    FUN_00c83510(param_1 + 7);
  }
  lVar2 = param_1[2];
  param_1[2] = 0;
  if (lVar2 == 0) {
    return;
  }
  plVar1 = *(long **)(lVar2 + 0x30);
  if ((long *)(lVar2 + 0x10) == plVar1) {
    pcVar3 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00c83278;
    pcVar3 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar3)();
LAB_00c83278:
                    /* WARNING: Could not recover jumptable at 0x00c83294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar2,param_1[4],param_1[5]);
  return;
}


