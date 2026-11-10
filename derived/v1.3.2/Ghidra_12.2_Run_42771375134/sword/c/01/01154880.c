/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01154880; name: FUN_01154880
 */


long * FUN_01154880(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x7b0,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar5,*param_3,*param_4,*param_5);
  plVar5[0xbe] = 0;
  plVar5[0xbd] = 0;
  *(undefined1 *)((long)plVar5 + 0x5cb) = 1;
  plVar5[0xbc] = 0;
  plVar5[0xbb] = 0;
  plVar5[0xba] = 0;
  plVar5[0xc6] = 0;
  plVar5[0xce] = 0;
  plVar5[0xd6] = 0;
  plVar5[0xde] = 0;
  plVar5[0xe0] = 0;
  puVar1 = PTR_DAT_02724d68 + 0x10;
  puVar2 = PTR_DAT_02724d68 + 0xd0;
  puVar3 = PTR_DAT_02724d68 + 0x110;
  *(undefined1 *)(plVar5 + 0xe9) = 0;
  plVar5[0xe8] = 0;
  plVar5[0xe7] = 0;
  plVar5[0xe6] = 0;
  plVar5[0xe5] = 0;
  plVar5[0xe4] = 0;
  plVar5[0xe3] = 0;
  plVar5[0xe2] = 0;
  plVar5[0xe1] = 0;
  plVar5[0xf4] = 0;
  plVar5[0xf3] = 0;
  plVar5[0xf2] = 0;
  plVar5[0xf1] = 0;
  plVar5[0xf0] = 0;
  plVar5[0xef] = 0;
  plVar5[0xee] = 0;
  plVar5[0xed] = 0;
  plVar5[0xec] = 0;
  plVar5[0xeb] = 0;
  plVar5[0xea] = 0;
  plVar5[9] = (long)puVar2;
  plVar5[10] = (long)puVar3;
  plVar5[2] = (long)plVar5;
  plVar5[3] = 0x7b0;
  plVar5[4] = 0x10;
  *plVar5 = (long)puVar1;
  plVar5[1] = (long)param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


