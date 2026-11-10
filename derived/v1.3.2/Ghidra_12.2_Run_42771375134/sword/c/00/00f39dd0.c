/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f39dd0; name: FUN_00f39dd0
 */


void FUN_00f39dd0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_2 + 0x28) != 0) {
    lVar4 = *(long *)(param_2 + 0x18);
    plVar2 = *(long **)(param_2 + 0x20);
    *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar4 + 8);
    **(long **)(lVar4 + 8) = *plVar2;
    *(undefined8 *)(param_2 + 0x28) = 0;
    while (plVar2 != (long *)(param_2 + 0x18)) {
      plVar1 = (long *)plVar2[1];
      plVar3 = (long *)plVar2[2];
      plVar2[2] = 0;
      if (plVar3 != (long *)0x0) {
        lVar4 = *plVar3;
        if (lVar4 != 0) {
          plVar3[1] = lVar4;
          (**(code **)(*(long *)plVar3[3] + 0x18))((long *)plVar3[3],lVar4,plVar3[2] - lVar4,8);
        }
        (**(code **)(*(long *)plVar2[3] + 0x18))((long *)plVar2[3],plVar3,plVar2[4],plVar2[5]);
      }
      (**(code **)(**(long **)(param_2 + 0x30) + 0x18))(*(long **)(param_2 + 0x30),plVar2,0x30,8);
      plVar2 = plVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00f39eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


