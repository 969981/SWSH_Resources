/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0056da40; name: FUN_0056da40
 */


undefined8 FUN_0056da40(long *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (((long *)*param_1 == (long *)0x0) ||
     (uVar1 = (**(code **)(*(long *)*param_1 + 0x58))(), -1 < (int)uVar1)) {
    if (param_2 == 0) {
      if ((long *)*param_1 != (long *)0x0) {
        (**(code **)(*(long *)*param_1 + 8))();
        *param_1 = 0;
      }
      if (param_1[0x5344] != 0) {
        FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,param_1[0x5344] + -8);
        param_1[0x5344] = 0;
      }
    }
    plVar2 = (long *)param_1[0x5337];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
      param_1[0x5337] = 0;
    }
    if ((long *)param_1[0x5338] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x5338] + 8))();
      param_1[0x5338] = 0;
    }
    if ((long *)param_1[0x5339] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x5339] + 8))();
      param_1[0x5339] = 0;
    }
    if ((long *)param_1[0x533a] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x533a] + 8))();
      param_1[0x533a] = 0;
    }
    if ((long *)param_1[0x533b] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x533b] + 8))();
      param_1[0x533b] = 0;
    }
    if ((long *)param_1[0x533c] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x533c] + 8))();
      param_1[0x533c] = 0;
    }
    if ((long *)param_1[0x533d] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x533d] + 8))();
      param_1[0x533d] = 0;
    }
    if ((long *)param_1[0x533e] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x533e] + 8))();
      param_1[0x533e] = 0;
    }
    if ((long *)param_1[0x533f] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x533f] + 8))();
      param_1[0x533f] = 0;
    }
    if ((long *)param_1[0x5340] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x5340] + 8))();
      param_1[0x5340] = 0;
    }
    if ((long *)param_1[0x5341] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x5341] + 8))();
      param_1[0x5341] = 0;
    }
    if ((long *)param_1[0x5342] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x5342] + 8))();
      param_1[0x5342] = 0;
    }
    uVar1 = 0;
    if ((long *)param_1[0x5343] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x5343] + 8))();
      uVar1 = 0;
      param_1[0x5343] = 0;
    }
  }
  return uVar1;
}


