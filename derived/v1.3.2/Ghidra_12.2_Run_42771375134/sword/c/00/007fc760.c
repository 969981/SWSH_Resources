/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007fc760; name: FUN_007fc760
 */


void FUN_007fc760(long param_1,string *param_2,string *param_3,ulong param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  ulong local_90;
  ulong local_88;
  void *local_80;
  ulong local_78;
  ulong local_70;
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  
  uVar4 = FUN_007fca90(*(undefined8 *)(param_1 + 8),0);
  FUN_0080c7c0(&local_90,param_4);
  FUN_0080bec0(uVar4,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  *(ulong *)(param_5 + 0x20) = uVar4;
  if (*(int *)(uVar4 + 0x40) < 1) {
    return;
  }
  std::string::string((string *)&local_90,param_2);
  std::string::string((string *)&local_78,param_3);
  puVar13 = *(ulong **)(param_1 + 0x20);
  local_60 = param_4;
  uStack_58 = uVar4;
  if (puVar13 < *(ulong **)(param_1 + 0x28)) {
    puVar13[1] = local_88;
    puVar13[2] = (ulong)local_80;
    *puVar13 = local_90;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    puVar13[4] = local_70;
    puVar13[5] = (ulong)local_68;
    puVar13[3] = local_78;
    local_70 = 0;
    local_68 = (void *)0x0;
    local_78 = 0;
    puVar13[6] = param_4;
    puVar13[7] = uVar4;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 0x40;
    goto LAB_007fca58;
  }
  puVar11 = *(ulong **)(param_1 + 0x18);
  lVar14 = (long)puVar13 - (long)puVar11 >> 6;
  uVar4 = lVar14 + 1;
  if (uVar4 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = (long)*(ulong **)(param_1 + 0x28) - (long)puVar11;
  if ((ulong)(lVar6 >> 6) < 0x1ffffffffffffff) {
    uVar7 = lVar6 >> 5;
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    if (uVar4 != 0) {
      if (uVar4 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_007fc8ac;
    }
    pvVar5 = (void *)0x0;
  }
  else {
    uVar4 = 0x3ffffffffffffff;
LAB_007fc8ac:
    pvVar5 = operator_new(uVar4 << 6);
  }
  puVar9 = (ulong *)((long)pvVar5 + lVar14 * 0x40);
  puVar9[1] = local_88;
  puVar9[2] = (ulong)local_80;
  *puVar9 = local_90;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0;
  puVar9[4] = local_70;
  puVar9[5] = (ulong)local_68;
  puVar9[3] = local_78;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_78 = 0;
  puVar9[6] = local_60;
  puVar9[7] = uStack_58;
  puVar1 = puVar9 + 8;
  if (puVar13 != puVar11) {
    uVar7 = (long)puVar13 + (-0x40 - (long)puVar11);
    puVar8 = puVar9;
    puVar12 = puVar13;
    if (((uint)uVar7 >> 6 & 1) == 0) {
      puVar12 = puVar13 + -8;
      uVar2 = puVar13[-7];
      uVar10 = puVar13[-6];
      puVar8 = puVar9 + -8;
      *puVar8 = *puVar12;
      puVar9[-7] = uVar2;
      puVar9[-6] = uVar10;
      uVar10 = puVar13[-3];
      uVar2 = puVar13[-4];
      *puVar12 = 0;
      puVar13[-7] = 0;
      puVar13[-6] = 0;
      puVar9[-5] = puVar13[-5];
      puVar9[-4] = uVar2;
      puVar9[-3] = uVar10;
      puVar13[-5] = 0;
      uVar2 = puVar13[-1];
      puVar13[-4] = 0;
      puVar13[-3] = 0;
      puVar9[-2] = puVar13[-2];
      puVar9[-1] = uVar2;
    }
    if (0x3f < uVar7) {
      puVar8 = puVar8 + -8;
      do {
        uVar2 = puVar12[-8];
        uVar10 = puVar12[-6];
        puVar8[1] = puVar12[-7];
        puVar8[2] = uVar10;
        *puVar8 = uVar2;
        uVar2 = puVar12[-5];
        uVar10 = puVar12[-3];
        puVar12[-7] = 0;
        puVar12[-6] = 0;
        puVar12[-8] = 0;
        puVar8[4] = puVar12[-4];
        puVar8[5] = uVar10;
        puVar8[3] = uVar2;
        uVar2 = puVar12[-1];
        puVar12[-5] = 0;
        puVar12[-4] = 0;
        puVar12[-3] = 0;
        puVar8[6] = puVar12[-2];
        puVar8[7] = uVar2;
        puVar13 = puVar12 + -0x10;
        uVar2 = puVar12[-0xf];
        uVar10 = puVar12[-0xe];
        puVar8[-8] = *puVar13;
        puVar8[-7] = uVar2;
        puVar8[-6] = uVar10;
        uVar10 = puVar12[-0xb];
        uVar2 = puVar12[-0xc];
        *puVar13 = 0;
        puVar12[-0xf] = 0;
        puVar12[-0xe] = 0;
        puVar8[-5] = puVar12[-0xd];
        puVar8[-4] = uVar2;
        puVar8[-3] = uVar10;
        puVar12[-0xd] = 0;
        uVar2 = puVar12[-9];
        puVar12[-0xc] = 0;
        puVar12[-0xb] = 0;
        puVar8[-2] = puVar12[-10];
        puVar8[-1] = uVar2;
        puVar8 = puVar8 + -0x10;
        puVar12 = puVar13;
      } while (puVar11 != puVar13);
    }
    puVar11 = *(ulong **)(param_1 + 0x18);
    puVar13 = *(ulong **)(param_1 + 0x20);
    puVar9 = (ulong *)((long)pvVar5 + (lVar14 + ~(uVar7 >> 6)) * 0x40);
  }
  *(ulong **)(param_1 + 0x18) = puVar9;
  *(ulong **)(param_1 + 0x20) = puVar1;
  *(void **)(param_1 + 0x28) = (void *)((long)pvVar5 + uVar4 * 0x40);
  for (; puVar13 != puVar11; puVar13 = puVar13 + -8) {
    while( true ) {
      if ((puVar13[-5] & 1) == 0) {
        bVar3 = (byte)puVar13[-8];
      }
      else {
        operator_delete((void *)puVar13[-3]);
        bVar3 = (byte)puVar13[-8];
      }
      if ((bVar3 & 1) != 0) break;
      puVar13 = puVar13 + -8;
      if (puVar11 == puVar13) goto LAB_007fca3c;
    }
    operator_delete((void *)puVar13[-6]);
  }
LAB_007fca3c:
  if (puVar11 != (ulong *)0x0) {
    operator_delete(puVar11);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
LAB_007fca58:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  return;
}


