/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b76070; name: FUN_00b76070
 */


undefined8 FUN_00b76070(long param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long local_68;
  undefined1 auStack_60 [24];
  long local_48;
  
  uVar1 = FUN_006fd100(*(undefined8 *)(param_3 + 8),0);
  FUN_0010d170(&local_68,uVar1);
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x1f0,0x10);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_006cf0c0(auStack_60,&local_68);
  FUN_006fbcf0(uVar1,param_3,auStack_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  lVar2 = *(long *)(param_1 + 0xb70);
  *(undefined8 *)(param_1 + 0xb70) = uVar1;
  if (lVar2 != 0) {
    FUN_00784490(lVar2);
    (**(code **)(**(long **)(param_1 + 0xb78) + 0x18))
              (*(long **)(param_1 + 0xb78),lVar2,*(undefined8 *)(param_1 + 0xb80),
               *(undefined8 *)(param_1 + 0xb88));
  }
  *(long **)(param_1 + 0xb78) = param_2;
  *(undefined8 *)(param_1 + 0xb80) = 0x1f0;
  *(undefined8 *)(param_1 + 0xb88) = 0x10;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return *(undefined8 *)(param_1 + 0xb70);
}


