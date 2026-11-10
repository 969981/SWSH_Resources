/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007cee00; name: FUN_007cee00
 */


void FUN_007cee00(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  plVar3 = (long *)param_2[3];
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (long)plVar3;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar5 = param_2[1] - *param_2;
  if (lVar5 != 0) {
    if ((ulong)(lVar5 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,lVar5,8);
    if (puVar4 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    *param_1 = (long)puVar4;
    param_1[1] = (long)puVar4;
    param_1[2] = (long)(puVar4 + (lVar5 >> 3));
    puVar2 = PTR_DAT_02710860;
    puVar1 = (undefined8 *)param_2[1];
    for (puVar6 = (undefined8 *)*param_2; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      lVar7 = param_1[3];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar7;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar4 = *puVar6;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      puVar4 = (undefined8 *)(param_1[1] + 8);
      param_1[1] = (long)puVar4;
    }
  }
  return;
}


