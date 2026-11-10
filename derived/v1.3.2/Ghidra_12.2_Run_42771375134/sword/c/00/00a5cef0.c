/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5cef0; name: FUN_00a5cef0
 */


long * FUN_00a5cef0(undefined8 param_1,long *param_2,undefined8 *param_3)

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
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x128,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff5da0(plVar5,*param_3);
  *(undefined2 *)(plVar5 + 0xc) = 0;
  puVar3 = PTR_DAT_02719440;
  *(undefined1 *)((long)plVar5 + 0x62) = 0;
  plVar5[0xd] = 0;
  *(undefined1 *)(plVar5 + 0xe) = 0;
  puVar1 = PTR_DAT_02719448 + 0x10;
  plVar5[9] = (long)(puVar3 + 0x58);
  plVar5[10] = (long)(puVar3 + 0x98);
  plVar5[0x13] = 0;
  plVar5[0x14] = 0;
  *(undefined8 *)((long)plVar5 + 0x7c) = 0xffffffffffffffff;
  *(undefined8 *)((long)plVar5 + 0x74) = 0xffffffffffffffff;
  puVar2 = PTR_DAT_02719450 + 0x10;
  plVar5[0x15] = 0;
  plVar5[0x16] = 0;
  plVar5[0x19] = 0;
  plVar5[0x1a] = 0;
  plVar5[0x11] = (long)puVar1;
  plVar5[0x12] = (long)puVar2;
  puVar1 = PTR_DAT_02719458 + 0x10;
  plVar5[0x1d] = 0;
  plVar5[0x1e] = 0;
  plVar5[0x1f] = 0;
  plVar5[0x17] = (long)puVar1;
  plVar5[0x18] = 0;
  puVar1 = PTR_DAT_02719390;
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[1] = (long)param_2;
  *(undefined4 *)(plVar5 + 0x20) = 0;
  plVar5[2] = (long)plVar5;
  plVar5[3] = 0x128;
  plVar5[4] = 8;
  plVar5[0x23] = 0;
  plVar5[0x24] = 0;
  plVar5[0x1b] = 0;
  plVar5[0x1c] = (long)(puVar1 + 0x10);
  plVar5[0x21] = 0;
  plVar5[0x22] = 0;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


