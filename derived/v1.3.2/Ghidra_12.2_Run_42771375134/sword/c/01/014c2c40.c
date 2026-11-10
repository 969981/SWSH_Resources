/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c2c40; name: FUN_014c2c40
 */


void FUN_014c2c40(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_40 [8];
  long *local_38;
  
  puVar7 = *(undefined8 **)(param_1 + 0xaf0);
  plVar5 = (long *)puVar7[8];
  uVar2 = puVar7[9];
  local_38 = plVar5 + uVar2 * 2;
  if ((uVar2 != 0) && (*plVar5 != *param_2)) {
    lVar6 = uVar2 * 0x10;
    plVar4 = plVar5;
    do {
      lVar6 = lVar6 + -0x10;
      if (lVar6 == 0) goto LAB_014c2cc0;
      plVar5 = plVar4 + 2;
      plVar1 = plVar4 + 2;
      plVar4 = plVar5;
    } while (*plVar1 != *param_2);
  }
  if (local_38 == plVar5) {
LAB_014c2cc0:
    if (uVar2 < (ulong)puVar7[10]) {
      uVar8 = *puVar7;
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar3 = param_2[1];
      *local_38 = *param_2;
      local_38[1] = lVar3;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar7[9] = puVar7[9] + 1;
    }
    else {
      FUN_014c41d0(auStack_40,puVar7,&local_38,1,param_2);
    }
  }
  else {
    lVar6 = param_2[1];
    *plVar5 = *param_2;
    plVar5[1] = lVar6;
  }
  return;
}


