/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e73cd0; name: FUN_00e73cd0
 */


void FUN_00e73cd0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  float fVar3;
  long local_30;
  long local_28;
  
  fVar3 = *(float *)(param_1 + 0xd8) - *(float *)(param_1 + 0xdc);
  *(float *)(param_1 + 0xd8) = fVar3;
  if (fVar3 <= 0.0) {
    plVar2 = *(long **)(param_1 + 0x78);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_30);
    local_28 = local_30;
    local_30 = 0;
    uVar1 = FUN_00e7cb20(&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    plVar2 = *(long **)(param_1 + 0x78);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*plVar2 + 0x180))(*(undefined4 *)(param_1 + 0xd8),plVar2,PTR_DAT_0271e870);
      return;
    }
  }
  (**(code **)(*plVar2 + 0x180))(0,plVar2,PTR_DAT_0271e870);
  (**(code **)(**(long **)(param_1 + 0x78) + 400))(*(long **)(param_1 + 0x78),PTR_DAT_0271e898,0);
  *(undefined4 *)(param_1 + 0x60) = 4;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  return;
}


