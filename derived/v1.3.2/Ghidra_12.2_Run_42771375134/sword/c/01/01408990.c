/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01408990; name: FUN_01408990
 */


long * FUN_01408990(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
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
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1570,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar3,*param_3,*param_4,*param_5);
  puVar1 = PTR_DAT_02729740;
  *plVar3 = (long)(PTR_DAT_02729740 + 0x10);
  plVar3[9] = (long)(puVar1 + 0xa8);
  plVar3[10] = (long)(puVar1 + 0xe8);
  *(undefined8 *)((long)plVar3 + 0x5cc) = 0;
  *(undefined2 *)((long)plVar3 + 0x5d4) = 0;
  plVar3[0xbb] = 0;
  *(undefined4 *)(plVar3 + 0xbc) = 1;
  FUN_0168ad10(plVar3 + 0xbe);
  plVar3[0x13c] = 0;
  puVar1 = PTR_DAT_02729588;
  plVar3[0x139] = 0;
  plVar3[0x13d] = 0x100000000;
  plVar3[0x138] = 0;
  plVar3[0x13a] = 0;
  *(undefined1 *)(plVar3 + 0x13b) = 0;
  plVar3[0xbe] = (long)(puVar1 + 0x10);
  FUN_0168ad10(plVar3 + 0x13e);
  puVar1 = PTR_DAT_02729748;
  *(undefined1 *)((long)plVar3 + 0xdb2) = 0;
  puVar1 = puVar1 + 0x10;
  plVar3[0x13e] = (long)puVar1;
  FUN_0168ad10(plVar3 + 0x1b8);
  plVar3[0x1b8] = (long)puVar1;
  *(undefined1 *)((long)plVar3 + 0x1182) = 0;
  FUN_0168ad10(plVar3 + 0x232);
  plVar3[0x232] = (long)puVar1;
  *(undefined1 *)((long)plVar3 + 0x1552) = 0;
  *(undefined1 *)(plVar3 + 0x2ac) = 1;
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x1570;
  plVar3[4] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


