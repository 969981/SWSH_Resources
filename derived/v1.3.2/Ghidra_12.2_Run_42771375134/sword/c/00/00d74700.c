/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d74700; name: FUN_00d74700
 */


long * FUN_00d74700(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x670,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar4,*param_3,*param_4,*param_5);
  plVar4[0xba] = 0;
  puVar1 = PTR_DAT_0271e358;
  *plVar4 = (long)(PTR_DAT_0271e358 + 0x10);
  plVar4[9] = (long)(puVar1 + 0xa8);
  plVar4[10] = (long)(puVar1 + 0xe8);
  *(undefined4 *)(plVar4 + 0xbb) = 1;
  local_44[0] = 0;
  uVar2 = FUN_00d70660(local_44);
  *(undefined4 *)((long)plVar4 + 0x5dc) = uVar2;
  local_48[0] = 0;
  uVar2 = FUN_00d70660(local_48);
  *(undefined4 *)((long)plVar4 + 0x66c) = 0xffffffff;
  *(undefined4 *)(plVar4 + 0xbc) = uVar2;
  *(undefined1 *)((long)plVar4 + 0x5e4) = 0;
  plVar4[0xcc] = 0;
  *(undefined1 *)(plVar4 + 0xcd) = 0;
  plVar4[0xc0] = 0;
  plVar4[0xbf] = 0;
  plVar4[0xbe] = 0;
  plVar4[0xbd] = 0;
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x670;
  plVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


