/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f71c0; name: FUN_011f71c0
 */


void FUN_011f71c0(undefined8 *param_1,long param_2,undefined1 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  plVar2 = (long *)*param_4;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = plVar2;
  param_1[4] = 0;
  if (param_2 != 0) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,param_2,1);
    if (puVar3 == (undefined1 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    *param_1 = puVar3;
    param_1[1] = puVar3;
    puVar1 = PTR_DAT_02710860;
    param_1[2] = puVar3 + param_2;
    do {
      uVar5 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar3 = *param_3;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      puVar3 = (undefined1 *)(param_1[1] + 1);
      param_2 = param_2 + -1;
      param_1[1] = puVar3;
    } while (param_2 != 0);
  }
  return;
}


