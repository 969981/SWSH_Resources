/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d2390; name: FUN_006d2390
 */


long FUN_006d2390(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  puVar6 = PTR_DAT_02710860;
  if ((long)param_4 - (long)param_3 < 1) {
    return param_2;
  }
  puVar2 = (undefined8 *)param_1[1];
  lVar10 = (long)param_4 - (long)param_3 >> 7;
  if (lVar10 <= param_1[2] - (long)puVar2 >> 7) {
    lVar8 = (long)puVar2 - param_2 >> 7;
    puVar12 = param_4;
    if (lVar8 < lVar10) {
      puVar12 = param_3 + lVar8 * 0x10;
      if (puVar12 != param_4) {
        puVar11 = puVar2;
        puVar14 = puVar12;
        do {
          lVar13 = param_1[3];
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_006d26e8;
          *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar13;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          puVar11[2] = 0;
          puVar11[3] = 0;
          *puVar11 = 0;
          puVar11[1] = 0;
          if ((code *)puVar14[2] != (code *)0x0) {
            (*(code *)puVar14[2])(puVar14 + 4,puVar11 + 4);
            uVar3 = *puVar14;
            uVar4 = puVar14[1];
            uVar5 = puVar14[3];
            puVar11[2] = puVar14[2];
            puVar11[3] = uVar5;
            *puVar11 = uVar3;
            puVar11[1] = uVar4;
          }
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          puVar14 = puVar14 + 0x10;
          puVar11 = (undefined8 *)(param_1[1] + 0x80);
          param_1[1] = (long)puVar11;
        } while (param_4 != puVar14);
      }
      if ((long)puVar2 - param_2 < 1) {
        return param_2;
      }
    }
    FUN_006d2700(param_1,param_2,puVar2,param_2 + lVar10 * 0x80);
    if (puVar12 == param_3) {
      return param_2;
    }
    lVar10 = 0;
    do {
      puVar2 = (undefined8 *)(param_2 + lVar10);
      pcVar9 = (code *)puVar2[1];
      if (pcVar9 != (code *)0x0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        (*pcVar9)(puVar2 + 4);
      }
      puVar14 = (undefined8 *)((long)param_3 + lVar10);
      if ((code *)puVar14[2] != (code *)0x0) {
        (*(code *)puVar14[2])(puVar14 + 4,puVar2 + 4);
        uVar3 = *puVar14;
        uVar4 = puVar14[1];
        uVar5 = puVar14[3];
        puVar2[2] = puVar14[2];
        puVar2[3] = uVar5;
        *puVar2 = uVar3;
        puVar2[1] = uVar4;
      }
      lVar10 = lVar10 + 0x80;
    } while ((long)puVar12 - (long)param_3 != lVar10);
    return param_2;
  }
  lVar8 = *param_1;
  uVar15 = lVar10 + ((long)puVar2 - lVar8 >> 7);
  if (uVar15 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = param_1[2] - lVar8;
  plVar1 = param_1 + 3;
  local_68 = plVar1;
  if ((ulong)(lVar10 >> 7) < 0xffffffffffffff) {
    uVar7 = lVar10 >> 6;
    if (uVar15 <= uVar7) {
      uVar15 = uVar7;
    }
    if (uVar15 == 0) {
      local_88 = 0;
      goto LAB_006d25b0;
    }
  }
  else {
    uVar15 = 0x1ffffffffffffff;
  }
  local_70 = 0;
  local_88 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar15 << 7,0x10);
  if (local_88 == 0) {
    (**(code **)(*(long *)*plVar1 + 0xb8))();
  }
LAB_006d25b0:
  puVar6 = PTR_DAT_02710860;
  puVar2 = (undefined8 *)(local_88 + (param_2 - lVar8 >> 7) * 0x80);
  local_70 = local_88 + uVar15 * 0x80;
  local_80 = puVar2;
  while( true ) {
    local_78 = puVar2;
    if (param_3 == param_4) {
      lVar10 = FUN_006d2880(param_1,&local_88,param_2);
      puVar2 = local_80;
      while (puVar12 = local_78, puVar12 != puVar2) {
        local_78 = puVar12 + -0x10;
        pcVar9 = (code *)puVar12[-0xf];
        if (pcVar9 != (code *)0x0) {
          puVar12[-0xe] = 0;
          puVar12[-0xd] = 0;
          *local_78 = 0;
          puVar12[-0xf] = 0;
          (*pcVar9)(puVar12 + -0xc);
        }
      }
      if (local_88 != 0) {
        local_78 = puVar12;
        (**(code **)(*(long *)*local_68 + 0x18))
                  ((long *)*local_68,local_88,local_70 - local_88,0x10);
      }
      return lVar10;
    }
    lVar8 = *plVar1;
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (0xf < *(ulong *)(lVar10 + 0x80)) break;
    *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    if ((code *)param_3[2] != (code *)0x0) {
      (*(code *)param_3[2])(param_3 + 4,puVar2 + 4);
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[3];
      puVar2[2] = param_3[2];
      puVar2[3] = uVar5;
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
    }
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    param_3 = param_3 + 0x10;
    puVar2 = local_78 + 0x10;
  }
LAB_006d26e8:
                    /* WARNING: Subroutine does not return */
  abort();
}


