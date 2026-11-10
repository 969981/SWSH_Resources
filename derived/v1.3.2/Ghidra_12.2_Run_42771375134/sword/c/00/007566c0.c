/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007566c0; name: FUN_007566c0
 */


void FUN_007566c0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  
  lVar1 = *param_1;
  if ((ulong)((param_1[2] - lVar1 >> 6) * 0x6db6db6db6db6db7) < param_2) {
    lVar2 = param_1[1];
    local_50 = 0;
    local_48 = param_1 + 3;
    local_68 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x1c0,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    local_60 = local_68 + (lVar2 - lVar1 >> 6) * 0x40;
    local_50 = local_68 + param_2 * 0x1c0;
    local_58 = local_60;
    FUN_007572f0(param_1,&local_68);
    lVar1 = local_60;
    while (local_58 != lVar1) {
      local_58 = local_58 + -0x1c0;
      FUN_00756e00(local_48);
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)*local_48 + 0x18))((long *)*local_48,local_68,local_50 - local_68,0x10);
    }
  }
  return;
}


