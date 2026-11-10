/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00754520; name: FUN_00754520
 */


void FUN_00754520(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar4 = param_1[1];
  if (lVar4 == lVar3) {
    lVar4 = lVar3;
  }
  else {
    lVar5 = 0;
    do {
      lVar1 = lVar4 + lVar5;
      lVar2 = *(long *)(lVar1 + -0x58);
      if (lVar2 != 0) {
        *(long *)(lVar1 + -0x50) = lVar2;
        (**(code **)(**(long **)(lVar1 + -0x40) + 0x18))
                  (*(long **)(lVar1 + -0x40),lVar2,*(long *)(lVar1 + -0x48) - lVar2,0x10);
      }
      if (*(long *)(lVar1 + -0x88) != 0) {
        (**(code **)(**(long **)(lVar1 + -0x70) + 0x18))
                  (*(long **)(lVar1 + -0x70),*(long *)(lVar1 + -0x88),*(long *)(lVar1 + -0x78) << 3,
                   1);
      }
      if (*(long *)(lVar1 + -0x90) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + -0x90) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + -0x90) = 0;
      }
      if (*(long *)(lVar1 + -0x98) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + -0x98) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + -0x98) = 0;
      }
      lVar5 = lVar5 + -0xb0;
    } while (lVar3 - lVar4 != lVar5);
    lVar4 = *param_1;
  }
  param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00754620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,param_1[2] - lVar4,0x10);
  return;
}


