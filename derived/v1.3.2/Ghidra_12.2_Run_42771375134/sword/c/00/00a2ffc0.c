/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a2ffc0; name: FUN_00a2ffc0
 */


long * FUN_00a2ffc0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x7f0,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar4,*param_3,*param_4,*param_5);
  puVar1 = PTR_DAT_02718ef0 + 0xe8;
  puVar2 = PTR_DAT_02718ef0 + 0x10;
  plVar4[9] = (long)(PTR_DAT_02718ef0 + 0xa8);
  plVar4[10] = (long)puVar1;
  puVar1 = PTR_DAT_02718ef8;
  *plVar4 = (long)puVar2;
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x7f0;
  *(undefined1 *)(plVar4 + 0xbb) = 0;
  plVar4[0xbf] = 0;
  plVar4[0xbe] = 0;
  plVar4[0xbd] = 0;
  plVar4[0xba] = (long)(puVar1 + 0x10);
  plVar4[0xbc] = 0;
  plVar4[0xcf] = 0;
  plVar4[0xce] = 0;
  plVar4[0xcd] = 0;
  plVar4[0xcc] = 0;
  plVar4[0xdc] = (long)(puVar1 + 0x10);
  *(undefined1 *)(plVar4 + 0xdd) = 0;
  plVar4[0xe1] = 0;
  plVar4[0xe0] = 0;
  plVar4[0xdf] = 0;
  plVar4[0xde] = 0;
  plVar4[0xf1] = 0;
  plVar4[0xf0] = 0;
  plVar4[0xef] = 0;
  plVar4[0xee] = 0;
  plVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


