/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b4300; name: FUN_008b4300
 */


void FUN_008b4300(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long local_68 [2];
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  lVar7 = FUN_00897d00();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  plVar6 = *(long **)(puVar9[0xb] + 0x10);
  lVar7 = (**(code **)(*plVar6 + 0x50))(plVar6,*(undefined4 *)(puVar9[0xb] + 0x1c));
  uVar2 = FUN_008787f0();
  puVar1 = PTR_DAT_02710798;
  lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  uVar3 = FUN_008c8330(*(undefined8 *)(param_1 + 0xa8));
  FUN_00878810(lVar7,uVar3);
  local_68[1] = 0xbfa49a8ae98c5ae6;
  pcStack_58 = "HOLD_ITEM";
  local_50 = 9;
  local_48 = 0;
  local_68[0] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN_014af590(local_68 + 1,uVar3,local_68);
  if (local_68[0] != 0) {
    (**(code **)(*(long *)(local_68[0] + 0x48) + 0x18))();
    local_68[0] = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_01520b70(lVar10,uVar3,1);
  if ((uVar2 & 0xffff) != 0) {
    FUN_01520760(lVar10,uVar2,1,1);
  }
  uVar2 = FUN_0087e6d0(lVar7,uVar3);
  uVar4 = FUN_008783c0(lVar7);
  if ((uVar4 & 0xffff) != (uVar2 & 0xffff)) {
    iVar5 = FUN_008783b0(lVar7);
    if (iVar5 == 0x1e7) {
      *(undefined1 *)(param_1 + 0x80) = 1;
    }
    FUN_0087df30(lVar7,uVar2,0);
    lVar8 = *(long *)(*(long *)puVar1 + 0x1f8);
    if (lVar8 != 0) {
      plVar6 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    FUN_015351d0(lVar8,lVar7,0);
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  return;
}


