/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00753ad0; name: FUN_00753ad0
 */


void FUN_00753ad0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  lVar2 = *param_1;
  if ((ulong)(param_1[2] - lVar2 >> 7) < param_2) {
    lVar3 = param_1[1];
    local_50 = 0;
    plStack_48 = param_1 + 3;
    local_68 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 7,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    local_60 = local_68 + (lVar3 - lVar2 >> 7) * 0x80;
    local_50 = local_68 + param_2 * 0x80;
    local_58 = local_60;
    FUN_00754630(param_1,&local_68);
    lVar2 = local_60;
    while (lVar3 = local_58, local_58 != lVar2) {
      lVar1 = local_58 + -0x38;
      local_58 = local_58 + -0x80;
      FUN_00754520(lVar1);
      lVar1 = *(long *)(lVar3 + -0x68);
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + -0x68) = 0;
      }
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)*plStack_48 + 0x18))
                ((long *)*plStack_48,local_68,local_50 - local_68,0x10);
    }
  }
  return;
}


