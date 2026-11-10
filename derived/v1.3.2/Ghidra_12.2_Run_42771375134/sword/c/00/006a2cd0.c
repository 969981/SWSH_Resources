/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a2cd0; name: FUN_006a2cd0
 */


void FUN_006a2cd0(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined2 *puVar6;
  long lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  long lVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_02710860;
  puVar6 = (undefined2 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar6 >> 1) < param_2) {
    lVar7 = (long)puVar6 - *param_1 >> 1;
    uVar1 = lVar7 + param_2;
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = param_1[2] - *param_1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x3ffffffffffffffe < (ulong)((long)uVar5 >> 1)) {
      uVar1 = 0x7fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 << 1,2);
      if (lVar3 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xb8))();
      }
    }
    puVar2 = PTR_DAT_02710860;
    puVar6 = (undefined2 *)(lVar3 + lVar7 * 2);
    puVar8 = puVar6;
    do {
      lVar10 = param_1[3];
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_006a2ed0;
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar10;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      param_2 = param_2 - 1;
      puVar9 = puVar8 + 1;
      *puVar8 = 0;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      puVar8 = puVar9;
    } while (param_2 != 0);
    lVar7 = *param_1;
    lVar10 = param_1[1];
    if (lVar10 != lVar7) {
      do {
        lVar11 = param_1[3];
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_006a2ed0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        puVar6 = puVar6 + -1;
        *puVar6 = *(undefined2 *)(lVar10 + -2);
        lVar10 = lVar10 + -2;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      } while (lVar7 != lVar10);
      lVar7 = *param_1;
    }
    lVar10 = param_1[2];
    *param_1 = (long)puVar6;
    param_1[1] = (long)puVar9;
    param_1[2] = lVar3 + uVar1 * 2;
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006a2eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar7,lVar10 - lVar7,2);
      return;
    }
  }
  else {
    do {
      lVar3 = param_1[3];
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_006a2ed0;
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar3;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *puVar6 = 0;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      puVar6 = (undefined2 *)(param_1[1] + 2);
      param_2 = param_2 - 1;
      param_1[1] = (long)puVar6;
    } while (param_2 != 0);
  }
  return;
}


