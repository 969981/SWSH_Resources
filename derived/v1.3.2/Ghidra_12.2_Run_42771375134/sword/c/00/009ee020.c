/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ee020; name: FUN_009ee020
 */


void FUN_009ee020(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  FUN_00ff5da0();
  param_1[0xc] = 0;
  puVar1 = PTR_DAT_02718ba8;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x58);
  param_1[10] = (long)(puVar1 + 0x98);
  FUN_009fc1c0(param_1 + 0xf,param_1[1]);
  plVar4 = (long *)param_1[1];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,400,0x10);
  if (lVar3 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_009fe380(lVar3,plVar4);
  *(long **)(lVar3 + 8) = plVar4;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 400;
  *(undefined8 *)(lVar3 + 0x20) = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  param_1[0xe] = lVar3;
  return;
}


