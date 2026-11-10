/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e933e0; name: FUN_00e933e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e933e0(long *param_1)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  ulong local_b0;
  long lStack_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined4 local_80;
  ulong local_70;
  long lStack_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long lStack_38;
  float local_24;
  
  local_70 = param_1[0x14];
  local_60 = param_1[0x16];
  local_58 = param_1[0x17];
  lStack_68 = param_1[0x15];
  local_50 = param_1[0x18];
  local_48 = param_1[0x19];
  local_40 = param_1[0x1a];
  lStack_38 = param_1[0x1b];
  uVar3 = (**(code **)(*param_1 + 0x70))();
  if ((uVar3 & 1) != 0) {
    pfVar5 = (float *)(param_1 + 0x1c);
    fVar6 = *(float *)((long)param_1 + 0xdc) + *pfVar5;
    *pfVar5 = fVar6;
    local_24 = 1.0;
    pfVar1 = &local_24;
    if (fVar6 <= 1.0) {
      pfVar1 = pfVar5;
    }
    local_b0 = local_b0 & 0xffffffff00000000;
    pfVar2 = (float *)&local_b0;
    if (0.0 <= fVar6) {
      pfVar2 = pfVar1;
    }
    fVar6 = *pfVar2;
    *pfVar5 = fVar6;
    if ((*(uint *)(param_1 + 0x1b) != 0xffffffff) &&
       (fVar6 = (float)(**(code **)(PTR_PTR_02718e90 + (ulong)*(uint *)(param_1 + 0x1b) * 8))(fVar6)
       , fVar6 < 1.0)) {
      FUN_00e3dd70(&local_b0,param_1 + 0xc,param_1 + 0x14);
      local_40 = CONCAT44(local_40._4_4_,local_80);
      lVar4 = param_1[0xb];
      local_70 = local_b0;
      lStack_68 = lStack_a8;
      local_60 = local_a0;
      local_58 = local_98;
      local_50 = local_90;
      local_48 = local_88;
      goto joined_r0x00e934f0;
    }
    *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  }
  lVar4 = param_1[0xb];
joined_r0x00e934f0:
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x54) != 0)) {
    if (param_1[0xb] == 0) {
      _DAT_000003e0 = (undefined4)local_40;
      _DAT_000003b0 = local_70;
      _DAT_000003b8 = lStack_68;
      _DAT_000003c0 = local_60;
      _DAT_000003c8 = local_58;
      _DAT_000003d0 = local_50;
      _DAT_000003d8 = local_48;
    }
    else {
      FUN_00e93040(&local_b0);
      *(undefined4 *)(local_b0 + 0x3e0) = (undefined4)local_40;
      *(long *)(local_b0 + 0x3d0) = local_50;
      *(long *)(local_b0 + 0x3d8) = local_48;
      *(long *)(local_b0 + 0x3c8) = local_58;
      *(long *)(local_b0 + 0x3c0) = local_60;
      *(ulong *)(local_b0 + 0x3b0) = local_70;
      *(long *)(local_b0 + 0x3b8) = lStack_68;
      if (local_b0 != 0) {
        (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


