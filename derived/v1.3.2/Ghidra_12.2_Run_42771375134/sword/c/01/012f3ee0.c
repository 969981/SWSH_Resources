/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f3ee0; name: FUN_012f3ee0
 */


void FUN_012f3ee0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  
  uVar13 = (long)param_3 - (long)param_2 >> 7;
  lVar9 = param_1[2];
  lVar12 = *param_1;
  if ((ulong)(lVar9 - lVar12 >> 7) < uVar13) {
    if (lVar12 != 0) {
      lVar8 = param_1[1];
      if (param_1[1] == lVar12) {
        lVar8 = lVar12;
      }
      else {
        do {
          pcVar10 = *(code **)(lVar8 + -0x78);
          lVar9 = lVar8 + -0x80;
          if (pcVar10 != (code *)0x0) {
            *(undefined8 *)(lVar8 + -0x70) = 0;
            *(undefined8 *)(lVar8 + -0x68) = 0;
            *(undefined8 *)(lVar8 + -0x80) = 0;
            *(undefined8 *)(lVar8 + -0x78) = 0;
            (*pcVar10)(lVar8 + -0x60);
          }
          lVar8 = lVar9;
        } while (lVar12 != lVar9);
        lVar9 = param_1[2];
        lVar8 = *param_1;
      }
      param_1[1] = lVar12;
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar8,lVar9 - lVar8,0x10);
      lVar9 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    if (uVar13 >> 0x39 != 0) {
LAB_012f4120:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar9 >> 7) < 0xffffffffffffff) {
      uVar11 = lVar9 >> 6;
      if ((uVar13 <= uVar11) && (uVar13 = uVar11, uVar11 >> 0x39 != 0)) goto LAB_012f4120;
    }
    else {
      uVar13 = 0x1ffffffffffffff;
    }
    puVar7 = (undefined8 *)
             (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar13 << 7,0x10);
    if (puVar7 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    param_1[2] = (long)(puVar7 + uVar13 * 0x10);
    *param_1 = (long)puVar7;
    param_1[1] = (long)puVar7;
    puVar6 = PTR_DAT_02710860;
    for (; param_2 != param_3; param_2 = param_2 + 0x10) {
      lVar9 = param_1[3];
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_012f4214:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar9;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      if ((code *)param_2[2] != (code *)0x0) {
        (*(code *)param_2[2])(param_2 + 4,puVar7 + 4);
        uVar3 = *param_2;
        uVar4 = param_2[1];
        uVar5 = param_2[3];
        puVar7[2] = param_2[2];
        puVar7[3] = uVar5;
        *puVar7 = uVar3;
        puVar7[1] = uVar4;
      }
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      puVar7 = (undefined8 *)(param_1[1] + 0x80);
      param_1[1] = (long)puVar7;
    }
  }
  else {
    uVar11 = param_1[1] - lVar12 >> 7;
    puVar7 = (undefined8 *)((long)param_2 + (param_1[1] - lVar12));
    puVar14 = puVar7;
    if (uVar13 <= uVar11) {
      puVar14 = param_3;
    }
    if (puVar14 != param_2) {
      lVar9 = 0;
      do {
        puVar1 = (undefined8 *)(lVar12 + lVar9);
        pcVar10 = (code *)puVar1[1];
        if (pcVar10 != (code *)0x0) {
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          (*pcVar10)(puVar1 + 4);
        }
        puVar2 = (undefined8 *)((long)param_2 + lVar9);
        if ((code *)puVar2[2] != (code *)0x0) {
          (*(code *)puVar2[2])(puVar2 + 4,puVar1 + 4);
          uVar3 = *puVar2;
          uVar4 = puVar2[1];
          uVar5 = puVar2[3];
          puVar1[2] = puVar2[2];
          puVar1[3] = uVar5;
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
        }
        lVar9 = lVar9 + 0x80;
      } while ((long)puVar14 - (long)param_2 != lVar9);
      lVar12 = lVar12 + lVar9;
    }
    puVar6 = PTR_DAT_02710860;
    if (uVar11 < uVar13) {
      if (puVar14 != param_3) {
        puVar14 = (undefined8 *)param_1[1];
        do {
          lVar9 = param_1[3];
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
          if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_012f4214;
          *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar9;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          puVar14[2] = 0;
          puVar14[3] = 0;
          *puVar14 = 0;
          puVar14[1] = 0;
          if ((code *)puVar7[2] != (code *)0x0) {
            (*(code *)puVar7[2])(puVar7 + 4,puVar14 + 4);
            uVar3 = *puVar7;
            uVar4 = puVar7[1];
            uVar5 = puVar7[3];
            puVar14[2] = puVar7[2];
            puVar14[3] = uVar5;
            *puVar14 = uVar3;
            puVar14[1] = uVar4;
          }
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
          puVar7 = puVar7 + 0x10;
          puVar14 = (undefined8 *)(param_1[1] + 0x80);
          param_1[1] = (long)puVar14;
        } while (param_3 != puVar7);
      }
    }
    else {
      lVar9 = param_1[1];
      while (lVar8 = lVar9, lVar8 != lVar12) {
        pcVar10 = *(code **)(lVar8 + -0x78);
        lVar9 = lVar8 + -0x80;
        if (pcVar10 != (code *)0x0) {
          *(undefined8 *)(lVar8 + -0x70) = 0;
          *(undefined8 *)(lVar8 + -0x68) = 0;
          *(undefined8 *)(lVar8 + -0x80) = 0;
          *(undefined8 *)(lVar8 + -0x78) = 0;
          (*pcVar10)(lVar8 + -0x60);
        }
      }
      param_1[1] = lVar12;
    }
  }
  return;
}


