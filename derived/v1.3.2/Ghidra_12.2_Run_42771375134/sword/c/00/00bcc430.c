/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcc430; name: FUN_00bcc430
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_00bcc430(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xe0,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    _DAT_000000d8 = 0;
    _DAT_000000d0 = 0;
    _DAT_000000c8 = 0;
    _DAT_000000c0 = 0;
    _DAT_000000b8 = 0;
    _DAT_000000b0 = 0;
    _DAT_000000a8 = 0;
    _DAT_000000a0 = 0;
    _DAT_00000098 = 0;
    _DAT_00000090 = 0;
    _DAT_00000088 = 0;
    _DAT_00000080 = 0;
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
    uRam0000000000000000 = 0;
    _DAT_00000010 = 0;
    _DAT_00000008 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar3[0x1a] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x18] = 0;
  plVar3[0x19] = 0;
  plVar3[0x16] = 0;
  plVar3[0x17] = 0;
  plVar3[0x14] = 0;
  plVar3[0x15] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *plVar3 = (long)(PTR_DAT_02710a18 + 0x10);
  plVar3[7] = 0;
  *(undefined4 *)(plVar3 + 8) = 0;
  *(undefined4 *)(plVar3 + 6) = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  nn::os::GetTlsValue(*(undefined4 *)puVar1);
  *(undefined4 *)(plVar3 + 10) = 0;
  puVar1 = PTR_DAT_0271b728;
  plVar3[0x12] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[0x14] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1a] = 0;
  plVar3[9] = (long)(puVar1 + 0x48);
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0xe0;
  plVar3[4] = 0x10;
  plVar3[0x17] = 0;
  plVar3[0x18] = 0;
  plVar3[0x15] = 0;
  plVar3[0x16] = 0;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


