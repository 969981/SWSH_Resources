/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108f300; name: FUN_0108f300
 */


void FUN_0108f300(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x4e0);
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x4f0);
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x88) == 0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    lVar1 = *(long *)(param_1 + 0x4d0);
    *(undefined8 *)(param_1 + 0x4d0) = 0;
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x88),param_1 + 0x80);
    lVar1 = *(long *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x4d0);
    *(undefined8 *)(param_1 + 0x4d0) = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x1a8) == 0) {
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    lVar1 = *(long *)(param_1 + 0x2c8);
    *(undefined8 *)(param_1 + 0x580) = 0;
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x1a8),param_1 + 0x1a0);
    lVar1 = *(long *)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x2c8);
    *(undefined8 *)(param_1 + 0x580) = 0;
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
  FUN_006e2100(lVar1,param_1 + 0x2c0);
  lVar1 = *(long *)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}


