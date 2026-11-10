/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b7d70; name: FUN_011b7d70
 */


void FUN_011b7d70(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar3 = PTR_DAT_02710860;
  lVar9 = *param_1;
  lVar10 = param_1[1];
  if (lVar10 == lVar9) {
    lVar11 = param_2[1];
  }
  else {
    lVar11 = param_2[1];
    do {
      lVar8 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      uVar7 = *(undefined8 *)(lVar10 + -0x78);
      uVar1 = *(undefined8 *)(lVar10 + -0x88);
      uVar2 = *(undefined8 *)(lVar10 + -0x80);
      *(undefined2 *)(lVar11 + -0x70) = *(undefined2 *)(lVar10 + -0x70);
      *(undefined8 *)(lVar11 + -0x80) = uVar2;
      *(undefined8 *)(lVar11 + -0x78) = uVar7;
      *(undefined8 *)(lVar11 + -0x88) = uVar1;
      *(undefined4 *)(lVar11 + -0x68) = *(undefined4 *)(lVar10 + -0x68);
      FUN_006a7510(lVar11 + -0x60,lVar10 + -0x60);
      *(undefined8 *)(lVar11 + -0x30) = 0;
      *(undefined8 *)(lVar11 + -0x28) = 0;
      plVar5 = *(long **)(lVar10 + -0x18);
      *(undefined8 *)(lVar11 + -0x10) = 0;
      *(undefined8 *)(lVar11 + -0x20) = 0;
      *(long **)(lVar11 + -0x18) = plVar5;
      *(undefined4 *)(lVar11 + -8) = 0;
      lVar8 = *(long *)(lVar10 + -0x28);
      if (lVar8 != 0) {
        if (lVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar8 = (lVar8 - 1U >> 6) + 1;
        lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,lVar8 * 8,1);
        if (lVar6 == 0) {
          (**(code **)(**(long **)(lVar11 + -0x18) + 0xb8))();
        }
        *(long *)(lVar11 + -0x30) = lVar6;
        *(undefined8 *)(lVar11 + -0x28) = 0;
        *(long *)(lVar11 + -0x20) = lVar8;
        FUN_0072ccd0((undefined8 *)(lVar11 + -0x30),*(long *)(lVar10 + -0x30),0,
                     *(long *)(lVar10 + -0x30) +
                     (*(ulong *)(lVar10 + -0x28) >> 3 & 0x1ffffffffffffff8),
                     *(ulong *)(lVar10 + -0x28) & 0x3f);
      }
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      lVar10 = lVar10 + -0x88;
      lVar11 = param_2[1] + -0x88;
      param_2[1] = lVar11;
    } while (lVar9 != lVar10);
    lVar9 = *param_1;
  }
  *param_1 = lVar11;
  param_2[1] = lVar9;
  lVar9 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar9;
  lVar9 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar9;
  *param_2 = param_2[1];
  return;
}


