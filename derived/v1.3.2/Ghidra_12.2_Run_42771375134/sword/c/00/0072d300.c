/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072d300; name: FUN_0072d300
 */


void FUN_0072d300(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_80;
  uint local_78;
  long local_70;
  undefined4 local_68;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if ((ulong)(param_1[2] << 6) < param_2) {
    plVar4 = (long *)param_1[3];
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_40 = 0;
    local_48 = plVar4;
    if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar1 = (param_2 - 1 >> 6) + 1;
    lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar1 * 8,1);
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    local_58 = 0;
    local_70 = *param_1;
    local_78 = (uint)param_1[1] & 0x3f;
    local_80 = local_70 + ((ulong)param_1[1] >> 3 & 0x1ffffffffffffff8);
    local_68 = 0;
    local_60 = lVar2;
    local_50 = lVar1;
    FUN_0072d420(&local_60,&local_70,&local_80);
    lVar2 = *param_1;
    *param_1 = local_60;
    lVar3 = param_1[1];
    param_1[1] = local_58;
    lVar1 = param_1[2];
    plVar4 = (long *)param_1[3];
    param_1[2] = local_50;
    param_1[3] = (long)local_48;
    if (lVar2 != 0) {
      local_60 = lVar2;
      local_58 = lVar3;
      local_50 = lVar1;
      local_48 = plVar4;
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar2,lVar1 << 3,1);
    }
  }
  return;
}


