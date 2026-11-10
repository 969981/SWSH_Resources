/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007548c0; name: FUN_007548c0
 */


void FUN_007548c0(undefined8 *param_1,undefined8 *param_2)

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
  lVar1 = param_2[4];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  param_1[5] = 0;
  param_1[6] = 0;
  plVar2 = (long *)param_2[8];
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = plVar2;
  *(undefined4 *)(param_1 + 10) = 0;
  lVar1 = param_2[6];
  if (lVar1 != 0) {
    if (lVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar1 = (lVar1 - 1U >> 6) + 1;
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,lVar1 * 8,1);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[8] + 0xb8))();
    }
    param_1[5] = lVar3;
    param_1[6] = 0;
    param_1[7] = lVar1;
    FUN_0072ccd0(param_1 + 5,param_2[5],0,param_2[5] + ((ulong)param_2[6] >> 3 & 0x1ffffffffffffff8)
                 ,param_2[6] & 0x3f);
  }
  FUN_00754a00(param_1 + 0xb,param_2 + 0xb);
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  return;
}


