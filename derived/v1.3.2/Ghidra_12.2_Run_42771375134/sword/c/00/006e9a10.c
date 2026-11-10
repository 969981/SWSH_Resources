/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e9a10; name: FUN_006e9a10
 */


void FUN_006e9a10(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 auStack_88 [68];
  int local_44;
  int local_38;
  int local_34;
  
  puVar2 = PTR_DAT_02713a38;
  local_34 = 0;
  uVar7 = *(undefined8 *)PTR_DAT_027155e8;
  (**(code **)PTR_DAT_02713a38)(uVar7,0x51,&local_34);
  if (*(ulong *)(param_1 + 0x98) < (ulong)(long)local_34) {
    *(long *)(param_1 + 0x98) = (long)local_34;
  }
  local_38 = 0;
  (**(code **)puVar2)(uVar7,0x50,&local_38);
  uVar6 = *(ulong *)(param_1 + 0x98);
  uVar5 = (ulong)local_38;
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = uVar6 / uVar5;
  }
  if (uVar6 != uVar1 * uVar5) {
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = ((uVar6 + uVar5) - 1) / uVar5;
    }
    *(ulong *)(param_1 + 0x98) = uVar1 * uVar5;
  }
  local_44 = 0;
  (**(code **)puVar2)(uVar7,0x56,&local_44);
  if (*(ulong *)(param_1 + 0xa0) < (ulong)(long)local_44) {
    *(long *)(param_1 + 0xa0) = (long)local_44;
  }
  (**(code **)PTR_DAT_02714a30)(auStack_88,uVar7);
  (**(code **)PTR_DAT_02714a28)(auStack_88);
  (**(code **)PTR_DAT_02714a38)(auStack_88,*(undefined8 *)(param_1 + 0x98));
  (**(code **)PTR_DAT_02714a48)(auStack_88,*(undefined8 *)(param_1 + 0xa0));
  (**(code **)PTR_DAT_02714a60)(param_1 + 0x1f0,auStack_88);
  FUN_0199c300(param_1 + 0x21f0,param_1 + 0x1f0,PTR_DAT_027155e8);
  uVar7 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x30);
  plVar8 = *(long **)(param_1 + 8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,0x110,0x10);
  if (lVar4 == 0) {
    (**(code **)(*plVar8 + 0xb8))(plVar8);
  }
  FUN_006f2bd0(lVar4,0,7,0,uVar7);
  *(long **)(lVar4 + 8) = plVar8;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x110;
  *(undefined8 *)(lVar4 + 0x20) = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x160) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  *(long *)(param_1 + 0x160) = lVar4;
  return;
}


