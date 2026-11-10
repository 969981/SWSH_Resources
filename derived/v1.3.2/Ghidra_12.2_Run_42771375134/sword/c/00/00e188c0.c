/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e188c0; name: FUN_00e188c0
 */


void FUN_00e188c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  lVar2 = param_1[1] - *param_1;
  if ((ulong)((lVar2 >> 3) * 0x4ec4ec4ec4ec4ec5) <
      (ulong)((param_1[2] - *param_1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
    plVar1 = param_1 + 3;
    local_50 = 0;
    plStack_48 = plVar1;
    if (lVar2 == 0) {
      local_68 = 0;
    }
    else {
      local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar2,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xb8))();
      }
    }
    local_60 = local_68 + (lVar2 >> 3) * 8;
    local_58 = local_60;
    local_50 = local_60;
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


