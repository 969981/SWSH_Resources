/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007425b0; name: FUN_007425b0
 */


void FUN_007425b0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    lVar2 = lVar3 + -0x6b0;
    param_1[2] = lVar2;
    if (*(long *)(lVar3 + -0xb0) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + -0xb0) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + -0xb0) = 0;
    }
    if (*(long *)(lVar3 + -0xb8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + -0xb8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + -0xb8) = 0;
    }
    if (*(long *)(lVar3 + -200) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + -200) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + -200) = 0;
    }
    if (*(long *)(lVar3 + -0xd0) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + -0xd0) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + -0xd0) = 0;
    }
    for (lVar3 = *(long *)(lVar3 + -0xe0); lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_00784490(lVar2);
      lVar2 = lVar2 + 0x1f0;
    }
    lVar3 = param_1[2];
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00742694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],lVar1,param_1[3] - lVar1,0x10);
  return;
}


