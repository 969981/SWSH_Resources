/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb8470; name: FUN_00fb8470
 */


void FUN_00fb8470(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  lVar4 = *param_1;
  if ((ulong)((param_1[2] - lVar4 >> 4) * -0x7063e7063e7063e7) < param_2) {
    lVar6 = param_1[1];
    plVar1 = param_1 + 3;
    local_60 = 0;
    plStack_58 = plVar1;
    local_78 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x290,0x10);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xb8))();
    }
    puVar2 = PTR_DAT_02710860;
    local_70 = local_78 + (lVar6 - lVar4 >> 4) * 0x10;
    local_60 = local_78 + param_2 * 0x290;
    lVar4 = *param_1;
    lVar6 = param_1[1];
    local_68 = local_70;
    if (lVar6 != lVar4) {
      do {
        lVar5 = local_70;
        lVar7 = *plVar1;
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar6 = lVar6 + -0x290;
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar7;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        FUN_00fc07b0(lVar5 + -0x290,lVar6);
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        local_70 = local_70 + -0x290;
      } while (lVar4 != lVar6);
      lVar4 = *param_1;
      lVar6 = param_1[1];
    }
    *param_1 = local_70;
    param_1[1] = local_68;
    lVar5 = param_1[2];
    param_1[2] = local_60;
    local_78 = lVar4;
    local_70 = lVar4;
    local_68 = lVar6;
    local_60 = lVar5;
    FUN_00fc0660(&local_78);
  }
  return;
}


