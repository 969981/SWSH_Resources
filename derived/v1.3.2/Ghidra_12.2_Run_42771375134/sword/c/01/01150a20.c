/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01150a20; name: FUN_01150a20
 */


/* WARNING: Control flow encountered bad instruction data */

long * FUN_01150a20(undefined8 param_1,long *param_2)

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
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1a8,8);
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
  puVar1 = PTR_DAT_02724cf8;
  *(undefined2 *)((long)plVar4 + 0x54) = 0x100;
  *(undefined8 *)((long)plVar4 + 0xbe) = 0;
  *(undefined8 *)((long)plVar4 + 0xb6) = 0;
  plVar4[0x21] = 0;
  plVar4[0x22] = 0;
  plVar4[9] = (long)(puVar1 + 0x48);
  *plVar4 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar4 + 0xcb) = 0;
  *(undefined8 *)((long)plVar4 + 0xc6) = 0;
  *(undefined8 *)((long)plVar4 + 0xae) = 0;
  *(undefined8 *)((long)plVar4 + 0xa6) = 0;
  *(undefined8 *)((long)plVar4 + 0x9e) = 0;
  *(undefined8 *)((long)plVar4 + 0x96) = 0;
  *(undefined8 *)((long)plVar4 + 0x8e) = 0;
  *(undefined8 *)((long)plVar4 + 0x86) = 0;
  *(undefined8 *)((long)plVar4 + 0x7e) = 0;
  *(undefined8 *)((long)plVar4 + 0x76) = 0;
  *(undefined8 *)((long)plVar4 + 0x6e) = 0;
  *(undefined8 *)((long)plVar4 + 0x66) = 0;
  *(undefined8 *)((long)plVar4 + 0x5e) = 0;
  *(undefined8 *)((long)plVar4 + 0x56) = 0;
  *(undefined1 *)((long)plVar4 + 0xd3) = 1;
  *(undefined4 *)((long)plVar4 + 0xd4) = 0;
  *(undefined2 *)(plVar4 + 0x1b) = 0;
  *(undefined8 *)((long)plVar4 + 0xec) = 0;
  *(undefined8 *)((long)plVar4 + 0xe4) = 0;
  *(undefined8 *)((long)plVar4 + 0xdc) = 0;
  *(undefined8 *)((long)plVar4 + 0xf4) = 0x1000000;
  *(undefined2 *)((long)plVar4 + 0xfc) = 0;
  *(undefined1 *)((long)plVar4 + 0x11a) = 0;
  *(undefined2 *)(plVar4 + 0x23) = 0;
  plVar4[0x20] = 0;
  *(undefined1 *)((long)plVar4 + 0x11b) = 1;
  *(undefined4 *)((long)plVar4 + 0x11c) = 0;
  *(undefined2 *)(plVar4 + 0x24) = 0;
  *(undefined8 *)((long)plVar4 + 0x134) = 0;
  *(undefined1 *)((long)plVar4 + 0x13e) = 0;
  *(undefined2 *)((long)plVar4 + 0x13c) = 0;
  *(undefined8 *)((long)plVar4 + 300) = 0;
  *(undefined8 *)((long)plVar4 + 0x124) = 0;
  *(undefined1 *)((long)plVar4 + 0x13f) = 1;
  *(undefined4 *)(plVar4 + 0x28) = 0;
  *(undefined2 *)((long)plVar4 + 0x144) = 0;
  *(undefined1 *)(plVar4 + 0x2b) = 0;
  plVar4[0x29] = 0;
  plVar4[0x2a] = 0;
  *(undefined8 *)((long)plVar4 + 0x17a) = 0;
  *(undefined8 *)((long)plVar4 + 0x174) = 0;
  *(undefined8 *)((long)plVar4 + 0x16c) = 0;
  *(undefined8 *)((long)plVar4 + 0x164) = 0;
  *(undefined8 *)((long)plVar4 + 0x15c) = 0;
  *(undefined8 *)((long)plVar4 + 0x184) = 0;
  *(undefined1 *)((long)plVar4 + 0x197) = 1;
  *(undefined4 *)((long)plVar4 + 0x18c) = 0;
  *(undefined1 *)((long)plVar4 + 0x191) = 0;
  *(undefined1 *)((long)plVar4 + 0x193) = 0;
  *(undefined1 *)((long)plVar4 + 0x195) = 0;
  plVar4[0x33] = 0;
  plVar4[0x34] = 0;
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x1a8;
  plVar4[4] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


