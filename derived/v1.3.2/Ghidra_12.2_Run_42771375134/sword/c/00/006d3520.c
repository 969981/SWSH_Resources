/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d3520; name: FUN_006d3520
 */


void FUN_006d3520(long *param_1)

{
  long lVar1;
  
  FUN_006d36a0();
  lVar1 = (ulong)*(byte *)((long)param_1 + 0x161) << 3;
  do {
    FUN_006d0420(*(undefined8 *)((long)param_1 + lVar1 + 0x10));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  FUN_006d36a0(param_1);
  lVar1 = param_1[0x24];
  if (lVar1 != 0) {
    param_1[0x25] = lVar1;
    (**(code **)(*(long *)param_1[0x27] + 0x18))
              ((long *)param_1[0x27],lVar1,param_1[0x26] - lVar1,8);
  }
  lVar1 = param_1[0x1e];
  if (lVar1 != 0) {
    param_1[0x1f] = lVar1;
    (**(code **)(*(long *)param_1[0x21] + 0x18))
              ((long *)param_1[0x21],lVar1,param_1[0x20] - lVar1,8);
  }
  lVar1 = param_1[0x18];
  if (lVar1 != 0) {
    param_1[0x19] = lVar1;
    (**(code **)(*(long *)param_1[0x1b] + 0x18))
              ((long *)param_1[0x1b],lVar1,param_1[0x1a] - lVar1,8);
  }
  FUN_006d5230(param_1 + 0xc);
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x4c));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 5));
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  return;
}


