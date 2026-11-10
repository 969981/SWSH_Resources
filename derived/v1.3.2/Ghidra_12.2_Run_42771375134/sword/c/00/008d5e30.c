/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d5e30; name: FUN_008d5e30
 */


void FUN_008d5e30(long param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_48 = *(undefined8 *)(param_1 + 8);
  local_58 = param_2;
  uStack_50 = param_3;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,400,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_008d9980(uVar1,&local_58);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  if (lVar2 != 0) {
    FUN_008d61f0(lVar2);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
              (*(long **)(param_1 + 0x30),lVar2,*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x40));
  }
  *(long **)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = 400;
  *(undefined8 *)(param_1 + 0x40) = 8;
  return;
}


