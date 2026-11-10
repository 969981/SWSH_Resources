/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00207780; name: FUN_00207780
 */


void FUN_00207780(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  byte *pbVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  uVar5 = (ulong)*(ushort *)(param_1 + 1);
  if (uVar5 == 1) {
    puVar6 = param_1;
  }
  else {
    if (*(ushort *)(param_1 + 1) == 0) {
      return;
    }
    puVar6 = (undefined8 *)*param_1;
  }
  uVar7 = 0;
  plVar1 = param_1 + 2;
  do {
    while( true ) {
      lVar3 = puVar6[uVar7];
      pbVar2 = (byte *)(lVar3 + 0x90);
      if ((*(byte *)(lVar3 + 0x38) & 0x40) != 0) {
        pbVar2 = (byte *)(*(long *)(lVar3 + 0x40) + 0x34);
      }
      if ((*pbVar2 >> 1 & 1) == 0) break;
      plVar4 = plVar1;
      if (*(short *)(param_1 + 3) != 1) {
        plVar4 = (long *)*plVar1;
      }
      FUN_0039a990(param_2,plVar4[uVar7]);
      if (*(short *)(param_1 + 3) != 1) goto LAB_00207840;
LAB_002077fc:
      plVar1[uVar7] = 0xffffffff;
      uVar7 = uVar7 + 1;
      if (uVar5 == uVar7) {
        return;
      }
    }
    if (*(short *)(param_1 + 3) == 1) goto LAB_002077fc;
LAB_00207840:
    *(undefined8 *)(*plVar1 + uVar7 * 8) = 0xffffffff;
    uVar7 = uVar7 + 1;
    if (uVar5 == uVar7) {
      return;
    }
  } while( true );
}


