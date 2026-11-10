/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ebc3b0; name: FUN_00ebc3b0
 */


void FUN_00ebc3b0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_02710880 + 0xc0);
  uVar3 = FUN_010198e0(lVar5);
  if (((uVar3 & 1) == 0) && (uVar3 = FUN_010198f0(lVar5), (uVar3 & 1) == 0)) {
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb8);
    for (puVar1 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb0); puVar1 != puVar2;
        puVar1 = puVar1 + 1) {
      uVar3 = (**(code **)(*(long *)*puVar1 + 0x88))();
      if ((uVar3 & 1) == 0) {
        plVar7 = (long *)*puVar1;
        uVar3 = (**(code **)(*plVar7 + 0x70))(plVar7);
        if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7), (uVar3 & 1) != 0))
        {
          (**(code **)(*plVar7 + 0xf0))(plVar7);
        }
      }
    }
    if (lVar6 == 0) goto LAB_00ebc490;
    if ((((*(long *)(param_1 + 0x770) == 0) ||
         (lVar8 = *(long *)(*(long *)(param_1 + 0x770) + 0x60), lVar8 == 0)) ||
        (uVar3 = FUN_0156b540(lVar8), (uVar3 & 1) == 0)) ||
       (uVar3 = (**(code **)(*(long *)(lVar8 + -0x50) + 0xf8))(), (uVar3 & 1) != 0))
    goto LAB_00ebc484;
    uVar4 = 1;
  }
  else {
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb8);
    for (puVar1 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb0); puVar2 != puVar1;
        puVar1 = puVar1 + 1) {
      uVar3 = (**(code **)(*(long *)*puVar1 + 0x88))();
      if ((uVar3 & 1) == 0) {
        plVar7 = (long *)*puVar1;
        uVar3 = (**(code **)(*plVar7 + 0x70))(plVar7);
        if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7), (uVar3 & 1) == 0))
        {
          (**(code **)(*plVar7 + 0xe8))(plVar7);
        }
      }
    }
    if (lVar6 == 0) goto LAB_00ebc490;
LAB_00ebc484:
    uVar4 = 0;
  }
  FUN_01196ec0(lVar6,uVar4);
LAB_00ebc490:
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ebc4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


