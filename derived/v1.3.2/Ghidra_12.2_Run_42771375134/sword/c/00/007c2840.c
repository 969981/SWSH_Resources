/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c2840; name: FUN_007c2840
 */


void FUN_007c2840(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if ((*(long *)(param_1 + 0x50) != 0) && ((*(byte *)(*(long *)(param_1 + 0x50) + 0x2fa) & 1) == 0))
  {
    return;
  }
  plVar3 = *(long **)(param_1 + 8);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar3;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,0x580,8);
  if (lVar2 == 0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN_007c3360(lVar2,param_1 + 0xf8);
  *(long **)(lVar2 + 8) = plVar3;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x580;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(long *)(param_1 + 0x50) = lVar2;
  FUN_007c3550(lVar2,param_1 + 0x148);
  FUN_007c35c0(*(undefined8 *)(param_1 + 0x50),param_1 + 0x150);
  FUN_006d0560(*(undefined8 *)(param_1 + 0x50),param_1 + 0x100,0xffffffff,0x10);
  return;
}


