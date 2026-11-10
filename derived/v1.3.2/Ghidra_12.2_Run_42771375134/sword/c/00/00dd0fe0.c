/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd0fe0; name: FUN_00dd0fe0
 */


void FUN_00dd0fe0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  lVar3 = param_1[1];
  lVar5 = param_1[2];
  if (lVar5 != lVar3) {
    puVar1 = PTR_DAT_0271e948 + 0x10;
    do {
      param_1[2] = lVar5 + -0x230;
      pcVar4 = *(code **)(lVar5 + -0x88);
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(lVar5 + -0x80) = 0;
        *(undefined8 *)(lVar5 + -0x78) = 0;
        *(undefined8 *)(lVar5 + -0x90) = 0;
        *(undefined8 *)(lVar5 + -0x88) = 0;
        (*pcVar4)(lVar5 + -0x70);
      }
      *(undefined **)(lVar5 + -0x1b0) = puVar1;
      plVar6 = (long *)(lVar5 + -0x1a8);
      if (*plVar6 == 0) {
        *plVar6 = 0;
        pcVar4 = *(code **)(lVar5 + -0x118);
      }
      else {
        FUN_006e2100();
        lVar2 = *plVar6;
        *plVar6 = 0;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        }
        pcVar4 = *(code **)(lVar5 + -0x118);
      }
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(lVar5 + -0x108) = 0;
        *(undefined8 *)(lVar5 + -0x110) = 0;
        *(undefined8 *)(lVar5 + -0x118) = 0;
        *(undefined8 *)(lVar5 + -0x120) = 0;
        (*pcVar4)(lVar5 + -0x100);
      }
      pcVar4 = *(code **)(lVar5 + -0x198);
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(lVar5 + -0x188) = 0;
        *(undefined8 *)(lVar5 + -400) = 0;
        *(undefined8 *)(lVar5 + -0x198) = 0;
        *(undefined8 *)(lVar5 + -0x1a0) = 0;
        (*pcVar4)(lVar5 + -0x180);
      }
      if (*plVar6 != 0) {
        (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
        *plVar6 = 0;
      }
      lVar5 = param_1[2];
    } while (lVar5 != lVar3);
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00dd112c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],lVar3,param_1[3] - lVar3,0x10);
  return;
}


