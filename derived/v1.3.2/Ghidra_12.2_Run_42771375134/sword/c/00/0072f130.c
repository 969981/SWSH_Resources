/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072f130; name: FUN_0072f130
 */


void FUN_0072f130(long *param_1,ulong param_2,undefined1 param_3,undefined1 param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar4 = param_1[6];
  uVar7 = *(long *)(lVar4 + 0x178) - *(long *)(lVar4 + 0x170);
  if ((int)(uVar7 >> 4) != 0) {
    lVar4 = **(long **)(lVar4 + 0x170);
    uVar7 = uVar7 >> 4 & 0xffffffff;
    uVar8 = *(undefined8 *)(lVar4 + 0x814);
    local_70 = *(undefined8 *)(lVar4 + 0x81c);
    uStack_68 = *(undefined8 *)(lVar4 + 0x824);
    uStack_58 = *(undefined8 *)(lVar4 + 0x834);
    local_60 = *(undefined8 *)(lVar4 + 0x82c);
    local_50 = *(undefined8 *)(lVar4 + 0x83c);
    uStack_48 = *(undefined8 *)(lVar4 + 0x844);
    if ((param_2 & 1) == 0) {
      local_80 = *(ulong *)(lVar4 + 0x80c) & 0xfffffffbffffffff;
      uStack_78 = uVar8;
      FUN_0199c0e0(&uStack_78);
      FUN_0072ac30(lVar4,&local_80);
      lVar4 = uVar7 - 1;
      if (lVar4 != 0) {
        lVar9 = 0x10;
        do {
          lVar3 = *(long *)(*(long *)(param_1[6] + 0x170) + lVar9);
          uStack_78 = *(undefined8 *)(lVar3 + 0x814);
          local_70 = *(undefined8 *)(lVar3 + 0x81c);
          uStack_68 = *(undefined8 *)(lVar3 + 0x824);
          uStack_58 = *(undefined8 *)(lVar3 + 0x834);
          local_60 = *(undefined8 *)(lVar3 + 0x82c);
          local_50 = *(undefined8 *)(lVar3 + 0x83c);
          uStack_48 = *(undefined8 *)(lVar3 + 0x844);
          local_80 = *(ulong *)(lVar3 + 0x80c) & 0xfffffffbffffffff;
          FUN_0199c0e0(&uStack_78);
          FUN_0072ac30(lVar3,&local_80);
          lVar4 = lVar4 + -1;
          lVar9 = lVar9 + 0x10;
        } while (lVar4 != 0);
      }
    }
    else {
      local_80 = *(ulong *)(lVar4 + 0x80c) | 0x400000000;
      uStack_78._0_3_ = (undefined3)uVar8;
      uStack_78._0_4_ = CONCAT13(param_4,(undefined3)uStack_78);
      uStack_78._5_3_ = (undefined3)((ulong)uVar8 >> 0x28);
      uStack_78._0_5_ = CONCAT14(param_3,(undefined4)uStack_78);
      FUN_0072ac30(lVar4,&local_80);
      lVar4 = uVar7 - 1;
      if (lVar4 != 0) {
        lVar9 = 0x10;
        do {
          lVar3 = *(long *)(*(long *)(param_1[6] + 0x170) + lVar9);
          local_70 = *(undefined8 *)(lVar3 + 0x81c);
          uStack_68 = *(undefined8 *)(lVar3 + 0x824);
          local_60 = *(undefined8 *)(lVar3 + 0x82c);
          uStack_58 = *(undefined8 *)(lVar3 + 0x834);
          local_50 = *(undefined8 *)(lVar3 + 0x83c);
          uStack_48 = *(undefined8 *)(lVar3 + 0x844);
          local_80 = *(ulong *)(lVar3 + 0x80c) | 0x400000000;
          uStack_78._0_3_ = (undefined3)*(undefined8 *)(lVar3 + 0x814);
          uStack_78._0_4_ = CONCAT13(param_4,(undefined3)uStack_78);
          uStack_78._5_3_ = (undefined3)((ulong)*(undefined8 *)(lVar3 + 0x814) >> 0x28);
          uStack_78._0_5_ = CONCAT14(param_3,(undefined4)uStack_78);
          FUN_0072ac30(lVar3,&local_80);
          lVar4 = lVar4 + -1;
          lVar9 = lVar9 + 0x10;
        } while (lVar4 != 0);
      }
    }
  }
  plVar6 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  if (plVar6 != plVar2) {
    uVar7 = (long)plVar2 + (-8 - (long)plVar6);
    uVar1 = ((uint)(uVar7 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar4 = -((ulong)uVar1 & 3);
      plVar5 = plVar6;
      do {
        plVar6 = plVar5 + 1;
        lVar4 = lVar4 + 1;
        *(undefined1 *)(*plVar5 + 0x1d8) = 1;
        plVar5 = plVar6;
      } while (lVar4 != 0);
    }
    if (0x17 < uVar7) {
      do {
        *(undefined1 *)(*plVar6 + 0x1d8) = 1;
        *(undefined1 *)(plVar6[1] + 0x1d8) = 1;
        *(undefined1 *)(plVar6[2] + 0x1d8) = 1;
        plVar5 = plVar6 + 3;
        plVar6 = plVar6 + 4;
        *(undefined1 *)(*plVar5 + 0x1d8) = 1;
      } while (plVar6 != plVar2);
    }
  }
  return;
}


