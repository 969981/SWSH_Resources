/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e44890; name: FUN_00e44890
 */


void FUN_00e44890(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long local_38;
  
  local_38 = *param_2;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00db6d00(param_1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar5 = *param_2;
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(lVar5 + 0xa0);
  plVar1 = *(long **)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(lVar5 + 0xa8);
  plVar2 = *(long **)(param_1 + 0x1e8);
  do {
    if (plVar2 == plVar1) goto LAB_00e44934;
    lVar4 = *plVar2;
    uVar3 = FUN_00df2e00(lVar4 + 0x50);
    plVar2 = plVar2 + 1;
  } while ((uVar3 & 1) == 0);
  FUN_00dee100(lVar4,lVar5 + 0xb0);
LAB_00e44934:
  *(undefined1 *)(param_1 + 0x5c9) = 1;
  return;
}


