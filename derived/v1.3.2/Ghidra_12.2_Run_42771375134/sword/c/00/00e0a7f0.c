/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e0a7f0; name: FUN_00e0a7f0
 */


void FUN_00e0a7f0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  lVar1 = *param_1;
  if ((ulong)((param_1[2] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5) < param_2) {
    lVar2 = param_1[1];
    local_50 = 0;
    plStack_48 = param_1 + 3;
    local_68 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x68,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    local_60 = local_68 + (lVar2 - lVar1 >> 3) * 8;
    local_50 = local_68 + param_2 * 0x68;
    local_58 = local_60;
    FUN_00e1cb30(param_1,&local_68);
    if (local_58 != local_60) {
      local_58 = local_58 +
                 ((ulong)((local_58 + -0x68) - local_60) / 0x68 ^ 0xffffffffffffffff) * 0x68;
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)*plStack_48 + 0x18))((long *)*plStack_48,local_68,local_50 - local_68,8)
      ;
    }
  }
  return;
}


