/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0071fe80; name: FUN_0071fe80
 */


void FUN_0071fe80(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *local_58;
  
  puVar2 = PTR_DAT_02710860;
  if (param_2 <= (ulong)((param_1[2] - param_1[1] >> 4) * -0xf0f0f0f0f0f0f0f)) {
    puVar10 = (undefined8 *)param_1[1];
    do {
      lVar5 = param_1[3];
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar5;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      puVar10[0x20] = 0;
      puVar10[0x21] = 0;
      puVar10[0x1e] = 0;
      puVar10[0x1f] = 0;
      puVar10[0x1c] = 0;
      puVar10[0x1d] = 0;
      puVar10[0x1a] = 0;
      puVar10[0x1b] = 0;
      puVar10[0x17] = 0;
      puVar10[0x18] = 0;
      puVar10[0x15] = 0;
      puVar10[0x16] = 0;
      puVar10[0x13] = 0;
      puVar10[0x14] = 0;
      puVar10[0x11] = 0;
      puVar10[0x12] = 0;
      puVar10[0xf] = 0;
      puVar10[0x10] = 0;
      puVar10[0x19] = 0;
      puVar10[0xd] = 0;
      puVar10[0xe] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      *puVar10 = 0xcbf29ce484222645;
      puVar10[1] = &DAT_01d38550;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0xcbf29ce484222645;
      puVar10[5] = &DAT_01d38550;
      puVar10[6] = 0;
      puVar10[7] = 0;
      FUN_0075e2a0();
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
         (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
        lVar5 = FUN_0075ecb0();
      }
      puVar10[0x1a] = 0;
      puVar10[0x1b] = 0;
      param_2 = param_2 - 1;
      puVar10[0x19] = 0;
      *(undefined4 *)(puVar10 + 0x1e) = 0;
      puVar10[0x1f] = 0;
      puVar10[0x1c] = lVar5;
      puVar10[0x1d] = 0;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      puVar10 = (undefined8 *)(param_1[1] + 0x110);
      param_1[1] = (long)puVar10;
    } while (param_2 != 0);
    return;
  }
  plVar9 = param_1 + 3;
  lVar7 = param_1[1] - *param_1 >> 4;
  uVar8 = 0xf0f0f0f0f0f0f0;
  uVar1 = lVar7 * -0xf0f0f0f0f0f0f0f + param_2;
  if (0xf0f0f0f0f0f0f0 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 4;
  local_58 = plVar9;
  if ((ulong)(lVar5 * -0xf0f0f0f0f0f0f0f) < 0x78787878787878) {
    uVar6 = lVar5 * -0x1e1e1e1e1e1e1e1e;
    uVar8 = uVar1;
    if (uVar1 <= uVar6) {
      uVar8 = uVar6;
    }
    if (uVar8 == 0) {
      local_78 = 0;
      goto LAB_0071ff90;
    }
  }
  local_60 = 0;
  local_78 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,uVar8 * 0x110,0x10);
  if (local_78 == 0) {
    (**(code **)(*(long *)*plVar9 + 0xb8))();
  }
LAB_0071ff90:
  local_70 = local_78 + lVar7 * 0x10;
  local_60 = local_78 + uVar8 * 0x110;
  local_68 = local_70;
  FUN_007201c0(&local_78,param_2);
  FUN_00720310(param_1,&local_78);
  lVar7 = local_70;
  while (lVar5 = local_68, local_68 != lVar7) {
    lVar4 = *(long *)(local_68 + -0x48);
    lVar3 = local_68 + -0x110;
    if (lVar4 != 0) {
      plVar9 = (long *)(local_68 + -0x38);
      puVar10 = (undefined8 *)(local_68 + -0x30);
      *(long *)(local_68 + -0x40) = lVar4;
      local_68 = local_68 + -0x110;
      (**(code **)(*(long *)*puVar10 + 0x18))((long *)*puVar10,lVar4,*plVar9 - lVar4,4);
      lVar3 = local_68;
    }
    local_68 = lVar3;
    if (*(long *)(lVar5 + -0xd8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar5 + -0xd8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar5 + -0xd8) = 0;
    }
    if (*(long *)(lVar5 + -0xf8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar5 + -0xf8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar5 + -0xf8) = 0;
    }
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)*local_58 + 0x18))((long *)*local_58,local_78,local_60 - local_78,0x10);
  }
  return;
}


