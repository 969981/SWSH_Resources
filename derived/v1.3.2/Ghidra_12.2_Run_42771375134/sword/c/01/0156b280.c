/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0156b280; name: FUN_0156b280
 */


/* WARNING: Control flow encountered bad instruction data */

long * FUN_0156b280(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x80,8);
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
  nn::os::GetTlsValue(*(undefined4 *)puVar1);
  *(undefined4 *)(plVar4 + 10) = 0;
  puVar1 = PTR_DAT_0272af68;
  *(undefined8 *)((long)plVar4 + 0x61) = 0;
  *(undefined8 *)((long)plVar4 + 0x5c) = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = (long)param_2;
  plVar4[9] = (long)(puVar1 + 0x48);
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x80;
  *(undefined8 *)((long)plVar4 + 0x54) = 0;
  *(undefined4 *)((long)plVar4 + 0x6c) = 1;
  *(undefined2 *)(plVar4 + 0xe) = 0;
  *(undefined8 *)((long)plVar4 + 0x74) = 0;
  plVar4[4] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


