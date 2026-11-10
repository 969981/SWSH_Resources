/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b4d70; name: FUN_009b4d70
 */


void FUN_009b4d70(long param_1,long param_2,byte param_3)

{
  byte *pbVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long local_48;
  ulong uStack_40;
  undefined1 auStack_38 [8];
  long *local_28;
  
  plVar4 = *(long **)(param_1 + 0x80);
  uVar2 = *(ulong *)(param_1 + 0x88);
  local_28 = plVar4 + uVar2 * 2;
  if (((uVar2 != 0) && (*plVar4 != param_2)) && (*(byte *)(plVar4 + 1) != param_3)) {
    lVar5 = uVar2 * 0x10;
    plVar3 = plVar4;
    do {
      plVar4 = plVar3 + 2;
      lVar5 = lVar5 + -0x10;
      if (lVar5 == 0) goto LAB_009b4de8;
    } while ((*plVar4 != param_2) &&
            (pbVar1 = (byte *)(plVar3 + 3), plVar3 = plVar4, *pbVar1 != param_3));
  }
  if (local_28 == plVar4) {
LAB_009b4de8:
    uStack_40 = (ulong)param_3;
    local_48 = param_2;
    if (uVar2 < *(ulong *)(param_1 + 0x90)) {
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar6;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *local_28 = local_48;
      local_28[1] = uStack_40;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
    }
    else {
      FUN_009b5930(auStack_38,(undefined8 *)(param_1 + 0x40),&local_28,1,&local_48);
    }
  }
  return;
}


