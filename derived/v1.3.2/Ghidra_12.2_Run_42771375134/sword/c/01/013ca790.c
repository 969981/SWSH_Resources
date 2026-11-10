/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013ca790; name: FUN_013ca790
 */


void FUN_013ca790(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  long local_28;
  
  cVar1 = *(char *)(param_1 + 0x84);
  FUN_013a5170(&local_28);
  lVar4 = local_28;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (cVar1 == '\0') {
    FUN_0130ab80(lVar4,1);
    FUN_013a5170(&local_28);
    lVar4 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    FUN_0130aba0(lVar4,1);
    uVar2 = FUN_01363360(*(undefined8 *)(param_1 + 0x98));
  }
  else {
    FUN_0130ab80(lVar4,0);
    FUN_013a5170(&local_28);
    lVar4 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    FUN_0130aba0(lVar4,0);
    uVar2 = FUN_01363360(*(undefined8 *)(param_1 + 0x98));
  }
  if ((uVar2 & 1) == 0) {
    FUN_013a5170(&local_28);
    lVar4 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(*(long *)(param_1 + 0x98) + 0xe1);
    FUN_013a5170(&local_28);
    lVar4 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    *(undefined1 *)(lVar4 + 0x509) = uVar3;
    FUN_013a5170(&local_28);
    lVar4 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    uVar3 = 1;
  }
  *(undefined1 *)(lVar4 + 0x508) = uVar3;
  return;
}


