/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007550b0; name: FUN_007550b0
 */


void FUN_007550b0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar2) {
    param_1[2] = lVar3 + -0xb0;
    lVar1 = *(long *)(lVar3 + -0x58);
    if (lVar1 != 0) {
      *(long *)(lVar3 + -0x50) = lVar1;
      (**(code **)(**(long **)(lVar3 + -0x40) + 0x18))
                (*(long **)(lVar3 + -0x40),lVar1,*(long *)(lVar3 + -0x48) - lVar1,0x10);
    }
    if (*(long *)(lVar3 + -0x88) != 0) {
      (**(code **)(**(long **)(lVar3 + -0x70) + 0x18))
                (*(long **)(lVar3 + -0x70),*(long *)(lVar3 + -0x88),*(long *)(lVar3 + -0x78) << 3,1)
      ;
    }
    if (*(long *)(lVar3 + -0x90) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + -0x90) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + -0x90) = 0;
    }
    if (*(long *)(lVar3 + -0x98) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + -0x98) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + -0x98) = 0;
    }
    lVar3 = param_1[2];
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0075518c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],lVar2,param_1[3] - lVar2,0x10);
  return;
}


