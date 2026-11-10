/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007875f0; name: FUN_007875f0
 */


/* WARNING: Control flow encountered bad instruction data */

long * FUN_007875f0(undefined8 param_1,long *param_2)

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
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,400,0x10);
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
  puVar1 = PTR_DAT_02716348;
  plVar4[0x20] = 0;
  plVar4[0x21] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x15] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1d] = 0;
  plVar4[9] = (long)(puVar1 + 0x50);
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = lVar6;
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0x14] = 0;
  FUN_019a44e0();
  FUN_019a4740(plVar4 + 0x14);
  FUN_019a42d0((long)plVar4 + 0xbc);
  plVar4[0x20] = -1;
  plVar4[0x21] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x24] = 0;
  plVar4[0x25] = 0;
  plVar4[0x22] = 0;
  plVar4[0x23] = 0;
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 400;
  plVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


