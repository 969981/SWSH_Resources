/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073d300; name: FUN_0073d300
 */


void FUN_0073d300(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  lVar4 = param_1[1];
  if (param_1[1] != lVar2) {
    do {
      if (*(long *)(lVar4 + -0xb0) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -0xb0) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -0xb0) = 0;
      }
      if (*(long *)(lVar4 + -0xb8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -0xb8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -0xb8) = 0;
      }
      if (*(long *)(lVar4 + -200) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -200) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -200) = 0;
      }
      lVar3 = lVar4 + -0x6b0;
      if (*(long *)(lVar4 + -0xd0) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -0xd0) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -0xd0) = 0;
      }
      lVar4 = *(long *)(lVar4 + -0xe0);
      if (lVar4 != 0) {
        lVar1 = lVar3;
        do {
          lVar4 = lVar4 + -1;
          FUN_00784490(lVar1);
          lVar1 = lVar1 + 0x1f0;
        } while (lVar4 != 0);
      }
      lVar4 = lVar3;
    } while (lVar3 != lVar2);
    lVar3 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x0073d3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar3,param_1[2] - lVar3,0x10);
  return;
}


