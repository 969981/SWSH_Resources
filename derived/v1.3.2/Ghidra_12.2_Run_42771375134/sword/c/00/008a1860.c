/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a1860; name: FUN_008a1860
 */


long * FUN_008a1860(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x8a0,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar3,*param_3,*param_4,*param_5);
  puVar1 = PTR_DAT_02717878;
  *plVar3 = (long)(PTR_DAT_02717878 + 0x10);
  plVar3[9] = (long)(puVar1 + 0xa8);
  plVar3[10] = (long)(puVar1 + 0xe8);
  *(undefined8 *)((long)plVar3 + 0x634) = 0;
  *(undefined8 *)((long)plVar3 + 0x62c) = 0;
  *(undefined8 *)((long)plVar3 + 0x624) = 0;
  *(undefined8 *)((long)plVar3 + 0x61c) = 0;
  *(undefined8 *)((long)plVar3 + 0x614) = 0;
  *(undefined8 *)((long)plVar3 + 0x60c) = 0;
  *(undefined8 *)((long)plVar3 + 0x604) = 0;
  *(undefined8 *)((long)plVar3 + 0x5fc) = 0;
  *(undefined8 *)((long)plVar3 + 0x5f4) = 0;
  *(undefined8 *)((long)plVar3 + 0x5cc) = 0;
  *(undefined8 *)((long)plVar3 + 0x5ec) = 0;
  *(undefined8 *)((long)plVar3 + 0x63c) = 0;
  *(undefined8 *)((long)plVar3 + 0x5e4) = 0;
  *(undefined8 *)((long)plVar3 + 0x5dc) = 0;
  *(undefined8 *)((long)plVar3 + 0x5d4) = 0;
  *(undefined8 *)((long)plVar3 + 0x644) = 0x9ffffffff;
  *(undefined4 *)(plVar3 + 0x102) = 0xffffffff;
  *(undefined1 *)((long)plVar3 + 0x70c) = 0;
  *(undefined4 *)(plVar3 + 0xe2) = 0;
  plVar3[0xf5] = 0;
  plVar3[0xf4] = 0;
  plVar3[0xf3] = 0;
  plVar3[0xf2] = 0;
  plVar3[0xd3] = 0;
  plVar3[0xd2] = 0;
  plVar3[0xd1] = 0;
  plVar3[0xd0] = 0;
  plVar3[0xcf] = 0;
  plVar3[0xce] = 0;
  plVar3[0xf0] = 0;
  plVar3[0xef] = 0;
  plVar3[0xee] = 0;
  plVar3[0xed] = 0;
  plVar3[0xec] = 0;
  plVar3[0xeb] = 0;
  plVar3[0xea] = 0;
  plVar3[0xe9] = 0;
  plVar3[0xe8] = 0;
  plVar3[0xe7] = 0;
  plVar3[0xe6] = 0;
  plVar3[0xe5] = 0;
  plVar3[0xe4] = 0;
  plVar3[0xe3] = 0;
  plVar3[0x105] = 0;
  plVar3[0x104] = 0;
  plVar3[0x103] = 0;
  *(undefined8 *)((long)plVar3 + 0x896) = 0;
  plVar3[0x112] = 0;
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x8a0;
  plVar3[4] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


