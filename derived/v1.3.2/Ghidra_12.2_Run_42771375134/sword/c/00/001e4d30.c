/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e4d30; name: FUN_001e4d30
 */


void FUN_001e4d30(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined1 local_60 [8];
  uint local_58 [2];
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 & 0xffffff) == 0) goto LAB_001e4e54;
  lVar3 = param_1[0xc];
  puVar6 = (undefined4 *)param_1[2];
  plVar1 = param_1 + 4;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)FUN_001d1a00(*param_1,uVar2 >> 0x18 & 0xf);
    param_1[2] = (long)puVar6;
    lVar7 = *param_1;
    if ((uVar2 & 1) != 0) goto LAB_001e4dd4;
joined_r0x001e4e00:
    if (((uVar2 >> 1 & 1) == 0) || (lVar7 == 0)) goto LAB_001e4e14;
    puVar4 = puVar6 + 0x22;
    if (*(short *)(puVar6 + 0x23) != 1) {
      puVar4 = (uint *)(*(long *)(lVar7 + 0x2020) + (ulong)*puVar4 * 2);
    }
    FUN_003f88c0(plVar1,puVar4);
    FUN_003e85f0(lVar7 + 0x10,plVar1);
    uVar5 = *(uint *)(param_1 + 1);
    if ((uVar5 >> 2 & 1) != 0) goto LAB_001e4e80;
LAB_001e4e1c:
    if ((uVar5 >> 3 & 1) == 0) goto LAB_001e4e20;
LAB_001e4ebc:
    param_1[7] = *(long *)(puVar6 + 9);
    param_1[6] = *(long *)(puVar6 + 7);
    if ((uVar5 >> 4 & 1) != 0) goto LAB_001e4ed0;
LAB_001e4e24:
    if ((uVar5 >> 5 & 1) == 0) goto LAB_001e4e28;
LAB_001e4edc:
    *(undefined4 *)(param_1 + 0x18) = puVar6[0xc];
    if ((uVar5 >> 6 & 1) != 0) goto LAB_001e4ee8;
LAB_001e4e2c:
    lVar7 = FUN_00206d10(param_1);
  }
  else {
    lVar7 = *param_1;
    if ((uVar2 & 1) == 0) goto joined_r0x001e4e00;
LAB_001e4dd4:
    if (lVar7 != 0) {
      FUN_003e85d0(lVar7 + 0x10,plVar1);
      FUN_003f8b40(plVar1,puVar6 + 0xe);
      FUN_003e85b0(lVar7 + 0x10,plVar1);
      goto joined_r0x001e4e00;
    }
    FUN_003f8b40(plVar1,puVar6 + 0xe);
LAB_001e4e14:
    uVar5 = *(uint *)(param_1 + 1);
    if ((uVar5 >> 2 & 1) == 0) goto LAB_001e4e1c;
LAB_001e4e80:
    *(undefined4 *)(param_1 + 8) = *puVar6;
    *(undefined4 *)((long)param_1 + 0x44) = puVar6[1];
    *(undefined4 *)(param_1 + 9) = puVar6[2];
    *(undefined4 *)((long)param_1 + 0x4c) = puVar6[3];
    *(undefined4 *)(param_1 + 10) = puVar6[4];
    *(undefined4 *)((long)param_1 + 0x54) = puVar6[5];
    *(undefined4 *)(param_1 + 0xb) = puVar6[6];
    if ((uVar5 >> 3 & 1) != 0) goto LAB_001e4ebc;
LAB_001e4e20:
    if ((uVar5 >> 4 & 1) == 0) goto LAB_001e4e24;
LAB_001e4ed0:
    *(undefined4 *)((long)param_1 + 0x5c) = puVar6[0xb];
    if ((uVar5 >> 5 & 1) != 0) goto LAB_001e4edc;
LAB_001e4e28:
    if ((uVar5 >> 6 & 1) == 0) goto LAB_001e4e2c;
LAB_001e4ee8:
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(puVar6 + 0xd);
    lVar7 = FUN_00206d10(param_1);
  }
  if (lVar7 != 0) {
    local_60[0] = (char)lVar3;
    local_58[0] = uVar2 & 0xffffff;
    FUN_003d9690(lVar7,plVar1,local_58,local_60,1);
  }
LAB_001e4e54:
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xff000000;
  return;
}


