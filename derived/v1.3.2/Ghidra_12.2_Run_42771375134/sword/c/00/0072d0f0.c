/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072d0f0; name: FUN_0072d0f0
 */


void FUN_0072d0f0(undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  plVar3 = (long *)param_2[3];
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = plVar3;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar5 = param_2[1] - *param_2;
  if (lVar5 != 0) {
    if ((ulong)(lVar5 >> 2) >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar4 = (undefined4 *)(**(code **)(*plVar3 + 0x10))(plVar3,lVar5,4);
    if (puVar4 == (undefined4 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar4 + (lVar5 >> 2);
    puVar2 = PTR_DAT_02710860;
    puVar1 = (undefined4 *)param_2[1];
    for (puVar6 = (undefined4 *)*param_2; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      uVar7 = param_1[3];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar4 = *puVar6;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      puVar4 = (undefined4 *)(param_1[1] + 4);
      param_1[1] = puVar4;
    }
  }
  return;
}


