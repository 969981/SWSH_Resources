/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f3720; name: FUN_006f3720
 */


void FUN_006f3720(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  lVar2 = *(long *)(param_1 + 0x118);
  uVar3 = (ulong)*(int *)(param_1 + 0x164);
  if ((ulong)(*(long *)(param_1 + 0x120) - lVar2 >> 5) <= uVar3) {
    plVar4 = *(long **)(param_1 + 0x148);
    lVar5 = (long)*(int *)(param_1 + 0x15c);
    lVar2 = FUN_0199c8f0(PTR_DAT_027155e8);
    local_50 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar5,lVar2);
    plVar1 = *(long **)(param_1 + 0x120);
    local_48 = plVar4;
    local_40 = lVar5;
    local_38 = lVar2;
    if (plVar1 < *(long **)(param_1 + 0x128)) {
      uVar6 = *(undefined8 *)(param_1 + 0x130);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar6;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *plVar1 = local_50;
      plVar1[1] = (long)local_48;
      plVar1[2] = local_40;
      plVar1[3] = local_38;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + 0x20;
      local_50 = 0;
    }
    else {
      FUN_006f3ba0(param_1 + 0x118,&local_50);
      lVar2 = local_50;
      local_50 = 0;
      if (lVar2 != 0) {
        local_50 = 0;
        (**(code **)(*local_48 + 0x18))(local_48,lVar2,local_40,local_38);
      }
    }
    uVar3 = (ulong)*(int *)(param_1 + 0x164);
    lVar2 = *(long *)(param_1 + 0x118);
  }
  FUN_0199cb10(param_1,*(undefined8 *)(lVar2 + uVar3 * 0x20),(long)*(int *)(param_1 + 0x15c));
  *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + 1;
  return;
}


