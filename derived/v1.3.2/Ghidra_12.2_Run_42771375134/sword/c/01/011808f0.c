/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011808f0; name: FUN_011808f0
 */


void FUN_011808f0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  plVar7 = (long *)param_2[3];
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (long)plVar7;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar9 = param_2[1] - *param_2;
  if (lVar9 != 0) {
    if (0x666666666666666 < (ulong)((lVar9 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,lVar9,8);
    if (puVar8 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    param_1[2] = (long)(puVar8 + (lVar9 >> 3));
    *param_1 = (long)puVar8;
    param_1[1] = (long)puVar8;
    puVar6 = PTR_DAT_02710860;
    puVar3 = (undefined8 *)param_2[1];
    for (puVar1 = (undefined8 *)*param_2; puVar1 != puVar3; puVar1 = puVar1 + 5) {
      lVar10 = param_1[3];
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar10;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      *puVar8 = *puVar1;
      uVar2 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[4];
      puVar8[3] = puVar1[3];
      puVar8[4] = uVar5;
      puVar8[1] = uVar2;
      puVar8[2] = uVar4;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      puVar8 = (undefined8 *)(param_1[1] + 0x28);
      param_1[1] = (long)puVar8;
    }
  }
  return;
}


