/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01200bb0; name: FUN_01200bb0
 */


long * FUN_01200bb0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

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
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x370,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_007dc9c0(plVar3,*param_3,*param_4);
  puVar1 = PTR_DAT_02725de0;
  plVar3[0x47] = 0;
  plVar3[0x26] = 0;
  plVar3[0x27] = 0;
  plVar3[0x46] = 0;
  plVar3[0x24] = 0;
  plVar3[0x25] = 0;
  plVar3[0x45] = 0;
  plVar3[0x44] = 0;
  plVar3[0x57] = 0;
  plVar3[0x56] = 0;
  plVar3[0x55] = 0;
  plVar3[0x54] = 0;
  *(undefined1 *)(plVar3 + 100) = 0;
  *(undefined1 *)(plVar3 + 0x65) = 0;
  *(undefined1 *)(plVar3 + 0x69) = 0;
  *(undefined1 *)((long)plVar3 + 0x35c) = 0;
  *(undefined1 *)(plVar3 + 0x6d) = 0;
  plVar3[9] = (long)(puVar1 + 0x70);
  plVar3[10] = (long)(puVar1 + 0xb0);
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x370;
  plVar3[4] = 0x10;
  plVar3[0x36] = 0;
  plVar3[0x37] = 0;
  plVar3[0x34] = 0;
  plVar3[0x35] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = (long)param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


