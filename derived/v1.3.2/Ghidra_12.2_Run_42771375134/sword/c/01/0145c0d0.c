/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0145c0d0; name: FUN_0145c0d0
 */


void FUN_0145c0d0(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  long local_78;
  long local_70;
  long local_68;
  
  lVar5 = FUN_0152d900(*(undefined8 *)(param_1 + 0x428),*(undefined4 *)(param_1 + 0x414));
  uVar6 = FUN_01452400(*(undefined8 *)(param_1 + 0x420),*(undefined4 *)(param_1 + 0x414));
  uVar1 = *(uint *)(param_1 + 0x410);
  uVar7 = (ulong)uVar1;
  if ((uVar6 & 1) == 0) {
    if (0 < (int)uVar1) {
      lVar11 = 0;
      iVar12 = -1;
      do {
        lVar8 = *(long *)(param_1 + 800 + lVar11 * 8);
        if (lVar8 == 0) {
          uVar9 = *(undefined8 *)(param_1 + 0x428);
          uVar2 = *(undefined1 *)(lVar5 + 2);
          iVar13 = (int)uVar7 + iVar12;
          local_68 = lVar8;
        }
        else {
          plVar10 = (long *)(lVar8 + 0x48);
          (**(code **)(*plVar10 + 0x10))(plVar10);
          uVar9 = *(undefined8 *)(param_1 + 0x428);
          uVar2 = *(undefined1 *)(lVar5 + 2);
          iVar13 = *(int *)(param_1 + 0x410) + ~(uint)lVar11;
          local_68 = lVar8;
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        FUN_0152db90(uVar9,uVar2,iVar13,&local_68);
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
        }
        uVar7 = (ulong)*(int *)(param_1 + 0x410);
        lVar11 = lVar11 + 1;
        iVar12 = iVar12 + -1;
      } while (lVar11 < (long)uVar7);
    }
  }
  else if (0 < (int)uVar1) {
    lVar11 = 0;
    iVar12 = -1;
    do {
      lVar8 = *(long *)(param_1 + 800 + lVar11 * 8);
      if (lVar8 == 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x420);
        uVar4 = *(undefined4 *)(param_1 + 0x414);
        local_70 = 0;
      }
      else {
        plVar10 = (long *)(lVar8 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        uVar9 = *(undefined8 *)(param_1 + 0x420);
        uVar4 = *(undefined4 *)(param_1 + 0x414);
        local_70 = lVar8;
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      auVar14 = FUN_0144d710(uVar9,uVar4,&local_70);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      iVar3 = (uint)*(byte *)(lVar5 + 0x18) * auVar14._0_4_;
      iVar13 = iVar3;
      if (0xfb < iVar3) {
        iVar13 = 0xfc;
      }
      *(int *)(param_1 + 800 + lVar11 * 4 + -0x78) = iVar13;
      uVar4 = FUN_01452320(*(undefined8 *)(param_1 + 0x420),*(undefined4 *)(param_1 + 0x414));
      FUN_0087a850(lVar8,uVar4,iVar3);
      if (0 < auVar14._4_4_) {
        FUN_0087a850(lVar8,auVar14._8_8_ & 0xffffffff,(uint)*(byte *)(lVar5 + 0x18) * auVar14._4_4_)
        ;
      }
      iVar13 = *(int *)(param_1 + 0x410);
      uVar9 = *(undefined8 *)(param_1 + 0x428);
      uVar2 = *(undefined1 *)(lVar5 + 2);
      local_78 = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      FUN_0152db90(uVar9,uVar2,iVar12 + iVar13,&local_78);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      lVar11 = lVar11 + 1;
      iVar12 = iVar12 + -1;
    } while (lVar11 < *(int *)(param_1 + 0x410));
  }
  return;
}


