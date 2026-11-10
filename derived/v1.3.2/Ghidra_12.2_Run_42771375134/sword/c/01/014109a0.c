/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014109a0; name: FUN_014109a0
 */


void FUN_014109a0(undefined8 param_1,long *param_2,long *param_3)

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
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x620,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  lVar2 = *param_3;
  FUN_00ff5da0(plVar3,lVar2);
  puVar1 = PTR_DAT_027297b0;
  *(undefined8 *)((long)plVar3 + 0x75) = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = lVar2;
  plVar3[0xe] = 0;
  plVar3[0x10] = -0x340d631b7bddd9bb;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[9] = (long)(puVar1 + 0x58);
  plVar3[10] = (long)(puVar1 + 0x98);
                    /* WARNING: Subroutine does not return */
  memset(plVar3 + 0x11,0,0x578);
}


