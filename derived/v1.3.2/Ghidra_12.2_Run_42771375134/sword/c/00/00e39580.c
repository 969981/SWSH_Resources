/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e39580; name: FUN_00e39580
 */


void FUN_00e39580(long *param_1,void *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  ulong uVar12;
  long *plVar13;
  void *pvVar14;
  long lVar15;
  long lVar16;
  long local_88;
  void *local_80;
  void *local_78;
  long local_70;
  long *local_68;
  
  lVar7 = param_1[1] - *param_1 >> 4;
  uVar12 = 0x7c1f07c1f07c1f;
  uVar1 = lVar7 * 0xf83e0f83e0f83e1 + 1;
  if (0x7c1f07c1f07c1f < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - *param_1 >> 4;
  plVar13 = param_1 + 3;
  local_68 = plVar13;
  if ((ulong)(lVar9 * 0xf83e0f83e0f83e1) < 0x3e0f83e0f83e0f) {
    uVar10 = lVar9 * 0x1f07c1f07c1f07c2;
    uVar12 = uVar1;
    if (uVar1 <= uVar10) {
      uVar12 = uVar10;
    }
    if (uVar12 == 0) {
      lVar9 = 0;
      goto LAB_00e39674;
    }
  }
  local_70 = 0;
  lVar9 = (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,uVar12 * 0x210,0x10);
  if (lVar9 == 0) {
    (**(code **)(*(long *)*plVar13 + 0xb8))();
  }
LAB_00e39674:
  pvVar14 = (void *)(lVar9 + lVar7 * 0x10);
  local_70 = lVar9 + uVar12 * 0x210;
  lVar15 = *plVar13;
  local_88 = lVar9;
  local_80 = pvVar14;
  local_78 = pvVar14;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar15;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  memcpy(pvVar14,param_2,0x100);
  puVar5 = PTR_DAT_02715de0;
  lVar16 = lVar9 + lVar7 * 0x10;
  *(undefined **)(lVar16 + 0x100) = PTR_DAT_02715de0 + 0x10;
  lVar15 = *(long *)((long)param_2 + 0x108);
  *(long *)(lVar16 + 0x108) = lVar15;
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar15 = lVar9 + lVar7 * 0x10;
  *(undefined8 *)(lVar15 + 0x120) = 0;
  *(undefined8 *)(lVar15 + 0x128) = 0;
  *(undefined8 *)(lVar15 + 0x110) = 0;
  *(undefined8 *)(lVar15 + 0x118) = 0;
  if (*(code **)((long)param_2 + 0x120) != (code *)0x0) {
    (**(code **)((long)param_2 + 0x120))((long)param_2 + 0x130,lVar9 + lVar7 * 0x10 + 0x130);
    uVar2 = *(undefined8 *)((long)param_2 + 0x110);
    uVar3 = *(undefined8 *)((long)param_2 + 0x118);
    uVar4 = *(undefined8 *)((long)param_2 + 0x128);
    *(undefined8 *)(lVar15 + 0x120) = *(undefined8 *)((long)param_2 + 0x120);
    *(undefined8 *)(lVar15 + 0x128) = uVar4;
    *(undefined8 *)(lVar15 + 0x110) = uVar2;
    *(undefined8 *)(lVar15 + 0x118) = uVar3;
  }
  lVar15 = lVar9 + lVar7 * 0x10;
  *(undefined8 *)(lVar15 + 0x1a0) = 0;
  *(undefined8 *)(lVar15 + 0x1a8) = 0;
  *(undefined8 *)(lVar15 + 400) = 0;
  *(undefined8 *)(lVar15 + 0x198) = 0;
  if (*(code **)((long)param_2 + 0x1a0) != (code *)0x0) {
    (**(code **)((long)param_2 + 0x1a0))((long)param_2 + 0x1b0,lVar9 + lVar7 * 0x10 + 0x1b0);
    uVar2 = *(undefined8 *)((long)param_2 + 400);
    uVar3 = *(undefined8 *)((long)param_2 + 0x198);
    uVar4 = *(undefined8 *)((long)param_2 + 0x1a8);
    *(undefined8 *)(lVar15 + 0x1a0) = *(undefined8 *)((long)param_2 + 0x1a0);
    *(undefined8 *)(lVar15 + 0x1a8) = uVar4;
    *(undefined8 *)(lVar15 + 400) = uVar2;
    *(undefined8 *)(lVar15 + 0x198) = uVar3;
  }
  *(undefined **)(lVar16 + 0x100) = PTR_DAT_02715de8 + 0x10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  local_78 = (void *)((long)local_78 + 0x210);
  FUN_00e398c0(param_1,&local_88);
  pvVar14 = local_80;
  if (local_78 != local_80) {
    pvVar11 = local_78;
    do {
      local_78 = (void *)((long)pvVar11 + -0x210);
      *(undefined **)((long)pvVar11 + -0x110) = puVar5 + 0x10;
      plVar13 = (long *)((long)pvVar11 + -0x108);
      if (*plVar13 == 0) {
        *plVar13 = 0;
        pcVar8 = *(code **)((long)pvVar11 + -0x78);
      }
      else {
        FUN_006e2100();
        lVar7 = *plVar13;
        *plVar13 = 0;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
        }
        pcVar8 = *(code **)((long)pvVar11 + -0x78);
      }
      if (pcVar8 != (code *)0x0) {
        *(undefined8 *)((long)pvVar11 + -0x70) = 0;
        *(undefined8 *)((long)pvVar11 + -0x68) = 0;
        *(undefined8 *)((long)pvVar11 + -0x80) = 0;
        *(undefined8 *)((long)pvVar11 + -0x78) = 0;
        (*pcVar8)((long)pvVar11 + -0x60);
      }
      pcVar8 = *(code **)((long)pvVar11 + -0xf8);
      if (pcVar8 != (code *)0x0) {
        *(undefined8 *)((long)pvVar11 + -0xf0) = 0;
        *(undefined8 *)((long)pvVar11 + -0xe8) = 0;
        *(undefined8 *)((long)pvVar11 + -0x100) = 0;
        *(undefined8 *)((long)pvVar11 + -0xf8) = 0;
        (*pcVar8)((long)pvVar11 + -0xe0);
      }
      if (*plVar13 != 0) {
        (**(code **)(*(long *)(*plVar13 + 0x48) + 0x18))();
        *plVar13 = 0;
      }
      pvVar11 = local_78;
    } while (local_78 != pvVar14);
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,local_88,local_70 - local_88,0x10);
  }
  return;
}


