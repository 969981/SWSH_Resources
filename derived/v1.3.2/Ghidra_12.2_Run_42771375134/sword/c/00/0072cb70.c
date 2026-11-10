/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072cb70; name: FUN_0072cb70
 */


void FUN_0072cb70(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  param_1[4] = 0;
  param_1[5] = 0;
  plVar2 = (long *)param_2[7];
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = plVar2;
  *(undefined4 *)(param_1 + 9) = 0;
  lVar1 = param_2[5];
  if (lVar1 != 0) {
    if (lVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar1 = (lVar1 - 1U >> 6) + 1;
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,lVar1 * 8,1);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[7] + 0xb8))();
    }
    param_1[4] = lVar3;
    param_1[5] = 0;
    param_1[6] = lVar1;
    FUN_0072ccd0(param_1 + 4,param_2[4],0,param_2[4] + ((ulong)param_2[5] >> 3 & 0x1ffffffffffffff8)
                 ,param_2[5] & 0x3f);
  }
  FUN_0072d0f0(param_1 + 10,param_2 + 10);
  FUN_0072d1f0(param_1 + 0x10,param_2 + 0x10);
  lVar1 = param_2[0x16];
  param_1[0x16] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar1 = param_2[0x17];
  param_1[0x17] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar1 = param_2[0x18];
  param_1[0x18] = lVar1;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0072ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  return;
}


