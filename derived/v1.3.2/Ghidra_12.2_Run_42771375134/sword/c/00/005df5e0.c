/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005df5e0; name: FUN_005df5e0
 */


undefined8 FUN_005df5e0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = thunk_FUN_005dca90();
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x10c);
  lVar1 = param_1 + 0xb8;
  if (*(ulong *)(param_1 + 0xd0) < (ulong)(long)iVar4) {
    uVar2 = FUN_005db6a0(lVar1,(long)iVar4,1);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)(param_1 + 200) = 0;
LAB_005df664:
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    else {
      uVar2 = *(ulong *)(param_1 + 0xd0);
      uVar5 = *(ulong *)(param_1 + 200);
      if (uVar2 < *(ulong *)(param_1 + 200)) {
        *(ulong *)(param_1 + 200) = uVar2;
        uVar5 = uVar2;
      }
      if (uVar5 == 0) goto LAB_005df664;
      *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe0);
      *(ulong *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe0) + uVar5 * 8;
    }
    iVar4 = *(int *)(param_1 + 0x10c);
  }
  if (iVar4 < 1) {
LAB_005df6fc:
    iVar4 = *(int *)(param_1 + 0x10c);
  }
  else {
    plVar3 = (long *)FUN_005dd150(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x108));
    (**(code **)(*plVar3 + 0x48))(plVar3,&DAT_01d276b9);
    (**(code **)(*plVar3 + 0x60))(plVar3,&DAT_01d276b9);
    uVar2 = *(ulong *)(param_1 + 200);
    uVar5 = *(ulong *)(param_1 + 0xd0);
    if (uVar2 < uVar5) {
LAB_005df6dc:
      *(long **)(*(long *)(param_1 + 0xe0) + uVar2 * 8) = plVar3;
      lVar6 = *(long *)(param_1 + 200) + 1;
      *(long *)(param_1 + 200) = lVar6;
      *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe0);
      *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe0) + lVar6 * 8;
      goto LAB_005df6fc;
    }
    if (*(long *)(param_1 + 0xf8) == 0) {
      lVar6 = uVar5 * 2;
      if (lVar6 == 0) {
        lVar6 = 1;
      }
      uVar2 = FUN_005db6a0(lVar1,lVar6,1);
    }
    else {
      uVar2 = FUN_005db6a0(lVar1,*(long *)(param_1 + 0xf8) + uVar5,1);
    }
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 200);
      goto LAB_005df6dc;
    }
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    iVar4 = *(int *)(param_1 + 0x10c);
  }
  if (iVar4 < 2) {
    return 1;
  }
  plVar3 = (long *)FUN_005dd150(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x108));
  (**(code **)(*plVar3 + 0x48))(plVar3,&DAT_01ce75bb);
  (**(code **)(*plVar3 + 0x60))(plVar3,&DAT_01ce75bb);
  uVar2 = *(ulong *)(param_1 + 200);
  uVar5 = *(ulong *)(param_1 + 0xd0);
  if (uVar2 < uVar5) {
LAB_005df770:
    *(long **)(*(long *)(param_1 + 0xe0) + uVar2 * 8) = plVar3;
    lVar6 = *(long *)(param_1 + 200) + 1;
    *(long *)(param_1 + 200) = lVar6;
    *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe0);
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe0) + lVar6 * 8;
    iVar4 = *(int *)(param_1 + 0x10c);
  }
  else {
    if (*(long *)(param_1 + 0xf8) == 0) {
      lVar6 = uVar5 * 2;
      if (lVar6 == 0) {
        lVar6 = 1;
      }
      uVar2 = FUN_005db6a0(lVar1,lVar6,1);
    }
    else {
      uVar2 = FUN_005db6a0(lVar1,*(long *)(param_1 + 0xf8) + uVar5,1);
    }
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 200);
      goto LAB_005df770;
    }
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    iVar4 = *(int *)(param_1 + 0x10c);
  }
  if (iVar4 < 3) {
    return 1;
  }
  plVar3 = (long *)FUN_005dd150(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x108));
  (**(code **)(*plVar3 + 0x48))(plVar3,&DAT_01d3ff43);
  (**(code **)(*plVar3 + 0x60))(plVar3,&DAT_01d3ff43);
  uVar2 = *(ulong *)(param_1 + 200);
  uVar5 = *(ulong *)(param_1 + 0xd0);
  if (uVar5 <= uVar2) {
    if (*(long *)(param_1 + 0xf8) == 0) {
      lVar6 = uVar5 * 2;
      if (lVar6 == 0) {
        lVar6 = 1;
      }
      uVar2 = FUN_005db6a0(lVar1,lVar6,1);
    }
    else {
      uVar2 = FUN_005db6a0(lVar1,*(long *)(param_1 + 0xf8) + uVar5,1);
    }
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      iVar4 = *(int *)(param_1 + 0x10c);
      goto joined_r0x005df894;
    }
    uVar2 = *(ulong *)(param_1 + 200);
  }
  *(long **)(*(long *)(param_1 + 0xe0) + uVar2 * 8) = plVar3;
  lVar6 = *(long *)(param_1 + 200) + 1;
  *(long *)(param_1 + 200) = lVar6;
  *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe0);
  *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe0) + lVar6 * 8;
  iVar4 = *(int *)(param_1 + 0x10c);
joined_r0x005df894:
  if (3 < iVar4) {
    plVar3 = (long *)FUN_005dd150(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x108));
    (**(code **)(*plVar3 + 0x48))(plVar3,&DAT_01d0922e);
    (**(code **)(*plVar3 + 0x60))(plVar3,&DAT_01d0922e);
    uVar2 = *(ulong *)(param_1 + 200);
    uVar5 = *(ulong *)(param_1 + 0xd0);
    if (uVar5 <= uVar2) {
      if (*(long *)(param_1 + 0xf8) == 0) {
        lVar6 = uVar5 * 2;
        if (lVar6 == 0) {
          lVar6 = 1;
        }
        uVar2 = FUN_005db6a0(lVar1,lVar6,1);
      }
      else {
        uVar2 = FUN_005db6a0(lVar1,*(long *)(param_1 + 0xf8) + uVar5,1);
      }
      if ((uVar2 & 1) == 0) {
        *(undefined8 *)(param_1 + 200) = 0;
        *(undefined8 *)(param_1 + 0xe8) = 0;
        *(undefined8 *)(param_1 + 0xf0) = 0;
        return 1;
      }
      uVar2 = *(ulong *)(param_1 + 200);
    }
    *(long **)(*(long *)(param_1 + 0xe0) + uVar2 * 8) = plVar3;
    lVar1 = *(long *)(param_1 + 200) + 1;
    *(long *)(param_1 + 200) = lVar1;
    *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe0);
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe0) + lVar1 * 8;
  }
  return 1;
}


