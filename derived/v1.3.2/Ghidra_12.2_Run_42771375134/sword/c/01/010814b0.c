/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010814b0; name: FUN_010814b0
 */


long * FUN_010814b0(undefined8 param_1,long *param_2,undefined8 *param_3)

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
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xb8,8);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff5da0(plVar3,*param_3);
  plVar3[0x15] = 0;
  puVar1 = PTR_DAT_02723ef0;
  *(undefined4 *)(plVar3 + 0xc) = 10;
  *(undefined1 *)(plVar3 + 0x16) = 0;
  plVar3[9] = (long)(puVar1 + 0x58);
  plVar3[10] = (long)(puVar1 + 0x98);
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = (long)param_2;
  plVar3[0xd] = -0x340d631b7bddd9bb;
  plVar3[0xe] = -0x340d631b7bddd9bb;
  plVar3[0xf] = -0x340d631b7bddd9bb;
  plVar3[0x10] = -0x340d631b7bddd9bb;
  plVar3[0x11] = -0x340d631b7bddd9bb;
  plVar3[0x12] = -0x340d631b7bddd9bb;
  plVar3[0x13] = -0x340d631b7bddd9bb;
  plVar3[0x14] = -0x340d631b7bddd9bb;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0xb8;
  plVar3[4] = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


