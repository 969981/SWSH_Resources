/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0127a620; name: FUN_0127a620
 */


void FUN_0127a620(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (plVar3 = *(long **)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), plVar3 == (long *)0x0)) {
    plVar3 = (long *)FUN_0075ecb0();
    param_1[3] = plVar3;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  else {
    param_1[3] = plVar3;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (param_2 != 0) {
    if (0x276276276276276 < param_2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,param_2 * 0x68,8);
    if (puVar4 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    param_1[2] = puVar4 + param_2 * 0xd;
    *param_1 = puVar4;
    param_1[1] = puVar4;
    do {
      uVar5 = param_1[3];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *puVar4 = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      param_2 = param_2 - 1;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      puVar4 = (undefined8 *)(param_1[1] + 0x68);
      param_1[1] = puVar4;
    } while (param_2 != 0);
  }
  return;
}


