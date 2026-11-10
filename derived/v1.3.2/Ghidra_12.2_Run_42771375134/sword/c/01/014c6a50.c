/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c6a50; name: FUN_014c6a50
 */


void FUN_014c6a50(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,uint param_5)

{
  short *psVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  short *psVar7;
  ulong uVar8;
  undefined8 uVar9;
  short sVar10;
  
  uVar4 = FUN_0077dba0(param_3,0);
  uVar4 = uVar4 & 0xffff;
  uVar8 = (ulong)uVar4;
  if (uVar4 < *(uint *)(param_1 + 0x198)) {
    if (*(short *)(*(long *)(param_1 + 0x1a0) + uVar8 * 0x18 + 0x10) != 0) {
      FUN_0077d5c0(param_2,0x10);
      FUN_0077d5c0(param_2,2);
      uVar5 = FUN_014bf280(0xbd,7);
      FUN_0077d5c0(param_2,uVar5);
      FUN_0077d5c0(param_2,*(undefined2 *)(*(long *)(param_1 + 0x1a0) + uVar8 * 0x18 + 0x10));
    }
    uVar6 = FUN_014bf070(param_3);
    if ((uVar6 & 1) == 0) {
      if ((param_4 & 1) == 0) {
        *(uint *)(param_1 + 0x22c) = uVar4;
        FUN_014c6330(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1a0) + uVar8 * 0x18));
        uVar6 = FUN_014bef40(param_3);
        uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + uVar8 * 0x18);
        if ((uVar6 & 1) != 0) {
          uVar5 = FUN_0077d490(uVar9);
          FUN_0077d4a0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + uVar8 * 0x18),
                       *(undefined8 *)(param_1 + 0x1e0),uVar5);
          FUN_014bbed0(*(undefined8 *)PTR_DAT_02710898,*(undefined8 *)(param_1 + 0x1e0),uVar5);
          FUN_0077d520(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x1e0));
          uVar9 = *(undefined8 *)(param_1 + 0x188);
        }
        FUN_014c6750(param_1,param_2,uVar9,1,param_5 & 1);
      }
      else {
        if ((param_5 & 1) == 0) {
          uVar6 = FUN_014bef40(param_3);
          uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + uVar8 * 0x18);
          if ((uVar6 & 1) != 0) {
            uVar5 = FUN_0077d490(uVar9);
            FUN_0077d4a0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + uVar8 * 0x18),
                         *(undefined8 *)(param_1 + 0x1e0),uVar5);
            FUN_014bbed0(*(undefined8 *)PTR_DAT_02710898,*(undefined8 *)(param_1 + 0x1e0),uVar5);
            FUN_0077d520(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x1e0));
            uVar9 = *(undefined8 *)(param_1 + 0x188);
          }
        }
        else {
          uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + uVar8 * 0x18);
          psVar7 = *(short **)(param_1 + 0x1e0);
          uVar5 = FUN_0077d490(uVar9);
          FUN_0077d4a0(uVar9,psVar7,uVar5);
          do {
            while( true ) {
              sVar10 = *psVar7;
              if (sVar10 == 0) goto LAB_014c6cbc;
              if (sVar10 != 0x10) break;
              psVar7 = (short *)FUN_0077db30(psVar7);
            }
            uVar6 = FUN_014ba2e0(sVar10,1);
          } while ((uVar6 & 1) != 0);
          FUN_014bbe80(*(undefined8 *)PTR_DAT_02710898,psVar7);
LAB_014c6cbc:
          FUN_0077d520(*(undefined8 *)(param_1 + 0x170),psVar7);
          uVar9 = *(undefined8 *)(param_1 + 0x170);
        }
        FUN_0077d560(param_2,uVar9);
      }
    }
    else {
      uVar3 = FUN_0077db70(param_3);
      if (uVar3 < 2) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0077dba0(param_3,1);
      }
      FUN_014c7080(param_1,param_2,uVar4,uVar5);
    }
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + uVar8 * 0x18);
    psVar7 = (short *)FUN_0077d470(uVar9);
    uVar4 = FUN_0077d480(uVar9);
    sVar10 = 0;
    if (uVar4 != 0) {
      psVar1 = psVar7 + uVar4;
      do {
        while (sVar2 = *psVar7, sVar2 == 0x10) {
          psVar7 = (short *)FUN_0077db30(psVar7);
          if (psVar1 <= psVar7) goto LAB_014c6d48;
        }
        uVar6 = FUN_014ba2e0(sVar2,1);
        psVar7 = psVar7 + 1;
        if ((uVar6 & 1) == 0) {
          sVar10 = sVar2;
        }
      } while (psVar7 < psVar1);
    }
LAB_014c6d48:
    *(short *)(param_1 + 0x230) = sVar10;
    if (*(short *)(*(long *)(param_1 + 0x1a0) + uVar8 * 0x18 + 0x10) != 0) {
      FUN_0077d5c0(param_2,0x10);
      FUN_0077d5c0(param_2,1);
      uVar5 = FUN_014bf280(0xbd,9);
      FUN_0077d5c0(param_2,uVar5);
    }
    *(undefined4 *)(param_1 + 0x234) = 0;
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  FUN_0077db30(param_3);
  return;
}


