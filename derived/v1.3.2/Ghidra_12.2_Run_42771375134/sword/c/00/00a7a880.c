/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a7a880; name: FUN_00a7a880
 */


undefined8 FUN_00a7a880(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_88;
  long local_80;
  long *plStack_78;
  long *local_60;
  long *local_58;
  
  FUN_00a87ac0(&local_88,*(long *)(param_1 + 0x6c8) + 8);
  plVar5 = local_60;
  do {
    if (plVar5 == (long *)0x0) {
      uVar4 = 1;
      lVar3 = local_88;
      plVar5 = local_60;
      goto joined_r0x00a7a928;
    }
    lVar3 = plVar5[3];
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(lVar3 + 0xa8) != 0) {
      lVar7 = *(long *)(lVar3 + 0xa8) << 3;
      puVar6 = *(undefined8 **)(lVar3 + 0xa0);
      do {
        uVar2 = (**(code **)(*(long *)*puVar6 + 0x60))();
        if ((uVar2 & 1) == 0) {
          bVar1 = true;
          goto joined_r0x00a7a918;
        }
        lVar7 = lVar7 + -8;
        puVar6 = puVar6 + 1;
      } while (lVar7 != 0);
    }
    plVar5 = (long *)*plVar5;
    bVar1 = false;
joined_r0x00a7a918:
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
  } while (!bVar1);
  uVar4 = 0;
  lVar3 = local_88;
  plVar5 = local_60;
joined_r0x00a7a928:
  while (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    local_88 = lVar3;
    if (plVar5[3] != 0) {
      (**(code **)(*(long *)(plVar5[3] + 0x48) + 0x18))();
      plVar5[3] = 0;
    }
    (**(code **)(*local_58 + 0x18))(local_58,plVar5,0x20,8);
    lVar3 = local_88;
    plVar5 = (long *)lVar7;
  }
  local_88 = 0;
  if (lVar3 != 0) {
    (**(code **)(*plStack_78 + 0x18))(plStack_78,lVar3,local_80 << 3,8);
  }
  return uVar4;
}


