/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cf6d0; name: FUN_001cf6d0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_001cf6d0(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((long)param_1 + 0x11c);
  plVar1 = param_1 + 4;
  if ((uVar4 >> 0x16 & 1) == 0) {
    *(long *)((long)param_1 + 0xfc) = param_1[0xe];
    *(int *)((long)param_1 + 0x104) = (int)param_1[0xf];
    uVar2 = uVar4;
  }
  else {
    FUN_003bdad0(plVar1,(long)param_1 + 0xfc);
    uVar2 = uVar4 & 0xffbfffff;
  }
  if ((uVar4 >> 0x17 & 1) == 0) {
    param_1[0x21] = param_1[0x10];
    *(int *)(param_1 + 0x22) = (int)param_1[0x11];
  }
  else {
    FUN_003bdb20(plVar1,param_1 + 0x21);
    uVar2 = uVar2 & 0xff7fffff;
  }
  uVar4 = uVar2;
  if (((uVar2 >> 0xf & 1) != 0) && ((*(byte *)((long)param_1 + 0x4c) & 1) != 0)) {
    lVar3 = param_1[2];
    if (lVar3 == 0) {
      lVar3 = FUN_001d1a00(*param_1,*(byte *)((long)param_1 + 0xb) & 0xf);
      param_1[2] = lVar3;
    }
    FUN_003be880(*(undefined4 *)((long)param_1 + 0x114),plVar1,*(undefined8 *)(*param_1 + 0x1178),
                 lVar3 + 0x100);
    uVar4 = uVar2 & 0xffff7fff;
  }
  if ((uVar2 & 0x18000000) != 0) {
    FUN_003bdf30(plVar1,uVar4 >> 0x1b & 1,uVar4 >> 0x1c & 1);
    uVar4 = uVar4 & 0xe7ffffff;
  }
  if ((uVar4 & 0x30000) != 0) {
    lVar3 = param_1[2];
    if (lVar3 == 0) {
      lVar3 = FUN_001d1a00(*param_1,*(byte *)((long)param_1 + 0xb) & 0xf);
      param_1[2] = lVar3;
    }
    FUN_003bdc60(plVar1,*(undefined8 *)(*param_1 + 0x1178),(undefined8 *)(lVar3 + 0x11c),
                 lVar3 + 0x128);
    uVar4 = uVar4 & 0xfffcffff;
    *(undefined8 *)(lVar3 + 0x11c) = 0;
    *(undefined8 *)(lVar3 + 0x124) = 0;
    *(undefined8 *)(lVar3 + 300) = 0;
  }
  if ((uVar4 & 0x60000000) != 0) {
    FUN_003be070(plVar1,uVar4 >> 0x1d & 1,uVar4 >> 0x1e & 1);
    uVar4 = uVar4 & 0x9fffffff;
  }
  if ((uVar4 & 0xc0000) != 0) {
    lVar3 = param_1[2];
    if (lVar3 == 0) {
      lVar3 = FUN_001d1a00(*param_1,*(byte *)((long)param_1 + 0xb) & 0xf);
      param_1[2] = lVar3;
    }
    FUN_003bdfa0(plVar1,*(undefined8 *)(*param_1 + 0x1178),(undefined8 *)(lVar3 + 0x134),
                 lVar3 + 0x140);
    uVar4 = uVar4 & 0xfff3ffff;
    *(undefined8 *)(lVar3 + 0x134) = 0;
    *(undefined8 *)(lVar3 + 0x13c) = 0;
    *(undefined8 *)(lVar3 + 0x144) = 0;
  }
  if ((uVar4 >> 0x18 & 1) == 0) {
    *(undefined4 *)((long)param_1 + 0x114) = *(undefined4 *)((long)param_1 + 0xbc);
  }
  else if ((uVar4 & 0x6000000) == 0) {
    FUN_003be770(*(undefined4 *)((long)param_1 + 0x114),plVar1,0);
    uVar4 = uVar4 & 0xfeffffff;
  }
  else if ((uVar4 >> 0x1a & 1) != 0) {
    lVar3 = param_1[2];
    if (lVar3 == 0) {
      lVar3 = FUN_001d1a00(*param_1,*(byte *)((long)param_1 + 0xb) & 0xf);
      param_1[2] = lVar3;
    }
    if (((uVar4 >> 0xe & 1) == 0) ||
       (((*(byte *)((long)param_1 + 0x4c) ^ *(byte *)(lVar3 + 0x14c)) & 1) == 0)) {
      FUN_003be770(*(undefined4 *)((long)param_1 + 0x114),plVar1,1);
      uVar4 = uVar4 & 0xfaffffff;
    }
  }
  *(uint *)((long)param_1 + 0x11c) = uVar4;
  return;
}


