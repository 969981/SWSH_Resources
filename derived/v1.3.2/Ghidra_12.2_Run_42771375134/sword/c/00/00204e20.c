/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00204e20; name: FUN_00204e20
 */


void FUN_00204e20(long *param_1)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  long *plVar6;
  long lVar5;
  ulong uVar7;
  
  puVar1 = PTR_DAT_02711220 + 0x168;
  *param_1 = (long)(PTR_DAT_02711220 + 0x10);
  param_1[3] = (long)puVar1;
  plVar6 = param_1 + 0x13;
  iVar3 = (int)*plVar6;
  if (iVar3 == 6) {
    if ((*(byte *)(param_1 + 7) & 1) != 0) {
      plVar6 = (long *)(param_1[8] + 0x38);
    }
    lVar5 = plVar6[1];
  }
  else if (iVar3 == 5) {
    if ((*(byte *)(param_1 + 7) & 1) != 0) {
      plVar6 = (long *)(param_1[8] + 0x38);
    }
    lVar5 = plVar6[5];
  }
  else {
    if (iVar3 != 4) goto LAB_00204ee0;
    if ((*(byte *)(param_1 + 7) & 1) != 0) {
      plVar6 = (long *)(param_1[8] + 0x38);
    }
    lVar5 = plVar6[4];
  }
  if (lVar5 != 0) {
                    /* try { // try from 00204ec8 to 00204edf has its CatchHandler @ 00204fb4 */
    iVar3 = FUN_003ff490(lVar5 + 0x18);
    if (iVar3 == 0) {
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))((long *)(lVar5 + 0x10));
    }
  }
LAB_00204ee0:
  if ((*(byte *)(param_1 + 7) >> 1 & 1) == 0) {
                    /* try { // try from 00204eec to 00204eef has its CatchHandler @ 00204fb0 */
    uVar2 = FUN_003f8ae0(param_1 + 10);
    plVar6 = (long *)PTR_DAT_02711040;
  }
  else {
    uVar2 = *(ushort *)(param_1[8] + 0x8c);
    plVar6 = (long *)PTR_DAT_02711040;
  }
  PTR_DAT_02711040 = (undefined *)plVar6;
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      lVar5 = *plVar6;
      if ((*(byte *)(param_1 + 7) >> 1 & 1) == 0) {
                    /* try { // try from 00204f30 to 00204f8b has its CatchHandler @ 00204fb8 */
        lVar4 = FUN_003f8b10(param_1 + 10);
      }
      else {
        lVar4 = param_1[8];
        if (*(short *)(lVar4 + 0x8c) == 1) {
          lVar4 = lVar4 + 0x88;
        }
        else {
          lVar4 = *(long *)(param_1[6] + 0x2020) + (ulong)*(uint *)(lVar4 + 0x88) * 2;
        }
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x50) + (ulong)*(ushort *)(lVar4 + uVar7 * 2) * 8);
      iVar3 = FUN_003ff490(lVar5 + 0x20);
      if (iVar3 == 0) {
        (**(code **)(*(long *)(lVar5 + 0x18) + 0x10))();
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  FUN_003f8a40(param_1 + 10);
  return;
}


