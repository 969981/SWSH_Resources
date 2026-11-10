/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013d8680; name: FUN_013d8680
 */


undefined8 * FUN_013d8680(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar3 = param_2[3];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = param_1[3];
  param_1[3] = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  memcpy(param_1 + 4,param_2 + 4,0x1b8);
  lVar3 = 0x1d8;
  do {
    lVar1 = *(long *)((long)param_2 + lVar3);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)((long)param_1 + lVar3);
    *(long *)((long)param_1 + lVar3) = lVar1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x278);
  do {
    lVar1 = *(long *)((long)param_2 + lVar3);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)((long)param_1 + lVar3);
    *(long *)((long)param_1 + lVar3) = lVar1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x318);
  memcpy(param_1 + 99,param_2 + 99,0xf7);
  lVar3 = param_2[0x82];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = param_1[0x82];
  param_1[0x82] = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = param_2[0x83];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = param_1[0x83];
  param_1[0x83] = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = param_2[0x84];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = param_1[0x84];
  param_1[0x84] = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = param_2[0x85];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = param_1[0x85];
  param_1[0x85] = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined2 *)(param_1 + 0x86) = *(undefined2 *)(param_2 + 0x86);
  return param_1;
}


