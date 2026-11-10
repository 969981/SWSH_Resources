/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d18260; name: FUN_00d18260
 */


long * FUN_00d18260(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long local_38;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x5c0,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_38 = *param_3;
  *param_3 = 0;
  FUN_00d34820(plVar3,&local_38,param_4);
  puVar1 = PTR_DAT_0271ce88;
  plVar3[0x6a] = -0x340d631b7bddd9bb;
  plVar3[0x6b] = (long)&DAT_01d38550;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[0x69] = 0;
  *(undefined4 *)(plVar3 + 0x6e) = 0;
  plVar3[0x6d] = 0;
  plVar3[0x6c] = 0;
  plVar3[9] = (long)(puVar1 + 0x68);
  plVar3[10] = (long)(puVar1 + 0xa8);
  plVar3[0x6f] = 0;
  plVar3[0x85] = 0;
  plVar3[0x84] = 0;
  plVar3[0x83] = 0;
  plVar3[0x82] = 0;
  plVar3[0x75] = 0;
  plVar3[0x74] = 0;
  plVar3[0x73] = 0;
  plVar3[0x72] = 0;
  plVar3[0x71] = 0;
  plVar3[0x70] = (long)(PTR_DAT_02715b00 + 0x10);
  *(undefined1 *)((long)plVar3 + 0x49a) = 0;
  *(undefined2 *)(plVar3 + 0x93) = 0;
  plVar3[0x92] = 0;
  plVar3[0xa9] = 0;
  plVar3[0xa8] = 0;
  plVar3[0xa7] = 0;
  plVar3[0xa6] = 0;
  *(undefined4 *)((long)plVar3 + 0x49c) = 1;
  plVar3[0x99] = 0;
  plVar3[0x98] = 0;
  plVar3[0x97] = 0;
  plVar3[0x96] = 0;
  plVar3[0x95] = 0;
  plVar3[0x94] = (long)(PTR_DAT_027194a8 + 0x10);
  *(undefined1 *)(plVar3 + 0xb6) = 0;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x5c0;
  plVar3[4] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


