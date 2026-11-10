/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007194c0; name: FUN_007194c0
 */


void FUN_007194c0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_1;
  if (plVar6 == (long *)0x0) {
    return;
  }
  if ((long *)param_1[1] == plVar6) {
    plVar3 = plVar6;
  }
  else {
    puVar1 = PTR_DAT_02710808 + 0x10;
    plVar3 = (long *)param_1[1];
    do {
      plVar5 = plVar3 + -0x22;
      *plVar5 = (long)puVar1;
      plVar7 = plVar3 + -0x21;
      if (*plVar7 == 0) {
        *plVar7 = 0;
        pcVar4 = (code *)plVar3[-0xf];
      }
      else {
        FUN_006e2100(*plVar7,plVar5);
        lVar2 = *plVar7;
        *plVar7 = 0;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        }
        pcVar4 = (code *)plVar3[-0xf];
      }
      if (pcVar4 != (code *)0x0) {
        plVar3[-0xe] = 0;
        plVar3[-0xd] = 0;
        plVar3[-0x10] = 0;
        plVar3[-0xf] = 0;
        (*pcVar4)(plVar3 + -0xc);
      }
      pcVar4 = (code *)plVar3[-0x1f];
      if (pcVar4 != (code *)0x0) {
        plVar3[-0x1e] = 0;
        plVar3[-0x1d] = 0;
        plVar3[-0x20] = 0;
        plVar3[-0x1f] = 0;
        (*pcVar4)(plVar3 + -0x1c);
      }
      if (*plVar7 != 0) {
        (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
        *plVar7 = 0;
      }
      plVar3 = plVar5;
    } while (plVar6 != plVar5);
    plVar3 = (long *)*param_1;
  }
  param_1[1] = plVar6;
                    /* WARNING: Could not recover jumptable at 0x007195dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))
            ((long *)param_1[3],plVar3,param_1[2] - (long)plVar3,0x10);
  return;
}


