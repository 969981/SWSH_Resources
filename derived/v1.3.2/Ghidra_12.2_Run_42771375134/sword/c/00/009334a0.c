/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009334a0; name: FUN_009334a0
 */


void FUN_009334a0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x40,8);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_00933770(uVar2,param_3,param_4);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    lVar3 = *(long *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar2;
    if (lVar3 != 0) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
                (*(long **)(param_1 + 0x10),lVar3,*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20));
    }
    *(long **)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_1 + 0x18) = 0x40;
    *(undefined8 *)(param_1 + 0x20) = 8;
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x40,8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      FUN_00933770(uVar2,param_3,param_4);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      lVar3 = *(long *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      if (lVar3 != 0) {
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
                  (*(long **)(param_1 + 0x30),lVar3,*(undefined8 *)(param_1 + 0x38),
                   *(undefined8 *)(param_1 + 0x40));
      }
      *(long **)(param_1 + 0x30) = param_2;
      *(undefined8 *)(param_1 + 0x38) = 0x40;
      *(undefined8 *)(param_1 + 0x40) = 8;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


