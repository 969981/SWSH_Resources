/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d01e0; name: FUN_003d01e0
 */


void FUN_003d01e0(undefined8 *param_1,long param_2,uint param_3,undefined4 param_4,
                 undefined8 param_5,ulong param_6)

{
  long lVar1;
  uint uVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar2 = *(uint *)(param_2 + 0x40);
  if ((uVar2 >> 0xf & 1) == 0) {
    pbVar9 = *(byte **)(param_2 + 0x48);
  }
  else {
    if ((uVar2 & 0x1dc) != 0) {
      uVar2 = (uVar2 >> 0xb & 0x100 | 0x10) & uVar2;
      if (uVar2 != 0) {
        FUN_003f9c50(param_2,uVar2,(ulong)(*(short *)(*(long *)(param_2 + 0x48) + 2) == 1) << 3,1,
                     param_4,0,param_5);
      }
      lVar4 = *(long *)(*(long *)(param_2 + 0x48) + 0x18);
      if ((lVar4 != 0) &&
         (*(int *)(lVar4 + 0xc) == *(int *)(*(long *)(*(long *)(param_2 + 8) + 0x48) + 0x7c0))) {
        if ((param_3 & 1) == 0) {
          uVar6 = 0x10;
        }
        else {
          if ((*(byte *)(lVar4 + 10) >> 3 & 1) != 0) {
            FUN_003f9b10(param_2,lVar4);
          }
          uVar6 = 0x11;
        }
        *(ushort *)(lVar4 + 10) = *(ushort *)(lVar4 + 10) | uVar6;
      }
    }
    lVar4 = FUN_003fc7b0(*(undefined8 *)(param_2 + 0x28));
    lVar5 = FUN_003fc7b0(*(undefined8 *)(param_2 + 0x30));
    pbVar9 = *(byte **)(param_2 + 0x48);
    sVar3 = *(short *)(pbVar9 + 2);
    *(short *)(pbVar9 + 2) = sVar3 + -1;
    if ((((short)(sVar3 + -1) == 0) || ((param_6 & 1) != 0)) &&
       (*(int *)(*(long *)(lVar4 + 0x88) + 0x98) = *(int *)(*(long *)(lVar4 + 0x88) + 0x98) + -1,
       lVar5 != 0)) {
      *(int *)(*(long *)(lVar5 + 0x88) + 0x98) = *(int *)(*(long *)(lVar5 + 0x88) + 0x98) + -1;
    }
  }
  if ((pbVar9 == (byte *)0x0) ||
     (sVar3 = *(short *)(pbVar9 + 4), *(short *)(pbVar9 + 4) = sVar3 + -1, (short)(sVar3 + -1) != 0)
     ) {
    uVar2 = *(uint *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  else {
    lVar5 = *(long *)(param_2 + 8);
    lVar1 = *(long *)(param_2 + 0x10);
    lVar4 = lVar5;
    if (*(uint *)(lVar5 + 0x58) <= *(uint *)(lVar1 + 0x58)) {
      lVar4 = lVar1;
      lVar1 = lVar5;
    }
    local_48 = *(undefined4 *)(lVar1 + 0x58);
    uStack_44 = *(undefined4 *)(lVar4 + 0x58);
    FUN_003d8710(param_1 + 0x2a4,&local_48);
    if ((*pbVar9 & 1) == 0) {
      uVar8 = param_1[0x5a];
      *(int *)((long)param_1 + 0x2c4) = *(int *)((long)param_1 + 0x2c4) + -1;
      puVar7 = param_1 + 0x5a;
    }
    else {
      puVar7 = *(undefined8 **)(pbVar9 + 0x18);
      if (puVar7 != (undefined8 *)0x0) {
        *(int *)((long)param_1 + 0xddc) = *(int *)((long)param_1 + 0xddc) + -1;
        *puVar7 = param_1[0x1bd];
        param_1[0x1bd] = puVar7;
        pbVar9[0x18] = 0;
        pbVar9[0x19] = 0;
        pbVar9[0x1a] = 0;
        pbVar9[0x1b] = 0;
        pbVar9[0x1c] = 0;
        pbVar9[0x1d] = 0;
        pbVar9[0x1e] = 0;
        pbVar9[0x1f] = 0;
      }
      uVar8 = param_1[0xa1];
      *(int *)((long)param_1 + 0x4fc) = *(int *)((long)param_1 + 0x4fc) + -1;
      puVar7 = param_1 + 0xa1;
    }
    *(undefined8 *)pbVar9 = uVar8;
    *puVar7 = pbVar9;
    uVar2 = *(uint *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  if ((uVar2 >> 0xf & 1) == 0) {
    if (*(long *)(param_2 + 0x58) == 0) {
      if ((uVar2 & 0x18000) != 0) {
        return;
      }
    }
    else if ((*(byte *)(*(long *)(param_2 + 0x58) + 0x53) & 3) != 0) {
      return;
    }
  }
  lVar4 = FUN_003fc7b0(*(undefined8 *)(param_2 + 0x28));
  lVar5 = FUN_003fc7b0(*(undefined8 *)(param_2 + 0x30));
  if ((param_3 >> 2 & 1) != 0) {
    if ((lVar4 == 0) || (lVar5 == 0)) {
      if (lVar4 != 0) {
        FUN_003c00a0(DAT_01d4c464,lVar4);
      }
      if (lVar5 != 0) {
        FUN_003c00a0(DAT_01d4c464,lVar5);
      }
    }
    else if ((*(byte *)(param_2 + 0x42) >> 2 & 1) == 0) {
      FUN_003e24d0(*param_1,lVar4,lVar5);
    }
  }
  return;
}


