/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103a6b0; name: FUN_0103a6b0
 */


/* WARNING: Control flow encountered bad instruction data */

long * FUN_0103a6b0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1a0,0x10);
  puVar2 = PTR_DAT_02710a18;
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar4[7] = 0;
  *(undefined4 *)(plVar4 + 8) = 0;
  *(undefined4 *)(plVar4 + 6) = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[2] = 0;
  plVar4[3] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  puVar1 = PTR_DAT_02723900;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(plVar4 + 10) = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[9] = (long)(puVar1 + 0x48);
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = lVar6;
  FUN_012b4040(plVar4 + 0xd);
  plVar4[0x24] = 0;
  plVar4[0x25] = 0;
  plVar4[0x22] = 0;
  plVar4[0x23] = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  puVar1 = PTR_DAT_02710a70 + 0x10;
  plVar4[0x32] = 0;
  *(undefined4 *)(plVar4 + 0x33) = 0;
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[0x10] = (long)puVar1;
  plVar4[0x11] = 0;
  plVar4[3] = 0x1a0;
  plVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


