/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073edc0; name: FUN_0073edc0
 */


void FUN_0073edc0(long param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *(long *)(param_1 + 0x7b8);
  uVar3 = (ulong)*param_2;
  if ((ulong)((*(long *)(param_1 + 0x7c0) - lVar4 >> 4) * -0x1084210842108421) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar2 = lVar4 + uVar3 * 0x1f0;
  lVar1 = *(long *)(lVar2 + 0x168);
  *(undefined8 *)(lVar2 + 0x168) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar2 = lVar4 + uVar3 * 0x1f0;
  lVar1 = *(long *)(lVar2 + 0x150);
  *(undefined8 *)(lVar2 + 0x150) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar2 = lVar4 + uVar3 * 0x1f0;
  lVar1 = *(long *)(lVar2 + 0x158);
  *(undefined8 *)(lVar2 + 0x158) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar2 = lVar4 + uVar3 * 0x1f0;
  lVar1 = *(long *)(lVar2 + 0x160);
  *(undefined8 *)(lVar2 + 0x160) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  plVar5 = (long *)(lVar4 + uVar3 * 0x1f0 + 0x48);
  if (*plVar5 == 0) {
    *plVar5 = 0;
  }
  else {
    FUN_006e2100(*plVar5,lVar4 + uVar3 * 0x1f0 + 0x40);
    lVar4 = *plVar5;
    *plVar5 = 0;
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0073eec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


