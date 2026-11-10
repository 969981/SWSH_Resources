/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a88550; name: FUN_00a88550
 */


void FUN_00a88550(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  plVar1 = (long *)param_2[0x12];
  *param_2 = (long)(PTR_DAT_027194c0 + 0x10);
  if (param_2 + 0xe == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00a885a4;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a885a4:
  plVar1 = (long *)param_2[6];
  while (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    if (plVar1[3] != 0) {
      (**(code **)(*(long *)(plVar1[3] + 0x48) + 0x18))();
      plVar1[3] = 0;
    }
    (**(code **)(*(long *)param_2[7] + 0x18))((long *)param_2[7],plVar1,0x20,8);
    plVar1 = (long *)lVar3;
  }
  lVar3 = param_2[1];
  param_2[1] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],lVar3,param_2[2] << 3,8);
  }
                    /* WARNING: Could not recover jumptable at 0x00a88630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


