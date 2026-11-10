/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00207d60; name: FUN_00207d60
 */


void FUN_00207d60(long *param_1,long param_2,long param_3,uint param_4,long param_5)

{
  byte *pbVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = (ulong)*(ushort *)(param_1 + 1);
  if (uVar6 == 1) {
    bVar2 = *(short *)(param_3 + 8) == 6 || *(short *)(param_3 + 8) == 0x10;
    plVar3 = param_1;
  }
  else {
    if (*(ushort *)(param_1 + 1) == 0) {
      return;
    }
    bVar2 = *(short *)(param_3 + 8) == 6 || *(short *)(param_3 + 8) == 0x10;
    plVar3 = (long *)*param_1;
  }
  uVar7 = 0;
  if (param_5 == 0) {
    do {
      plVar5 = param_1 + 2;
      lVar4 = plVar3[uVar7];
      pbVar1 = (byte *)(lVar4 + 0x90);
      if ((*(byte *)(lVar4 + 0x38) & 0x40) != 0) {
        pbVar1 = (byte *)(*(long *)(lVar4 + 0x40) + 0x34);
      }
      if ((*pbVar1 >> 1 & 1) != 0) {
        lVar4 = FUN_0039a800(param_2 + 0x2430,lVar4,param_3,bVar2,0,param_4 & 1);
        if ((short)param_1[3] != 1) {
          plVar5 = (long *)*plVar5;
        }
        plVar5[uVar7] = lVar4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar6 != uVar7);
  }
  else {
    uVar7 = 0;
    do {
      lVar4 = plVar3[uVar7];
      pbVar1 = (byte *)(lVar4 + 0x90);
      if ((*(byte *)(lVar4 + 0x38) & 0x40) != 0) {
        pbVar1 = (byte *)(*(long *)(lVar4 + 0x40) + 0x34);
      }
      if ((*pbVar1 >> 1 & 1) != 0) {
        lVar4 = FUN_0039a800(param_2 + 0x2430,lVar4,param_3,bVar2,param_5,param_4 & 1);
        plVar5 = param_1 + 2;
        if ((short)param_1[3] != 1) {
          plVar5 = (long *)param_1[2];
        }
        plVar5[uVar7] = lVar4;
      }
      uVar7 = uVar7 + 1;
      param_5 = param_5 + 0x18;
    } while (uVar6 != uVar7);
  }
  return;
}


