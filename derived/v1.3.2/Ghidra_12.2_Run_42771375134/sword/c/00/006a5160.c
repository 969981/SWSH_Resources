/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a5160; name: FUN_006a5160
 */


void FUN_006a5160(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  lVar2 = *param_1;
  if ((ulong)((param_1[2] - lVar2 >> 4) * 0x6db6db6db6db6db7) < param_2) {
    lVar4 = param_1[1];
    local_50 = 0;
    plStack_48 = param_1 + 3;
    local_68 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x70,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    local_60 = local_68 + (lVar4 - lVar2 >> 4) * 0x10;
    local_50 = local_68 + param_2 * 0x70;
    local_58 = local_60;
    FUN_006a7ae0(param_1,&local_68);
    lVar2 = local_60;
    while (lVar4 = local_58, local_58 != lVar2) {
      lVar3 = local_58 + -0x70;
      plVar1 = (long *)(local_58 + -0x28);
      local_58 = lVar3;
      if (*plVar1 != 0) {
        (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -0x28) = 0;
      }
      if (*(long *)(lVar4 + -0x48) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -0x48) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -0x48) = 0;
      }
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)*plStack_48 + 0x18))
                ((long *)*plStack_48,local_68,local_50 - local_68,0x10);
    }
  }
  return;
}


