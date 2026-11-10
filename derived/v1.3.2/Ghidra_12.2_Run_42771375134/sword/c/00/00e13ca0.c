/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e13ca0; name: FUN_00e13ca0
 */


void FUN_00e13ca0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar8;
  long *plVar7;
  long lVar9;
  
  if (*(long *)(param_1 + 0x248) == 0) {
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x248),param_1 + 0x240);
    lVar1 = *(long *)(param_1 + 0x248);
    *(undefined8 *)(param_1 + 0x248) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  lVar1 = *(long *)PTR_DAT_0271e8d0;
  if (*(long *)(lVar1 + 0xe8) != 0) {
    plVar5 = (long *)*(long *)(lVar1 + 200);
    while (plVar5 != (long *)0x0) {
      puVar6 = (undefined8 *)plVar5[3];
      lVar9 = *plVar5;
      plVar5[3] = 0;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6);
        (**(code **)(*(long *)plVar5[4] + 0x18))((long *)plVar5[4],puVar6,plVar5[5],plVar5[6]);
      }
      (**(code **)(**(long **)(lVar1 + 0xd0) + 0x18))(*(long **)(lVar1 + 0xd0),plVar5,0x38,8);
      plVar5 = (long *)lVar9;
    }
    uVar4 = *(ulong *)(lVar1 + 0xa8);
    *(undefined8 *)(lVar1 + 200) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        do {
          lVar3 = lVar9 * 8;
          lVar9 = lVar9 + 4;
          *(undefined8 *)(*(long *)(lVar1 + 0xa0) + lVar3) = 0;
          *(undefined8 *)(*(long *)(lVar1 + 0xa0) + lVar3 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar1 + 0xa0) + lVar3 + 0x10) = 0;
          *(undefined8 *)(*(long *)(lVar1 + 0xa0) + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar9);
      }
      if (uVar2 != 0) {
        lVar9 = lVar9 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*(long *)(lVar1 + 0xa0) + lVar9) = 0;
          lVar9 = lVar9 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(lVar1 + 0xe8) = 0;
  }
  plVar5 = *(long **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x148);
  if (*(long **)(param_1 + 0x218) != plVar5) {
    plVar7 = *(long **)(param_1 + 0x218);
    do {
      plVar8 = plVar7 + -2;
      if (*plVar8 != 0) {
        (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
        plVar7[-2] = 0;
      }
      plVar7 = plVar8;
    } while (plVar5 != plVar8);
  }
  *(long **)(param_1 + 0x218) = plVar5;
  return;
}


