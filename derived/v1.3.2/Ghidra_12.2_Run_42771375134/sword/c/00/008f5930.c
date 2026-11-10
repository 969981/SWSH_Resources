/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f5930; name: FUN_008f5930
 */


void FUN_008f5930(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  long *plVar6;
  byte bVar7;
  long lVar8;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  if (*(char *)(param_1 + 0x174) == '\0') {
    bVar7 = 0;
LAB_008f5a28:
    uVar1 = *(undefined4 *)(param_1 + 0x150);
    cVar4 = FUN_008eef90(uVar1);
    cVar5 = FUN_008eef90(uVar1,1);
    lVar8 = 1;
    if (cVar4 == cVar5) {
      lVar8 = 2;
    }
    local_48 = *(long *)(param_2 + (ulong)bVar7 * 8 + 0x418);
    if (local_48 == 0) goto LAB_008f59a0;
LAB_008f5a64:
    plVar6 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_008f7b20(param_1,0,&local_48);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    local_48 = 0;
    local_50 = *(long *)(param_2 + lVar8 * 8 + 0x418);
    if (local_50 != 0) goto LAB_008f5aa8;
LAB_008f59c0:
    FUN_008f7b20(param_1,1,&local_50);
    if (*(char *)(param_1 + 0x174) != '\x02') goto LAB_008f59dc;
LAB_008f5ae8:
    bVar7 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x150);
    cVar4 = FUN_008eef90(uVar1);
    cVar5 = FUN_008eef90(uVar1,0);
    bVar7 = 1;
    if (cVar4 == cVar5) {
      bVar7 = 2;
    }
    if (*(char *)(param_1 + 0x174) != '\x01') goto LAB_008f5a28;
    lVar8 = 0;
    local_48 = *(long *)(param_2 + (ulong)bVar7 * 8 + 0x418);
    if (local_48 != 0) goto LAB_008f5a64;
LAB_008f59a0:
    FUN_008f7b20(param_1,0,&local_48);
    local_50 = *(long *)(param_2 + lVar8 * 8 + 0x418);
    if (local_50 == 0) goto LAB_008f59c0;
LAB_008f5aa8:
    plVar6 = (long *)(local_50 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_008f7b20(param_1,1,&local_50);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    local_50 = 0;
    if (*(char *)(param_1 + 0x174) == '\x02') goto LAB_008f5ae8;
LAB_008f59dc:
    uVar1 = *(undefined4 *)(param_1 + 0x150);
    cVar4 = FUN_008eef90(uVar1);
    cVar5 = FUN_008eef90(uVar1,2);
    bVar7 = 2;
    if (cVar4 != cVar5) {
      bVar7 = 3;
    }
    if (*(char *)(param_1 + 0x174) == '\x03') {
      lVar8 = 0;
      lVar3 = *(long *)(param_2 + (ulong)bVar7 * 8 + 0x418);
      lVar2 = local_58;
      goto joined_r0x008f5b20;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x150);
  cVar4 = FUN_008eef90(uVar1);
  cVar5 = FUN_008eef90(uVar1,3);
  lVar8 = 2;
  if (cVar4 != cVar5) {
    lVar8 = 3;
  }
  lVar3 = *(long *)(param_2 + (ulong)bVar7 * 8 + 0x418);
  lVar2 = local_58;
joined_r0x008f5b20:
  local_58 = lVar3;
  if (local_58 != 0) {
    plVar6 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_008f7b20(param_1,2,&local_58);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    local_58 = 0;
    lVar2 = local_58;
  }
  local_58 = lVar2;
  local_60 = *(long *)(param_2 + lVar8 * 8 + 0x418);
  if (local_60 != 0) {
    plVar6 = (long *)(local_60 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_008f7b20(param_1,3,&local_60);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  return;
}


