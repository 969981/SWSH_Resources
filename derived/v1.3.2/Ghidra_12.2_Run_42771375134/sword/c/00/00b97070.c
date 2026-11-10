/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b97070; name: FUN_00b97070
 */


void FUN_00b97070(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_2;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x3d0,0x10);
  if (lVar2 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_01712ba0(lVar2,param_3,1,0,0);
  *(long **)(lVar2 + 8) = param_2;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x3d0;
  *(undefined8 *)(lVar2 + 0x20) = 0x10;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(long *)(param_1 + 0x80) = lVar2;
  FUN_01713dd0(lVar2);
  *(undefined1 *)(*(long *)(param_1 + 0x80) + 0x3c4) = 0;
  return;
}


