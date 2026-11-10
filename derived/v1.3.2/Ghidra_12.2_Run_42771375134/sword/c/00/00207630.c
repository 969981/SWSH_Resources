/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00207630; name: FUN_00207630
 */


void FUN_00207630(long *param_1,long param_2)

{
  long *plVar1;
  byte *pbVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar3 = *(ushort *)(param_1 + 1);
  uVar7 = (ulong)uVar3;
  plVar8 = param_1;
  if (uVar7 != 1) {
    plVar8 = (undefined8 *)*param_1;
  }
  if (param_2 != 0) {
    if (uVar3 == 1) {
      plVar9 = param_1;
    }
    else {
      if (uVar3 == 0) goto LAB_00207738;
      plVar9 = (long *)*param_1;
    }
    uVar10 = 0;
    plVar1 = param_1 + 2;
    do {
      while( true ) {
        lVar4 = *(long *)((long)plVar9 + uVar10 * 8);
        pbVar2 = (byte *)(lVar4 + 0x90);
        if ((*(byte *)(lVar4 + 0x38) & 0x40) != 0) {
          pbVar2 = (byte *)(*(long *)(lVar4 + 0x40) + 0x34);
        }
        if ((*pbVar2 >> 1 & 1) != 0) break;
        if (*(short *)(param_1 + 3) != 1) goto LAB_00207710;
LAB_002076cc:
        plVar1[uVar10] = 0xffffffff;
        uVar10 = uVar10 + 1;
        if (uVar7 == uVar10) goto LAB_00207724;
      }
      plVar5 = plVar1;
      if (*(short *)(param_1 + 3) != 1) {
        plVar5 = (long *)*plVar1;
      }
      FUN_0039a990(param_2 + 0x2430,plVar5[uVar10]);
      if (*(short *)(param_1 + 3) == 1) goto LAB_002076cc;
LAB_00207710:
      *(undefined8 *)(*plVar1 + uVar10 * 8) = 0xffffffff;
      uVar10 = uVar10 + 1;
    } while (uVar7 != uVar10);
  }
LAB_00207724:
  if (uVar3 != 0) {
    do {
      FUN_00206c90(*plVar8);
      uVar7 = uVar7 - 1;
      plVar8 = plVar8 + 1;
    } while (uVar7 != 0);
  }
LAB_00207738:
  uVar6 = *(undefined8 *)(*(long *)PTR_DAT_02711048 + 0x308);
  FUN_00217f10(param_1,uVar6);
  FUN_00217f10(param_1 + 2,uVar6);
  return;
}


