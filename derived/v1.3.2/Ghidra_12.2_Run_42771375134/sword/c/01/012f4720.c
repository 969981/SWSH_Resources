/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f4720; name: FUN_012f4720
 */


void FUN_012f4720(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)param_2[3];
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (long)plVar3;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar4 = param_2[1] - *param_2;
  if (lVar4 != 0) {
    if ((ulong)(lVar4 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
    if (plVar3 == (long *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + (lVar4 >> 3));
    puVar2 = PTR_DAT_02710860;
    plVar1 = (long *)param_2[1];
    for (param_2 = (long *)*param_2; param_2 != plVar1; param_2 = param_2 + 1) {
      lVar5 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar5;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar5 = *param_2;
      *plVar3 = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      plVar3 = (long *)(param_1[1] + 8);
      param_1[1] = (long)plVar3;
    }
  }
  return;
}


