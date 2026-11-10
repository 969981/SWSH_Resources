/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fcfea0; name: FUN_00fcfea0
 */


long * FUN_00fcfea0(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x4d0,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff5da0(plVar3,*param_3);
  puVar1 = PTR_DAT_02722f48;
  *(undefined4 *)(plVar3 + 0xc) = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[9] = (long)(puVar1 + 0x58);
  plVar3[10] = (long)(puVar1 + 0x98);
  FUN_012b4040(plVar3 + 0xd);
  plVar3[0x19] = 0;
  *(undefined4 *)(plVar3 + 0x18) = 0;
  plVar3[0x16] = 0;
  plVar3[0x17] = 0;
  plVar3[0xf] = 0;
  plVar3[0x14] = 0;
  plVar3[0x15] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  lVar4 = *(long *)(*(long *)PTR_DAT_02722f28 + 0x48);
  plVar3[0x1d] = 0;
  plVar3[0x2e] = 0;
  plVar3[0x2f] = 0;
  plVar3[0x2c] = 0;
  plVar3[0x2d] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1f] = 0;
  puVar1 = PTR_DAT_02710ac8 + 0x10;
  plVar3[0x1b] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1a] = (long)puVar1;
  FUN_012b4040(plVar3 + 0x3c);
  FUN_012b4040(plVar3 + 0x3e);
  plVar3[0x98] = -0x340d631b7bddd9bb;
  plVar3[0x40] = lVar4;
  *(undefined1 *)(plVar3 + 0x41) = 0;
  *(undefined4 *)((long)plVar3 + 0x4ac) = 0;
  *(undefined2 *)(plVar3 + 0x96) = 0;
  *(undefined1 *)(plVar3 + 0x99) = 1;
  FUN_0144ba70(plVar3 + 0x1a,0);
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x4d0;
  plVar3[4] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


