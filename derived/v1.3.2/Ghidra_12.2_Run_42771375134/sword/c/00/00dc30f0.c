/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc30f0; name: FUN_00dc30f0
 */


void FUN_00dc30f0(long *param_1)

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
    puVar1 = PTR_DAT_027164e0 + 0x10;
    do {
      param_1[2] = lVar5 + -0x180;
      if (*(long *)(lVar5 + -0x40) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar5 + -0x40) + 0x48) + 0x18))();
        *(undefined8 *)(lVar5 + -0x40) = 0;
      }
      *(undefined **)(lVar5 + -0x170) = puVar1;
      plVar6 = (long *)(lVar5 + -0x168);
      if (*plVar6 == 0) {
        *plVar6 = 0;
        pcVar4 = *(code **)(lVar5 + -0xd8);
      }
      else {
        FUN_006e2100();
        lVar2 = *plVar6;
        *plVar6 = 0;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        }
        pcVar4 = *(code **)(lVar5 + -0xd8);
      }
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(lVar5 + -0xd0) = 0;
        *(undefined8 *)(lVar5 + -200) = 0;
        *(undefined8 *)(lVar5 + -0xe0) = 0;
        *(undefined8 *)(lVar5 + -0xd8) = 0;
        (*pcVar4)(lVar5 + -0xc0);
      }
      pcVar4 = *(code **)(lVar5 + -0x158);
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(lVar5 + -0x148) = 0;
        *(undefined8 *)(lVar5 + -0x150) = 0;
        *(undefined8 *)(lVar5 + -0x158) = 0;
        *(undefined8 *)(lVar5 + -0x160) = 0;
        (*pcVar4)(lVar5 + -0x140);
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
                    /* WARNING: Could not recover jumptable at 0x00dc3220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],lVar3,param_1[3] - lVar3,0x10);
  return;
}


