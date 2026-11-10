/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01209440; name: FUN_01209440
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01209440(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_1;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  plVar2 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x68,8);
  if (plVar2 != (long *)0x0) {
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[10] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[1] = 0;
    *plVar2 = (long)(PTR_DAT_02725f70 + 0x10);
    plVar2[2] = 0;
    plVar2[3] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_006e1890(plVar2 + 1);
  }
  (**(code **)(*param_1 + 0xb8))(param_1);
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
  uRam0000000000000000 = 0;
  _DAT_00000010 = 0;
  _DAT_00000008 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


