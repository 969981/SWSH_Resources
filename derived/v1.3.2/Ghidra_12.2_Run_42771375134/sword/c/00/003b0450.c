/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b0450; name: FUN_003b0450
 */


void FUN_003b0450(long *param_1,long *param_2)

{
  uint uVar1;
  
  if (*param_1 != 0) {
    if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) != 0 || (int)param_1[1] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2,*param_1,*(uint *)((long)param_1 + 0xc) << 4);
    }
  }
  if (param_1[2] != 0) {
    if ((*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) != 0 || (int)param_1[3] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2,param_1[2],*(uint *)((long)param_1 + 0x1c) << 2);
    }
  }
  if (param_1[4] != 0) {
    uVar1 = *(uint *)((long)param_1 + 0x2c) & 0x7fffffff;
    if (uVar1 != 0 || (int)param_1[5] != 0) {
      (**(code **)(*param_2 + 0x10))
                (param_2,param_1[4],(uVar1 + *(uint *)((long)param_1 + 0x2c) * 2) * 4);
    }
  }
  if (param_1[6] != 0) {
    if ((*(uint *)((long)param_1 + 0x3c) & 0x7fffffff) != 0 || (int)param_1[7] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2,param_1[6],*(uint *)((long)param_1 + 0x3c) << 4);
    }
  }
  if (param_1[8] != 0) {
    if ((*(uint *)((long)param_1 + 0x4c) & 0x7fffffff) != 0 || (int)param_1[9] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2,param_1[8],*(uint *)((long)param_1 + 0x4c) << 2);
    }
  }
  if (param_1[10] != 0) {
    if ((*(uint *)((long)param_1 + 0x5c) & 0x7fffffff) != 0 || (int)param_1[0xb] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2,param_1[10],*(uint *)((long)param_1 + 0x5c) << 4);
    }
  }
  if (param_1[0xc] != 0) {
    if ((*(uint *)((long)param_1 + 0x6c) & 0x7fffffff) != 0 || (int)param_1[0xd] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2,param_1[0xc],*(uint *)((long)param_1 + 0x6c) << 2);
    }
  }
  if (param_1[0xe] != 0) {
    uVar1 = *(uint *)((long)param_1 + 0x7c) & 0x7fffffff;
    if (uVar1 != 0 || (int)param_1[0xf] != 0) {
      (**(code **)(*param_2 + 0x10))
                (param_2,param_1[0xe],(uVar1 + *(uint *)((long)param_1 + 0x7c) * 8) * 4);
    }
  }
  if (param_1[0x10] != 0) {
    if ((*(uint *)((long)param_1 + 0x8c) & 0x7fffffff) != 0 || (int)param_1[0x11] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2,param_1[0x10],*(uint *)((long)param_1 + 0x8c) << 4);
    }
  }
  if (param_1[0x12] != 0) {
    if ((*(uint *)((long)param_1 + 0x9c) & 0x7fffffff) != 0 || (int)param_1[0x13] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2,param_1[0x12],*(uint *)((long)param_1 + 0x9c) << 4);
    }
  }
  if (param_1[0x14] != 0) {
    if ((*(uint *)((long)param_1 + 0xac) & 0x7fffffff) != 0 || (int)param_1[0x15] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2,param_1[0x14],*(uint *)((long)param_1 + 0xac) << 4);
    }
  }
  if (param_1[0x18] != 0) {
    if ((*(uint *)((long)param_1 + 0xcc) & 0x7fffffff) != 0 || (int)param_1[0x19] != 0) {
                    /* WARNING: Could not recover jumptable at 0x003b0680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x10))(param_2,param_1[0x18],*(uint *)((long)param_1 + 0xcc) << 4);
      return;
    }
  }
  return;
}


