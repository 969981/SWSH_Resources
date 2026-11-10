/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd0810; name: FUN_00dd0810
 */


void FUN_00dd0810(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar6 = param_1[1];
  lVar7 = lVar5;
  if (lVar6 != lVar5) {
    lVar7 = 0;
    puVar1 = PTR_DAT_0271e948 + 0x10;
    do {
      lVar2 = lVar6 + lVar7;
      pcVar4 = *(code **)(lVar2 + -0x88);
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(lVar2 + -0x80) = 0;
        *(undefined8 *)(lVar2 + -0x78) = 0;
        *(undefined8 *)(lVar2 + -0x90) = 0;
        *(undefined8 *)(lVar2 + -0x88) = 0;
        (*pcVar4)(lVar2 + -0x70);
      }
      *(undefined **)(lVar2 + -0x1b0) = puVar1;
      plVar8 = (long *)(lVar2 + -0x1a8);
      if (*plVar8 == 0) {
        *plVar8 = 0;
        pcVar4 = *(code **)(lVar2 + -0x118);
      }
      else {
        FUN_006e2100();
        lVar3 = *plVar8;
        *plVar8 = 0;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
        }
        pcVar4 = *(code **)(lVar2 + -0x118);
      }
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(lVar2 + -0x108) = 0;
        *(undefined8 *)(lVar2 + -0x110) = 0;
        *(undefined8 *)(lVar2 + -0x118) = 0;
        *(undefined8 *)(lVar2 + -0x120) = 0;
        (*pcVar4)(lVar2 + -0x100);
      }
      pcVar4 = *(code **)(lVar2 + -0x198);
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(lVar2 + -0x188) = 0;
        *(undefined8 *)(lVar2 + -400) = 0;
        *(undefined8 *)(lVar2 + -0x198) = 0;
        *(undefined8 *)(lVar2 + -0x1a0) = 0;
        (*pcVar4)(lVar2 + -0x180);
      }
      if (*plVar8 != 0) {
        (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
        *plVar8 = 0;
      }
      lVar7 = lVar7 + -0x230;
    } while (lVar5 - lVar6 != lVar7);
    lVar7 = *param_1;
  }
  param_1[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00dd0970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar7,param_1[2] - lVar7,0x10);
  return;
}


