/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a2060; name: FUN_010a2060
 */


void FUN_010a2060(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  
  puVar1 = PTR_DAT_02710958;
  uVar4 = *(undefined8 *)PTR_DAT_02710958;
  FUN_01211d70(uVar4);
  lVar2 = FUN_01218d60();
  if (*(long *)(lVar2 + 0x48) != 0) {
    puVar7 = *(undefined8 **)(lVar2 + 0x40);
    puVar9 = puVar7 + *(long *)(lVar2 + 0x48) * 5;
    do {
      local_a0 = *puVar7;
      uVar10 = 0;
      local_98 = puVar7[1];
      uStack_90 = puVar7[2];
      local_88 = puVar7[3];
      uStack_80 = puVar7[4];
      plVar5 = (long *)(param_1 + 0xdc20);
      do {
        uVar3 = FUN_0121af80(plVar5);
        if (((uVar3 & 1) != 0) && (uVar3 = FUN_0121b130(plVar5,&local_a0), (uVar3 & 1) != 0)) {
          FUN_0121ad80(&local_78);
          *plVar5 = local_78;
          plVar5[3] = local_60;
          plVar5[4] = lStack_58;
          plVar5[1] = local_70;
          plVar5[2] = lStack_68;
          break;
        }
        uVar10 = uVar10 + 1;
        plVar5 = plVar5 + 0x14;
      } while (uVar10 < 100);
      puVar7 = puVar7 + 5;
    } while (puVar7 != puVar9);
  }
  FUN_01211d70(uVar4);
  lVar2 = FUN_01218d50();
  if (*(long *)(lVar2 + 0x48) != 0) {
    uVar6 = *(undefined8 *)puVar1;
    lVar8 = *(long *)(lVar2 + 0x40);
    lVar2 = *(long *)(lVar2 + 0x48) * 0x28;
    do {
      FUN_01211890(&local_78,uVar6,lVar8);
      if (local_78 != 0) {
        FUN_010a1530(param_1,local_78,0);
      }
      lVar8 = lVar8 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  FUN_01211d70(uVar4);
  lVar2 = FUN_01218d40();
  if (*(long *)(lVar2 + 0x48) != 0) {
    uVar6 = *(undefined8 *)puVar1;
    lVar8 = *(long *)(lVar2 + 0x40);
    lVar2 = *(long *)(lVar2 + 0x48) * 0x28;
    do {
      FUN_01211890(&local_78,uVar6,lVar8);
      if (local_78 != 0) {
        FUN_010a1530(param_1,local_78,0);
      }
      lVar8 = lVar8 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  FUN_01211d70(uVar4);
  lVar2 = FUN_01218d70();
  if (*(long *)(lVar2 + 0x48) != 0) {
    uVar6 = *(undefined8 *)puVar1;
    lVar8 = *(long *)(lVar2 + 0x40);
    lVar2 = *(long *)(lVar2 + 0x48) * 0x28;
    do {
      FUN_01211890(&local_78,uVar6,lVar8);
      if (local_78 != 0) {
        FUN_010a1530(param_1,local_78,0);
      }
      lVar8 = lVar8 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  FUN_01211d70(uVar4);
  lVar2 = FUN_01218d80();
  if (*(long *)(lVar2 + 0x48) != 0) {
    uVar4 = *(undefined8 *)puVar1;
    lVar8 = *(long *)(lVar2 + 0x40);
    lVar2 = *(long *)(lVar2 + 0x48) * 0x28;
    do {
      FUN_01211890(&local_78,uVar4,lVar8);
      if (local_78 != 0) {
        FUN_010a22b0(param_1);
      }
      lVar8 = lVar8 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  return;
}


