/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ab2f0; name: FUN_006ab2f0
 */


void FUN_006ab2f0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  plVar4 = (long *)param_2[3];
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (long)plVar4;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar6 = param_2[1] - *param_2;
  if (lVar6 != 0) {
    if (0x1555555555555555 < (ulong)((lVar6 >> 2) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,lVar6,4);
    if (puVar5 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    param_1[2] = (long)puVar5 + (lVar6 >> 2) * 4;
    *param_1 = (long)puVar5;
    param_1[1] = (long)puVar5;
    puVar3 = PTR_DAT_02710860;
    puVar2 = (undefined8 *)param_2[1];
    for (puVar1 = (undefined8 *)*param_2; puVar1 != puVar2;
        puVar1 = (undefined8 *)((long)puVar1 + 0xc)) {
      lVar8 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      uVar7 = *puVar1;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar1 + 1);
      *puVar5 = uVar7;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar5 = (undefined8 *)(param_1[1] + 0xc);
      param_1[1] = (long)puVar5;
    }
  }
  return;
}


