/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011807d0; name: FUN_011807d0
 */


void FUN_011807d0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  plVar6 = (long *)param_2[3];
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = plVar6;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar8 = param_2[1] - *param_2;
  if (lVar8 != 0) {
    if ((ulong)(lVar8 >> 6) >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,lVar8,8);
    if (puVar7 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    *param_1 = puVar7;
    param_1[1] = puVar7;
    param_1[2] = puVar7 + (lVar8 >> 6) * 8;
    puVar5 = PTR_DAT_02710860;
    puVar2 = (undefined8 *)param_2[1];
    for (puVar1 = (undefined8 *)*param_2; puVar1 != puVar2; puVar1 = puVar1 + 8) {
      uVar9 = param_1[3];
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar9;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      uVar9 = *puVar1;
      uVar3 = puVar1[1];
      uVar4 = puVar1[3];
      puVar7[2] = puVar1[2];
      puVar7[3] = uVar4;
      *puVar7 = uVar9;
      puVar7[1] = uVar3;
      uVar9 = puVar1[4];
      uVar3 = puVar1[5];
      uVar4 = puVar1[7];
      puVar7[6] = puVar1[6];
      puVar7[7] = uVar4;
      puVar7[4] = uVar9;
      puVar7[5] = uVar3;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      puVar7 = (undefined8 *)(param_1[1] + 0x40);
      param_1[1] = puVar7;
    }
  }
  return;
}


