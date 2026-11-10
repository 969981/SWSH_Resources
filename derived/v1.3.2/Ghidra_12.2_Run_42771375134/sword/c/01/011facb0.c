/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011facb0; name: FUN_011facb0
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011facb0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x70,8);
  if (plVar3 != (long *)0x0) {
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[2] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    puVar1 = PTR_DAT_02718830 + 0x10;
    *plVar3 = (long)(PTR_DAT_02718828 + 0x10);
    plVar3[1] = (long)puVar1;
                    /* WARNING: Subroutine does not return */
    FUN_006e1890(plVar3 + 2);
  }
  (**(code **)(*param_1 + 0xb8))(param_1);
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


