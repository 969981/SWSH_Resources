/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00deed10; name: FUN_00deed10
 */


void FUN_00deed10(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 local_40 [3];
  long local_28;
  
  *(undefined4 *)(param_1 + 0x9c) = 2;
  if (*(char *)(param_1 + 0xe3) != '\0') {
    lVar3 = FUN_00df0fc0(*(long *)(param_1 + 0x70) + 0x50);
    if (lVar3 == 0) {
      return;
    }
    switch(*(undefined4 *)(param_1 + 0x128)) {
    case 0:
    case 2:
      puVar4 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      uVar6 = *puVar4;
      uVar8 = puVar4[1];
      break;
    default:
      return;
    case 3:
      FUN_00eaa260(lVar3,0xb);
      return;
    case 4:
      FUN_00eaa260(lVar3,9);
      return;
    case 5:
      FUN_00eaa260(lVar3,8);
      return;
    }
    do {
      uVar9 = uVar6 ^ uVar8;
      iVar7 = (int)uVar8;
      iVar5 = (int)uVar6;
      uVar8 = uVar9 >> 0x1b | uVar9 << 0x25;
      uVar6 = uVar9 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar9 << 0x10;
      uVar9 = (ulong)(uint)(iVar5 + iVar7) & 7;
    } while (4 < uVar9);
    uVar1 = *(undefined4 *)(&DAT_02160750 + uVar9 * 4);
    *puVar4 = uVar6;
    puVar4[1] = uVar8;
    FUN_00eaa260(lVar3,uVar1);
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x128)) {
  case 0:
    local_40[0] = 0x100000000;
    puVar4 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar6 = *puVar4;
    uVar8 = puVar4[1];
    uVar9 = uVar8 ^ uVar6;
    *puVar4 = uVar9 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar9 << 0x10;
    puVar4[1] = uVar9 >> 0x1b | uVar9 << 0x25;
    FUN_00df10f0(param_1,*(undefined4 *)
                          ((ulong)local_40 | ((ulong)(uint)((int)uVar8 + (int)uVar6) & 1) << 2));
    return;
  default:
    goto switchD_00deed60_caseD_1;
  case 2:
    puVar4 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar6 = *puVar4;
    uVar8 = puVar4[1];
    do {
      uVar9 = uVar6 ^ uVar8;
      iVar7 = (int)uVar8;
      iVar5 = (int)uVar6;
      uVar8 = uVar9 >> 0x1b | uVar9 << 0x25;
      uVar6 = uVar9 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar9 << 0x10;
      uVar9 = (ulong)(uint)(iVar5 + iVar7) & 3;
    } while (uVar9 == 3);
    uVar2 = (&switchD_00df1120::switchdataD_02160764)[uVar9];
    *puVar4 = uVar6;
    puVar4[1] = uVar8;
    FUN_00df10f0(param_1,uVar2);
    return;
  case 3:
    plVar10 = *(long **)(param_1 + 0x70);
    FUN_006cf0a0(local_40,&DAT_02653808);
    (**(code **)(*plVar10 + 400))(plVar10,local_40,6);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    FUN_006cf0a0(local_40,&DAT_026537f0);
    (**(code **)(*plVar10 + 400))(plVar10,local_40,6);
    if (local_28 == 0) {
      return;
    }
    goto LAB_00def02c;
  case 4:
    plVar10 = *(long **)(param_1 + 0x70);
    FUN_006cf0a0(local_40,&DAT_02653808);
    (**(code **)(*plVar10 + 400))(plVar10,local_40,7);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    FUN_006cf0a0(local_40,&DAT_026537f0);
    (**(code **)(*plVar10 + 400))(plVar10,local_40,7);
    break;
  case 5:
    plVar10 = *(long **)(param_1 + 0x70);
    FUN_006cf0a0(local_40,&DAT_02653808);
    (**(code **)(*plVar10 + 400))(plVar10,local_40,4);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    FUN_006cf0a0(local_40,&DAT_026537f0);
    (**(code **)(*plVar10 + 400))(plVar10,local_40,4);
  }
  if (local_28 != 0) {
LAB_00def02c:
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
switchD_00deed60_caseD_1:
  return;
}


