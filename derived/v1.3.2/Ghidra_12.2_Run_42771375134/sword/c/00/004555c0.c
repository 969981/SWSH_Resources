/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004555c0; name: FUN_004555c0
 */


void FUN_004555c0(long param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *local_48;
  ulong uStack_40;
  float local_38;
  undefined4 local_34;
  int iStack_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  plVar1 = (long *)0x0;
  if (param_5 == 0) {
    plVar1 = (long *)(param_1 + 0x100);
  }
  plVar3 = (long *)(param_1 + 0x128);
  if (param_5 != 5) {
    plVar3 = plVar1;
  }
  plVar3 = (long *)*plVar3;
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return;
    }
    if (*(int *)(plVar3 + 1) == param_2) break;
    plVar3 = (long *)*plVar3;
  }
  *(undefined1 *)((long)plVar3 + 0x2c) = 1;
  if (plVar3[4] != 0) {
    FUN_004be340(0,*(undefined8 *)PTR_DAT_02712b18,plVar3[4],param_5,param_3,param_4,0);
    return;
  }
  local_48 = plVar3 + 2;
  if ((param_3 == 0) || (local_38 = *(float *)(plVar3 + 5), local_38 == 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x004556e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*local_48)(0,local_48,param_5,1);
    return;
  }
  uStack_40 = (ulong)param_5;
  local_34 = 0;
  local_28 = 0x101;
  local_26 = 0;
  iStack_30 = param_3;
  local_2c = param_4;
  uVar2 = FUN_004bde40(*(undefined8 *)PTR_DAT_02712b18,&local_48,1,0);
  plVar3[4] = uVar2;
  return;
}


