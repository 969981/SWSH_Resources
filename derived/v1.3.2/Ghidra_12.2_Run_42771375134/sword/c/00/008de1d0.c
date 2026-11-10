/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008de1d0; name: FUN_008de1d0
 */


void FUN_008de1d0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02717c20;
  if (*(long *)PTR_DAT_02717c20 != 0) {
    return;
  }
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x90,8);
  if (lVar3 == 0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_00883c20(lVar3,param_1);
  *(long **)(lVar3 + 8) = param_1;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x90;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)puVar1 != 0) {
    (**(code **)(*(long *)(*(long *)puVar1 + 0x48) + 0x18))();
    *(undefined8 *)puVar1 = 0;
  }
  *(long *)puVar1 = lVar3;
  return;
}


