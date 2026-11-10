/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0010cd40; name: FUN_0010cd40
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0010cd40(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x98,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
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
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  plVar4[4] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  puVar1 = PTR_DAT_02710a18 + 0x10;
  plVar4[7] = 0;
  *(undefined4 *)(plVar4 + 8) = 0;
  *(undefined4 *)(plVar4 + 6) = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *plVar4 = (long)puVar1;
  plVar4[1] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  plVar4[1] = lVar6;
  *PTR_DAT_02710b48 = 1;
  puVar1 = PTR_DAT_02710b50;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[9] = (long)(puVar1 + 0x40);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar5 = FUN_0075ecb0();
  }
  *(undefined4 *)(plVar4 + 0x11) = 1;
  plVar4[0xe] = lVar5;
  plVar4[0xf] = 0;
  *(undefined4 *)(plVar4 + 0x10) = 0;
  plVar4[0x12] = 0;
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x98;
  plVar4[4] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


