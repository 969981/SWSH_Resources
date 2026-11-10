/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b88eb0; name: FUN_00b88eb0
 */


long FUN_00b88eb0(undefined8 param_1,long *param_2,long *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined4 *param_10,undefined4 *param_11,undefined4 *param_12)

{
  long lVar1;
  long lVar2;
  long local_68;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_2;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0xd0,8);
  if (lVar2 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_68 = *param_3;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN_00ab1bb0(*param_4,*param_5,*param_6,*param_7,*param_8,*param_9,*param_10,lVar2,&local_68,
               *param_11,*param_12);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  *(long **)(lVar2 + 8) = param_2;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0xd0;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  return lVar2;
}


