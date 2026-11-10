/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003de470; name: FUN_003de470
 */


void FUN_003de470(float param_1,long param_2,long *param_3)

{
  long lVar1;
  
  if (param_1 == 0.0) {
    return;
  }
  *(float *)(param_2 + 0x7b8) = param_1;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  else {
    param_1 = 1.0 / param_1;
  }
  *(float *)(param_2 + 0x7bc) = param_1;
  FUN_003de1c0(param_2);
  FUN_003de560(param_2);
  lVar1 = param_2 + 0x1e38;
  *(undefined4 *)(param_2 + 0x1e58) = 1;
  *(long **)(param_2 + 0x1e50) = param_3;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x20))(param_3);
    *(undefined8 *)(param_2 + 0x1e48) = *(undefined8 *)(*(long *)(param_2 + 0x1e50) + 0x10);
  }
  *(undefined4 *)(param_2 + 0x1e90) = 1;
  *(long *)(param_2 + 0x1e88) = lVar1;
  (**(code **)(*(long *)(param_2 + 0x1e38) + 0x20))(lVar1);
  *(undefined8 *)(param_2 + 0x1e80) = *(undefined8 *)(*(long *)(param_2 + 0x1e88) + 0x10);
  (**(code **)(**(long **)(param_2 + 0x1e48) + 0xa0))(*(long **)(param_2 + 0x1e48),lVar1);
                    /* WARNING: Could not recover jumptable at 0x003de55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x1e80) + 0xa0))(*(long **)(param_2 + 0x1e80),param_2 + 0x1e70)
  ;
  return;
}


