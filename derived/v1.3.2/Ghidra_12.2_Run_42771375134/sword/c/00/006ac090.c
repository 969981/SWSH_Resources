/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ac090; name: FUN_006ac090
 */


void FUN_006ac090(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  (**(code **)(*param_4 + 0x10))();
  puVar1 = (undefined8 *)param_4[3];
  for (puVar2 = (undefined8 *)param_4[2]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_006ac090(param_1,param_2,param_3,*puVar2,param_5,param_6,param_7);
  }
  return;
}


