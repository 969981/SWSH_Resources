/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ce600; name: FUN_007ce600
 */


void FUN_007ce600(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 uStack_35;
  undefined2 local_34;
  undefined2 uStack_32;
  
  plVar2 = *(long **)(param_1 + 0x20);
  plVar3 = *(long **)(param_1 + 0x28);
  if ((plVar2 != plVar3) && (*plVar2 != *param_2)) {
    do {
      plVar2 = plVar2 + 1;
      if (plVar3 == plVar2) goto LAB_007ce660;
    } while (*plVar2 != *param_2);
  }
  if (plVar2 == plVar3) {
LAB_007ce660:
    if (plVar3 == *(long **)(param_1 + 0x30)) {
      FUN_009ba660((undefined8 *)(param_1 + 0x20),param_2);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar1 + 0x80)) goto LAB_007ce7a0;
      *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar4;
      *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
      *plVar3 = *param_2;
      *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 8;
    }
  }
  plVar2 = *(long **)(param_1 + 0x50);
  plVar3 = *(long **)(param_1 + 0x58);
  local_40 = *param_2;
  if ((plVar2 != plVar3) && (*plVar2 != local_40)) {
    do {
      plVar2 = plVar2 + 2;
      if (plVar3 == plVar2) goto LAB_007ce710;
    } while (*plVar2 != local_40);
  }
  if (plVar2 == plVar3) {
LAB_007ce710:
    local_38 = 0;
    local_36 = 0;
    local_34 = 0x1e;
    if (plVar3 < *(long **)(param_1 + 0x60)) {
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar1 + 0x80)) {
LAB_007ce7a0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar4;
      *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
      *plVar3 = local_40;
      plVar3[1] = CONCAT26(uStack_32,
                           CONCAT24(local_34,CONCAT13(uStack_35,CONCAT12(local_36,local_38))));
      *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 0x10;
    }
    else {
      FUN_007cf210((undefined8 *)(param_1 + 0x50),&local_40);
    }
  }
  return;
}


