/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb8480; name: FUN_00cb8480
 */


void FUN_00cb8480(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long local_88;
  long *local_80;
  long *local_78;
  long local_70;
  long *local_68;
  
  lVar8 = param_1[1] - *param_1 >> 4;
  uVar12 = 0xf0f0f0f0f0f0f0;
  uVar1 = lVar8 * -0xf0f0f0f0f0f0f0f + 1;
  if (0xf0f0f0f0f0f0f0 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = param_1[2] - *param_1 >> 4;
  plVar2 = param_1 + 3;
  local_68 = plVar2;
  if ((ulong)(lVar10 * -0xf0f0f0f0f0f0f0f) < 0x78787878787878) {
    uVar11 = lVar10 * -0x1e1e1e1e1e1e1e1e;
    uVar12 = uVar1;
    if (uVar1 <= uVar11) {
      uVar12 = uVar11;
    }
    if (uVar12 == 0) {
      lVar10 = 0;
      goto LAB_00cb855c;
    }
  }
  local_70 = 0;
  lVar10 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar12 * 0x110,0x10);
  if (lVar10 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_00cb855c:
  plVar14 = (long *)(lVar10 + lVar8 * 0x10);
  local_70 = lVar10 + uVar12 * 0x110;
  lVar15 = *plVar2;
  local_88 = lVar10;
  local_80 = plVar14;
  local_78 = plVar14;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar15;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  puVar6 = PTR_DAT_02715090;
  *plVar14 = (long)(PTR_DAT_02715090 + 0x10);
  lVar15 = *(long *)(param_2 + 8);
  *(long *)(lVar10 + lVar8 * 0x10 + 8) = lVar15;
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar15 = lVar10 + lVar8 * 0x10;
  *(undefined8 *)(lVar15 + 0x10) = 0;
  *(undefined8 *)(lVar15 + 0x20) = 0;
  *(undefined8 *)(lVar15 + 0x28) = 0;
  *(undefined8 *)(lVar15 + 0x18) = 0;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,lVar10 + lVar8 * 0x10 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(lVar15 + 0x28) = uVar5;
    *(undefined8 *)(lVar15 + 0x10) = uVar3;
    *(undefined8 *)(lVar15 + 0x18) = uVar4;
  }
  lVar15 = lVar10 + lVar8 * 0x10;
  *(undefined8 *)(lVar15 + 0x90) = 0;
  *(undefined8 *)(lVar15 + 0xa0) = 0;
  *(undefined8 *)(lVar15 + 0xa8) = 0;
  *(undefined8 *)(lVar15 + 0x98) = 0;
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,lVar10 + lVar8 * 0x10 + 0xb0);
    uVar3 = *(undefined8 *)(param_2 + 0x90);
    uVar4 = *(undefined8 *)(param_2 + 0x98);
    uVar5 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(lVar15 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(lVar15 + 0xa8) = uVar5;
    *(undefined8 *)(lVar15 + 0x90) = uVar3;
    *(undefined8 *)(lVar15 + 0x98) = uVar4;
  }
  *plVar14 = (long)(PTR_DAT_02715070 + 0x10);
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  local_78 = local_78 + 0x22;
  FUN_00cb8790(param_1,&local_88);
  plVar2 = local_80;
  if (local_78 != local_80) {
    plVar14 = local_78;
    do {
      local_78 = plVar14 + -0x22;
      *local_78 = (long)(puVar6 + 0x10);
      plVar13 = plVar14 + -0x21;
      if (*plVar13 == 0) {
        *plVar13 = 0;
        pcVar9 = (code *)plVar14[-0xf];
      }
      else {
        FUN_006e2100();
        lVar8 = *plVar13;
        *plVar13 = 0;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
        }
        pcVar9 = (code *)plVar14[-0xf];
      }
      if (pcVar9 != (code *)0x0) {
        plVar14[-0xe] = 0;
        plVar14[-0xd] = 0;
        plVar14[-0x10] = 0;
        plVar14[-0xf] = 0;
        (*pcVar9)(plVar14 + -0xc);
      }
      pcVar9 = (code *)plVar14[-0x1f];
      if (pcVar9 != (code *)0x0) {
        plVar14[-0x1e] = 0;
        plVar14[-0x1d] = 0;
        plVar14[-0x20] = 0;
        plVar14[-0x1f] = 0;
        (*pcVar9)(plVar14 + -0x1c);
      }
      if (*plVar13 != 0) {
        (**(code **)(*(long *)(*plVar13 + 0x48) + 0x18))();
        *plVar13 = 0;
      }
      plVar14 = local_78;
    } while (local_78 != plVar2);
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,local_88,local_70 - local_88,0x10);
  }
  return;
}


