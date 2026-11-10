/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105e600; name: FUN_0105e600
 */


void FUN_0105e600(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  
  plVar1 = (long *)param_2[5];
  while (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    pcVar3 = (code *)plVar1[0xd];
    if (pcVar3 != (code *)0x0) {
      plVar1[0xe] = 0;
      plVar1[0xf] = 0;
      plVar1[0xc] = 0;
      plVar1[0xd] = 0;
      (*pcVar3)(plVar1 + 0x10);
    }
    lVar2 = plVar1[6];
    if (lVar2 != 0) {
      plVar1[7] = lVar2;
      (**(code **)(*(long *)plVar1[9] + 0x18))((long *)plVar1[9],lVar2,plVar1[8] - lVar2,4);
    }
    if (plVar1[5] != 0) {
      (**(code **)(*(long *)(plVar1[5] + 0x48) + 0x18))();
      plVar1[5] = 0;
    }
    (**(code **)(*(long *)param_2[6] + 0x18))((long *)param_2[6],plVar1,0xf0,0x10);
    plVar1 = (long *)lVar4;
  }
  lVar4 = *param_2;
  *param_2 = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)param_2[2] + 0x18))((long *)param_2[2],lVar4,param_2[1] << 3,0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x0105e6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


