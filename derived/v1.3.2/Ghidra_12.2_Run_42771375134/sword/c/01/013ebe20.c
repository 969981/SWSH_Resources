/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013ebe20; name: FUN_013ebe20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013ebe20(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_2;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x88,8);
  if (puVar2 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    _DAT_00000078 = 0;
    _DAT_00000070 = 0;
    _DAT_00000068 = 0;
    _DAT_00000060 = 0;
    _DAT_00000058 = 0;
    _DAT_00000050 = 0;
    _DAT_00000048 = 0;
    _DAT_00000040 = 0;
    _DAT_00000038 = 0;
    _DAT_00000030 = 0;
    _DAT_00000028 = 0;
    _SUB_00000020 = 0;
    _SUB_00000018 = 0;
    _DAT_00000080 = 0;
    uRam0000000000000000 = 0;
    _DAT_00000010 = 0;
    _DAT_00000008 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_013c8ba0();
  }
  *(undefined4 *)(puVar2 + 0x10) = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *puVar2 = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[9] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_013c8ba0();
}


