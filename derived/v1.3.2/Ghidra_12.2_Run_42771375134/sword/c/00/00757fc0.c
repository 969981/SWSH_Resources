/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00757fc0; name: FUN_00757fc0
 */


void FUN_00757fc0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  lVar4 = param_1[1] - *param_1 >> 4;
  uVar10 = 0x249249249249249;
  uVar13 = lVar4 * 0x6db6db6db6db6db7 + 1;
  if (0x249249249249249 < uVar13) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1 >> 4;
  plVar3 = param_1 + 3;
  local_68 = plVar3;
  if ((ulong)(lVar7 * 0x6db6db6db6db6db7) < 0x124924924924924) {
    uVar8 = lVar7 * -0x2492492492492492;
    uVar10 = uVar13;
    if (uVar13 <= uVar8) {
      uVar10 = uVar8;
    }
    if (uVar10 == 0) {
      lVar7 = 0;
      goto LAB_007580b4;
    }
  }
  local_70 = 0;
  lVar7 = (**(code **)(*(long *)*plVar3 + 0x10))((long *)*plVar3,uVar10 * 0x70,0x10);
  if (lVar7 == 0) {
    (**(code **)(*(long *)*plVar3 + 0xb8))();
  }
LAB_007580b4:
  puVar14 = (undefined8 *)(lVar7 + lVar4 * 0x10);
  local_70 = lVar7 + uVar10 * 0x70;
  lVar11 = *plVar3;
  local_88 = lVar7;
  local_80 = puVar14;
  local_78 = puVar14;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar11;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *puVar14 = *param_2;
  lVar5 = lVar7 + lVar4 * 0x10;
  *(undefined8 *)(lVar5 + 8) = param_2[1];
  *(undefined8 *)(lVar5 + 0x10) = param_2[2];
  lVar11 = param_2[3];
  *(long *)(lVar5 + 0x18) = lVar11;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar11 = lVar7 + lVar4 * 0x10;
  *(undefined8 *)(lVar11 + 0x28) = param_2[5];
  *(undefined8 *)(lVar11 + 0x20) = param_2[4];
  *(undefined8 *)(lVar11 + 0x38) = param_2[7];
  *(undefined8 *)(lVar11 + 0x30) = param_2[6];
  plVar3 = (long *)param_2[0xb];
  plVar12 = (long *)(lVar11 + 0x40);
  *plVar12 = 0;
  *(undefined8 *)(lVar11 + 0x48) = 0;
  *(undefined8 *)(lVar11 + 0x50) = 0;
  *(undefined4 *)(lVar11 + 0x68) = 0;
  *(long **)(lVar11 + 0x58) = plVar3;
  *(undefined8 *)(lVar11 + 0x60) = 0;
  lVar11 = param_2[9] - param_2[8];
  if (lVar11 != 0) {
    uVar13 = (lVar11 >> 6) * 0x6db6db6db6db6db7;
    if (0x92492492492492 < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar11,0x10);
    if (lVar5 == 0) {
      (**(code **)(**(long **)(lVar7 + lVar4 * 0x10 + 0x58) + 0xb8))();
    }
    lVar7 = lVar7 + lVar4 * 0x10;
    *plVar12 = lVar5;
    *(long *)(lVar7 + 0x48) = lVar5;
    *(long *)(lVar7 + 0x50) = lVar5 + (lVar11 >> 6) * 0x40;
    FUN_007570e0(plVar12,param_2[8],param_2[9],uVar13);
  }
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  local_78 = local_78 + 0xe;
  FUN_00756f00(param_1,&local_88);
  puVar14 = local_80;
  while (puVar1 = local_78, local_78 != puVar14) {
    puVar6 = local_78 + -0xe;
    lVar4 = local_78[-6];
    if (lVar4 != 0) {
      lVar7 = local_78[-5];
      if (lVar7 == lVar4) {
        lVar7 = lVar4;
        local_78 = puVar6;
      }
      else {
        puVar9 = local_78 + -3;
        local_78 = puVar6;
        do {
          lVar7 = lVar7 + -0x1c0;
          FUN_00756e00(puVar9,lVar7);
        } while (lVar4 != lVar7);
        lVar7 = puVar1[-6];
      }
      puVar1[-5] = lVar4;
      (**(code **)(*(long *)puVar1[-3] + 0x18))((long *)puVar1[-3],lVar7,puVar1[-4] - lVar7,0x10);
      puVar6 = local_78;
    }
    local_78 = puVar6;
    if (puVar1[-0xb] != 0) {
      (**(code **)(*(long *)(puVar1[-0xb] + 0x48) + 0x18))();
      puVar1[-0xb] = 0;
    }
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,local_88,local_70 - local_88,0x10);
  }
  return;
}


