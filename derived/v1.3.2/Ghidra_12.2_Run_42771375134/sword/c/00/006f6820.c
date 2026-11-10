/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f6820; name: FUN_006f6820
 */


void FUN_006f6820(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[1];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
    lVar2 = param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    param_1[2] = 0xffffffffffffffff;
    param_1[3] = 0;
  }
  return;
}


