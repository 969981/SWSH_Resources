/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f305f0; name: FUN_00f305f0
 */


long * FUN_00f305f0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x5b0,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00db2d00(plVar3,*param_3,param_4,*param_5);
  *(undefined1 *)(plVar3 + 0xad) = 0;
  plVar3[0xb1] = 0;
  *(undefined4 *)(plVar3 + 0xb0) = 0;
  plVar3[0xaf] = 0;
  plVar3[0xae] = 0;
  puVar1 = PTR_DAT_027209b0;
  *plVar3 = (long)(PTR_DAT_027209b0 + 0x10);
  plVar3[9] = (long)(puVar1 + 0x270);
  plVar3[10] = (long)(puVar1 + 0x2b0);
  *(undefined2 *)(plVar3 + 0xb2) = 0;
  *(undefined8 *)((long)plVar3 + 0x5a4) = 0;
  *(undefined8 *)((long)plVar3 + 0x594) = 0;
  *(undefined4 *)((long)plVar3 + 0x5ac) = 0;
  *(undefined8 *)((long)plVar3 + 0x59c) = 0;
  local_50 = 0;
  uStack_48 = 0x259713afb4e2fd5d;
  local_68 = 0x948fda59bd23598d;
  local_60 = "PartsA3";
  local_58 = 7;
  FUN_00dc0810(plVar3,&uStack_48,&local_68,0xffffffff);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x5b0;
  plVar3[4] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


