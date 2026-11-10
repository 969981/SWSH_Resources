/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffaed0; name: FUN_00ffaed0
 */


void FUN_00ffaed0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x88);
  if (lVar4 != 0) {
    lVar3 = *(long *)(param_2 + 0x80) + 0xb0;
    do {
      pcVar2 = *(code **)(lVar3 + -0x18);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar3 + -0x10) = 0;
        *(undefined8 *)(lVar3 + -8) = 0;
        *(undefined8 *)(lVar3 + -0x20) = 0;
        *(undefined8 *)(lVar3 + -0x18) = 0;
        (*pcVar2)(lVar3);
      }
      pcVar2 = *(code **)(lVar3 + -0x98);
      lVar4 = lVar4 + -1;
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar3 + -0x90) = 0;
        *(undefined8 *)(lVar3 + -0x88) = 0;
        *(undefined8 *)(lVar3 + -0xa0) = 0;
        *(undefined8 *)(lVar3 + -0x98) = 0;
        (*pcVar2)(lVar3 + -0x80);
      }
      lVar3 = lVar3 + 0x110;
    } while (lVar4 != 0);
  }
  if (*(long *)(param_2 + 0x90) != 0) {
    (**(code **)(**(long **)(param_2 + 0x40) + 0x18))
              (*(long **)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x80),
               *(long *)(param_2 + 0x90) * 0x110,0x10);
  }
  plVar1 = *(long **)(param_2 + 0x70);
  if ((long *)(param_2 + 0x50) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00ffaf84:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00ffaf84;
  }
  plVar1 = *(long **)(param_2 + 0x30);
  if ((long *)(param_2 + 0x10) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00ffafb4;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00ffafb4:
                    /* WARNING: Could not recover jumptable at 0x00ffafd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


