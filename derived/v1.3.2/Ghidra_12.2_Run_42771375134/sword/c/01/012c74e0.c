/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c74e0; name: FUN_012c74e0
 */


void FUN_012c74e0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  
  lVar15 = param_1[1] - *param_1 >> 7;
  uVar14 = lVar15 + 1;
  if (uVar14 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1;
  if ((ulong)(lVar8 >> 7) < 0xffffffffffffff) {
    uVar9 = lVar8 >> 6;
    if (uVar14 <= uVar9) {
      uVar14 = uVar9;
    }
    if (uVar14 == 0) {
      lVar8 = 0;
      goto LAB_012c7584;
    }
  }
  else {
    uVar14 = 0x1ffffffffffffff;
  }
  lVar8 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar14 << 7,0x10);
  if (lVar8 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_012c7584:
  puVar3 = PTR_DAT_02710860;
  lVar11 = param_1[3];
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_012c7764:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
  puVar1 = (undefined8 *)(lVar8 + lVar15 * 0x80);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,puVar1 + 4);
    uVar2 = *param_2;
    uVar6 = param_2[1];
    uVar10 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar10;
    *puVar1 = uVar2;
    puVar1[1] = uVar6;
  }
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar15 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 == lVar15) {
    puVar13 = puVar1;
    lVar4 = lVar15;
  }
  else {
    lVar11 = 0;
    do {
      lVar12 = param_1[3];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_012c7764;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar12 = lVar4 + lVar11;
      puVar13 = (undefined8 *)((long)puVar1 + lVar11 + -0x80);
      *puVar13 = 0;
      *(undefined8 *)((long)puVar1 + lVar11 + -0x70) = 0;
      *(undefined8 *)((long)puVar1 + lVar11 + -0x68) = 0;
      *(undefined8 *)((long)puVar1 + lVar11 + -0x78) = 0;
      if (*(code **)(lVar12 + -0x68) != (code *)0x0) {
        (**(code **)(lVar12 + -0x68))(lVar12 + -0x60,(long)puVar1 + lVar11 + -0x60);
        uVar6 = *(undefined8 *)(lVar12 + -0x80);
        uVar10 = *(undefined8 *)(lVar12 + -0x68);
        uVar2 = *(undefined8 *)(lVar12 + -0x78);
        *(undefined8 *)((long)puVar1 + lVar11 + -0x70) = *(undefined8 *)(lVar12 + -0x70);
        *(undefined8 *)((long)puVar1 + lVar11 + -0x68) = uVar10;
        *puVar13 = uVar6;
        *(undefined8 *)((long)puVar1 + lVar11 + -0x78) = uVar2;
        pcVar7 = *(code **)(lVar12 + -0x78);
        if (pcVar7 != (code *)0x0) {
          *(undefined8 *)(lVar12 + -0x70) = 0;
          *(undefined8 *)(lVar12 + -0x68) = 0;
          *(undefined8 *)(lVar12 + -0x80) = 0;
          *(undefined8 *)(lVar12 + -0x78) = 0;
          (*pcVar7)(lVar12 + -0x60);
        }
      }
      lVar11 = lVar11 + -0x80;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    } while (lVar15 - lVar4 != lVar11);
    lVar15 = param_1[1];
    puVar13 = (undefined8 *)((long)puVar1 + lVar11);
    lVar4 = *param_1;
  }
  lVar11 = param_1[2];
  *param_1 = (long)puVar13;
  param_1[1] = (long)(puVar1 + 0x10);
  param_1[2] = lVar8 + uVar14 * 0x80;
  while (lVar8 = lVar15, lVar8 != lVar4) {
    pcVar7 = *(code **)(lVar8 + -0x78);
    lVar15 = lVar8 + -0x80;
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar8 + -0x70) = 0;
      *(undefined8 *)(lVar8 + -0x68) = 0;
      *(undefined8 *)(lVar8 + -0x80) = 0;
      *(undefined8 *)(lVar8 + -0x78) = 0;
      (*pcVar7)(lVar8 + -0x60);
    }
  }
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x012c7740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,lVar11 - lVar4,0x10);
  return;
}


