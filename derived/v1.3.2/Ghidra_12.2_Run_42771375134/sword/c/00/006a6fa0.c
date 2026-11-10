/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a6fa0; name: FUN_006a6fa0
 */


void FUN_006a6fa0(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  puVar3 = PTR_DAT_02710860;
  puVar7 = (undefined8 *)param_1[1];
  plVar1 = param_1 + 3;
  if (param_2 <= (ulong)((param_1[2] - (long)puVar7 >> 3) * -0x30c30c30c30c30c3)) {
    while( true ) {
      lVar4 = *plVar1;
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar6 + 0x80)) break;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar4;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      puVar7[0x13] = 0;
      puVar7[0x14] = 0;
      puVar7[0x11] = 0;
      puVar7[0x12] = 0;
      *puVar7 = 0;
      puVar7[0xf] = 0;
      puVar7[0x10] = 0;
      puVar7[0xd] = 0;
      puVar7[0xe] = 0;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      FUN_006a7430(puVar7);
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar7 = (undefined8 *)(param_1[1] + 0xa8);
      param_2 = param_2 - 1;
      param_1[1] = (long)puVar7;
      if (param_2 == 0) {
        return;
      }
    }
    goto LAB_006a7200;
  }
  lVar6 = (long)puVar7 - *param_1 >> 3;
  uVar8 = 0x186186186186186;
  uVar2 = lVar6 * -0x30c30c30c30c30c3 + param_2;
  if (0x186186186186186 < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  local_58 = plVar1;
  if ((ulong)(lVar4 * -0x30c30c30c30c30c3) < 0xc30c30c30c30c3) {
    uVar5 = lVar4 * -0x6186186186186186;
    uVar8 = uVar2;
    if (uVar2 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar8 != 0) goto LAB_006a70fc;
    local_78 = 0;
  }
  else {
LAB_006a70fc:
    local_60 = 0;
    local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar8 * 0xa8,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xb8))();
    }
  }
  plVar1 = local_58;
  puVar3 = PTR_DAT_02710860;
  puStack_70 = (undefined8 *)(local_78 + lVar6 * 8);
  local_60 = local_78 + uVar8 * 0xa8;
  local_68 = puStack_70;
  while( true ) {
    puVar7 = local_68;
    lVar4 = *plVar1;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (0xf < *(ulong *)(lVar6 + 0x80)) break;
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar4;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    puVar7[0x13] = 0;
    puVar7[0x14] = 0;
    puVar7[0x11] = 0;
    puVar7[0x12] = 0;
    *puVar7 = 0;
    puVar7[0xf] = 0;
    puVar7[0x10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    FUN_006a7430(puVar7);
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    local_68 = local_68 + 0x15;
    param_2 = param_2 - 1;
    if (param_2 == 0) {
      FUN_006a7210(param_1,&local_78);
      FUN_006a7340(&local_78);
      return;
    }
  }
LAB_006a7200:
                    /* WARNING: Subroutine does not return */
  abort();
}


