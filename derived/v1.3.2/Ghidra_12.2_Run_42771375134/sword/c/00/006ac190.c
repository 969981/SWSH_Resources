/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ac190; name: FUN_006ac190
 */


void FUN_006ac190(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  (**(code **)(*param_2 + 0x28))();
  puVar1 = (undefined8 *)param_2[3];
  for (puVar2 = (undefined8 *)param_2[2]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_006ac190(param_1,*puVar2);
  }
  return;
}


