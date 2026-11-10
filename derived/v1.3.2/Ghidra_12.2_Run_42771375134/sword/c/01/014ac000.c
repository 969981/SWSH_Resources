/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ac000; name: FUN_014ac000
 */


void FUN_014ac000(long param_1,long *param_2)

{
  long *plVar1;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar1 = (long *)*param_2;
      if (param_2[0x1e] != 0) {
        (**(code **)(*(long *)(param_2[0x1e] + 0x48) + 0x18))();
        param_2[0x1e] = 0;
      }
      if (param_2[0x1a] != 0) {
        (**(code **)(*(long *)(param_2[0x1a] + 0x48) + 0x18))();
        param_2[0x1a] = 0;
      }
      if (param_2[0x16] != 0) {
        (**(code **)(*(long *)(param_2[0x16] + 0x48) + 0x18))();
        param_2[0x16] = 0;
      }
      if (param_2[0x12] != 0) {
        (**(code **)(*(long *)(param_2[0x12] + 0x48) + 0x18))();
        param_2[0x12] = 0;
      }
      if (param_2[0xe] != 0) {
        (**(code **)(*(long *)(param_2[0xe] + 0x48) + 0x18))();
        param_2[0xe] = 0;
      }
      if (param_2[10] != 0) {
        (**(code **)(*(long *)(param_2[10] + 0x48) + 0x18))();
        param_2[10] = 0;
      }
      if (param_2[6] != 0) {
        (**(code **)(*(long *)(param_2[6] + 0x48) + 0x18))();
        param_2[6] = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),param_2,0xf8,8);
      param_2 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return;
}


