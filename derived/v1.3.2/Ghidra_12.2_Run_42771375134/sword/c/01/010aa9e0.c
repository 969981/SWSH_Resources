/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010aa9e0; name: FUN_010aa9e0
 */


void FUN_010aa9e0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  FUN_00ff5da0();
  puVar1 = PTR_DAT_02724298;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[9] = (long)(puVar1 + 0x58);
  param_1[10] = (long)(puVar1 + 0x98);
  lVar2 = FUN_00ff0930();
  param_1[0xe] = lVar2;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  FUN_012b4040(param_1 + 0x11);
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined4 *)((long)param_1 + 0xd2) = 0xffff;
  param_1[0x1c] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  thunk_FUN_011f3570(param_1 + 0x23);
  puVar1 = PTR_DAT_02710860;
  uVar6 = 0;
  plVar5 = param_1 + 0x1b;
  do {
    plVar4 = (long *)param_1[1];
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    FUN_0077d050(lVar3,0x20);
    *(long **)(lVar3 + 8) = plVar4;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x80;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*plVar5 != 0) {
      (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
      *plVar5 = 0;
    }
    uVar6 = uVar6 + 1;
    *plVar5 = lVar3;
    plVar5 = plVar5 + 1;
  } while (uVar6 < 7);
  return;
}


