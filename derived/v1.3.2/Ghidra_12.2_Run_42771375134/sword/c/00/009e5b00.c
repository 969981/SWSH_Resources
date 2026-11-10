/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e5b00; name: FUN_009e5b00
 */


long FUN_009e5b00(undefined8 param_1,long *param_2,undefined8 *param_3,long *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined4 *param_9,undefined1 *param_10)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_68;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_2;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,200,8);
  if (lVar2 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  uVar3 = *param_3;
  local_68 = *param_4;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN_009e5e20(lVar2,uVar3,&local_68,*param_5,*param_6,*param_7,*param_8,*param_9,*param_10);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  *(long **)(lVar2 + 8) = param_2;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 200;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  return lVar2;
}


