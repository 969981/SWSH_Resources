/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ac2b0; name: FUN_006ac2b0
 */


void FUN_006ac2b0(float param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_1 = *(float *)(param_2 + 8) * param_1;
  if (0.0 < param_1) {
    (**(code **)(*param_2 + 0x48))(param_1);
    puVar1 = (undefined8 *)param_2[3];
    for (puVar2 = (undefined8 *)param_2[2]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      FUN_006ac2b0(param_1,*puVar2,param_3);
    }
  }
  return;
}


