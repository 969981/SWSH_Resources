/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008bb190; name: FUN_008bb190
 */


byte FUN_008bb190(long param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined6 uStack_60;
  undefined2 local_5a;
  undefined6 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  uVar4 = FUN_008c8330(*(undefined8 *)(param_1 + 0x78));
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar10)(puVar10);
  lVar8 = FUN_00897d00();
  for (; plVar7 != (long *)lVar8; plVar7 = (long *)*plVar7) {
  }
  lVar8 = puVar10[0xb];
  uVar9 = (**(code **)(**(long **)(lVar8 + 0x10) + 0x50))
                    (*(long **)(lVar8 + 0x10),*(undefined4 *)(lVar8 + 0x1c));
  if (uVar4 == 0x32) {
    iVar5 = FUN_0087a5f0(uVar9);
    if (iVar5 == 100) {
      local_40 = 0;
      uStack_38 = 0;
      local_50 = 0;
      uStack_48 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      local_5a = 0;
      uVar11 = *(undefined8 *)PTR_DAT_02710848;
      uVar6 = FUN_00ecec10();
      FUN_014b4620(&uStack_60,uVar11,0,uVar6);
      bVar2 = FUN_0087da90(uVar9,&uStack_60,*(undefined8 *)(lVar8 + 0x10),auStack_24,auStack_28);
    }
    else {
      bVar2 = 1;
    }
    goto LAB_008bb2e0;
  }
  if ((uVar4 - 0x464 & 0xffff) < 5) {
    iVar5 = FUN_0087a5f0(uVar9);
    bVar1 = iVar5 == 100;
  }
  else {
    if (uVar4 != 0x469) {
      if ((((uVar4 & 0xffff) - 0x2d < 5) || ((uVar4 & 0xffff) == 0x34)) ||
         ((uVar4 - 0x235 & 0xffff) < 6)) {
        iVar5 = FUN_014b7450(uVar9,uVar4);
      }
      else {
        if (5 < (uVar4 - 0xa9 & 0xffff)) goto LAB_008bb2b4;
        iVar5 = FUN_014b76b0(uVar9,uVar4);
      }
      bVar2 = 0 < iVar5;
      goto LAB_008bb2e0;
    }
    iVar5 = FUN_008783b0(uVar9);
    if (iVar5 - 0x378U < 3) {
LAB_008bb2b4:
      bVar2 = 0;
      goto LAB_008bb2e0;
    }
    cVar3 = FUN_00879890(uVar9);
    bVar1 = cVar3 == '\n';
  }
  bVar2 = !bVar1;
LAB_008bb2e0:
  return bVar2 & 1;
}


