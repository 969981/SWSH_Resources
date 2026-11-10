/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b4e90; name: FUN_006b4e90
 */


void FUN_006b4e90(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x150,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_006b5860(uVar1,param_3);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  lVar2 = *(long *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = uVar1;
  if (lVar2 != 0) {
    FUN_006b5410(lVar2);
    (**(code **)(**(long **)(param_1 + 0x1b8) + 0x18))
              (*(long **)(param_1 + 0x1b8),lVar2,*(undefined8 *)(param_1 + 0x1c0),
               *(undefined8 *)(param_1 + 0x1c8));
    uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  }
  *(long **)(param_1 + 0x1b8) = param_2;
  *(undefined8 *)(param_1 + 0x1c0) = 0x150;
  *(undefined8 *)(param_1 + 0x1c8) = 8;
  FUN_006b6400(uVar1,param_4,param_1 + 0x68,*(undefined8 *)(param_1 + 0x60));
  FUN_006b6490(*(undefined8 *)(param_1 + 0x1b0),param_1 + 0x88,param_5);
  return;
}


