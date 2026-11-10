/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01331ea0; name: FUN_01331ea0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_01331ea0(undefined8 param_1,long *param_2)

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
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8);
  if (lVar2 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    FUN_012d6b00(0);
    _DAT_00000010 = 0;
    _SUB_00000018 = 0x60;
    _SUB_00000020 = 8;
    _DAT_00000008 = param_2;
  }
  else {
    FUN_012d6b00(lVar2);
    *(long **)(lVar2 + 8) = param_2;
    *(long *)(lVar2 + 0x10) = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 0x60;
    *(undefined8 *)(lVar2 + 0x20) = 8;
  }
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  return lVar2;
}


