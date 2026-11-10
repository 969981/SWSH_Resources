/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f7650; name: FUN_001f7650
 */


void FUN_001f7650(long param_1,undefined8 param_2,long *param_3,long *param_4,uint param_5,
                 long param_6,uint param_7)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar1 = param_1 + 0x10;
  *param_3 = lVar1;
  *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) & 0x3fffffff | 0x80000000;
  uVar7 = (ulong)*(ushort *)(param_4 + 1);
  plVar2 = param_4;
  if (*(ushort *)(param_4 + 1) != 1) {
    plVar2 = (long *)*param_4;
  }
  if (uVar7 != 0) {
    uVar5 = 0;
    if (param_6 == 0) {
      do {
        while( true ) {
          lVar6 = plVar2[uVar5];
          bVar4 = *(byte *)(lVar6 + 0x90);
          FUN_003ff470(lVar6 + 0x20);
          if (-1 < *(int *)(lVar6 + 0x108)) break;
          *(long *)(lVar6 + 0x30) = lVar1;
          *(uint *)(lVar6 + 0x38) = *(uint *)(lVar6 + 0x38) & 0x3fffffff | 0x80000000;
          if ((bVar4 >> 1 & 1) != 0) goto LAB_001f770c;
LAB_001f76e0:
          uVar5 = uVar5 + 1;
          if (uVar7 == uVar5) {
            return;
          }
        }
        if ((bVar4 >> 1 & 1) == 0) goto LAB_001f76e0;
LAB_001f770c:
        lVar6 = FUN_0039a800(param_1 + 0x2430,lVar6,param_2,param_5 & 1,0,param_7 & 1);
        plVar3 = param_4 + 2;
        if ((short)param_4[3] != 1) {
          plVar3 = (long *)param_4[2];
        }
        plVar3[uVar5] = lVar6;
        uVar5 = uVar5 + 1;
      } while (uVar7 != uVar5);
    }
    else {
      do {
        lVar6 = plVar2[uVar5];
        bVar4 = *(byte *)(lVar6 + 0x90);
        FUN_003ff470(lVar6 + 0x20);
        if (*(int *)(lVar6 + 0x108) < 0) {
          *(long *)(lVar6 + 0x30) = lVar1;
          *(uint *)(lVar6 + 0x38) = *(uint *)(lVar6 + 0x38) & 0x3fffffff | 0x80000000;
        }
        if ((bVar4 >> 1 & 1) != 0) {
          lVar6 = FUN_0039a800(param_1 + 0x2430,lVar6,param_2,param_5 & 1,param_6,param_7 & 1);
          plVar3 = param_4 + 2;
          if ((short)param_4[3] != 1) {
            plVar3 = (long *)param_4[2];
          }
          plVar3[uVar5] = lVar6;
        }
        uVar5 = uVar5 + 1;
        param_6 = param_6 + 0x18;
      } while (uVar7 != uVar5);
    }
  }
  return;
}


