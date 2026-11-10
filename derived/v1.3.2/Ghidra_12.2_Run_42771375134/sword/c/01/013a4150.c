/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a4150; name: FUN_013a4150
 */


void FUN_013a4150(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  FUN_0138d840();
  param_1[0xb7] = 0;
  puVar1 = PTR_DAT_02728dd0;
  param_1[0xb6] = 0;
  plVar4 = (long *)param_1[1];
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x188);
  param_1[10] = (long)(puVar1 + 0x1f8);
  param_1[0xb4] = (long)(puVar1 + 0x220);
  param_1[0xb5] = (long)(puVar1 + 0x2a8);
  param_1[0xbc] = (long)(puVar1 + 0x2e0);
  param_1[0xbd] = (long)(puVar1 + 0x2f8);
  puVar1 = PTR_DAT_02710860;
  *(undefined2 *)(param_1 + 0xbe) = 0;
  param_1[0xbf] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x380,0x10);
  if (lVar3 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_013a7470(lVar3,plVar4,0x50);
  *(long **)(lVar3 + 8) = plVar4;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x380;
  *(undefined8 *)(lVar3 + 0x20) = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0xb6] != 0) {
    (**(code **)(*(long *)(param_1[0xb6] + 0x48) + 0x18))();
    param_1[0xb6] = 0;
  }
  param_1[0xb6] = lVar3;
  return;
}


