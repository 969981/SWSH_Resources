/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00728690; name: FUN_00728690
 */


void FUN_00728690(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  
  lVar7 = param_1[1] - *param_1 >> 3;
  uVar17 = 0x38e38e38e38e38e;
  uVar1 = lVar7 * -0x71c71c71c71c71c7 + 1;
  if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar9 * -0x71c71c71c71c71c7) < 0x1c71c71c71c71c7) {
    uVar10 = lVar9 * 0x1c71c71c71c71c72;
    uVar17 = uVar1;
    if (uVar1 <= uVar10) {
      uVar17 = uVar10;
    }
    if (uVar17 == 0) {
      lVar9 = 0;
      goto LAB_00728770;
    }
  }
  lVar9 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar17 * 0x48,8);
  if (lVar9 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00728770:
  puVar3 = PTR_DAT_02710860;
  lVar11 = param_1[3];
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00728984:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
  lVar7 = lVar9 + lVar7 * 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_0072e8a0(lVar7,*param_2,param_3,*param_4);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  puVar13 = (undefined8 *)*param_1;
  puVar14 = (undefined8 *)param_1[1];
  if (puVar14 == puVar13) {
    lVar4 = lVar7;
    puVar14 = puVar13;
  }
  else {
    lVar4 = 0;
    do {
      lVar12 = param_1[3];
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00728984;
      *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar12;
      lVar12 = lVar7 + lVar4;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      FUN_00728990(lVar12 + -0x48,(long)puVar14 + lVar4 + -0x48);
      lVar5 = *(long *)((long)puVar14 + lVar4 + -0x18);
      *(long *)(lVar12 + -0x18) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      uVar8 = *(undefined8 *)((long)puVar14 + lVar4 + -0x10);
      *(undefined1 *)(lVar12 + -8) = *(undefined1 *)((long)puVar14 + lVar4 + -8);
      *(undefined8 *)(lVar12 + -0x10) = uVar8;
      lVar4 = lVar4 + -0x48;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    } while ((long)puVar13 - (long)puVar14 != lVar4);
    puVar13 = (undefined8 *)*param_1;
    lVar4 = lVar7 + lVar4;
    puVar14 = (undefined8 *)param_1[1];
  }
  lVar11 = param_1[2];
  param_1[2] = lVar9 + uVar17 * 0x48;
  *param_1 = lVar4;
  param_1[1] = lVar7 + 0x48;
  while (puVar2 = puVar14, puVar2 != puVar13) {
    puVar14 = puVar2 + -9;
    if (puVar2[-3] != 0) {
      (**(code **)(*(long *)(puVar2[-3] + 0x48) + 0x18))();
      puVar2[-3] = 0;
    }
    plVar15 = (long *)*puVar14;
    if (plVar15 != (long *)0x0) {
      if ((long *)puVar2[-8] == plVar15) {
        plVar6 = plVar15;
      }
      else {
        plVar6 = (long *)puVar2[-8];
        do {
          plVar16 = plVar6 + -1;
          if (*plVar16 != 0) {
            (**(code **)(*(long *)(*plVar16 + 0x48) + 0x18))();
            plVar6[-1] = 0;
          }
          plVar6 = plVar16;
        } while (plVar15 != plVar16);
        plVar6 = (long *)*puVar14;
      }
      puVar2[-8] = plVar15;
      (**(code **)(*(long *)puVar2[-6] + 0x18))
                ((long *)puVar2[-6],plVar6,puVar2[-7] - (long)plVar6,8);
    }
  }
  if (puVar13 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00728960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar13,lVar11 - (long)puVar13,8);
  return;
}


