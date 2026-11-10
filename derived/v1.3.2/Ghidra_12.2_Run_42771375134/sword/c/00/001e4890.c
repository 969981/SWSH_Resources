/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e4890; name: FUN_001e4890
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_001e4890(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined2 local_48 [4];
  undefined1 local_38 [8];
  
  plVar3 = (long *)param_1[0x15];
  if (plVar3 != (long *)0x0) {
    if ((char)plVar3[0x11] != '\0') {
      uVar2 = FUN_00400880();
      FUN_00400890(uVar2,8,"./../../PhysX/src/particles\\NpParticleFluidReadData.h",0x43,
                   "PxParticleReadData access through %s while its still locked by last call of %s."
                   ,"PxScene::fetchResults()",(long)plVar3 + 0x89);
    }
    strncpy((char *)((long)plVar3 + 0x89),"PxScene::fetchResults()",0x80);
    *(undefined1 *)(plVar3 + 0x21) = 0;
    *(undefined1 *)(plVar3 + 0x11) = 1;
  }
  uVar6 = *(uint *)(param_1 + 1);
  if ((uVar6 & 0xffffff) != 0) {
    lVar4 = param_1[2];
    uVar1 = uVar6;
    if (lVar4 == 0) {
                    /* try { // try from 001e495c to 001e4a57 has its CatchHandler @ 001e4b24 */
      lVar4 = FUN_001d1a00(*param_1,uVar6 >> 0x18 & 0xf);
      param_1[2] = lVar4;
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_003a9a30(*(undefined4 *)(lVar4 + 4),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_003a9a50(*(undefined4 *)(lVar4 + 8),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_003a9a70(*(undefined4 *)(lVar4 + 0xc),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 8 & 1) != 0) {
      FUN_003a9810(param_1 + 3,lVar4 + 0x10);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_003aa270(param_1 + 3,lVar4 + 0x1c);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      FUN_003a9a90(*(undefined4 *)(lVar4 + 0x2c),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      FUN_003a9ab0(*(undefined4 *)(lVar4 + 0x30),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      FUN_003a9ad0(*(undefined4 *)(lVar4 + 0x34),param_1 + 3);
      uVar1 = *(uint *)(param_1 + 1);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      FUN_003a9af0(*(undefined4 *)(lVar4 + 0x38),param_1 + 3);
    }
    if ((uVar6 >> 0x10 & 1) != 0) {
      FUN_003a9b30(param_1 + 3);
    }
    uVar6 = *(uint *)(param_1 + 1);
    if ((uVar6 >> 0xe & 1) != 0) {
      FUN_003a9b10(param_1 + 3,lVar4 + 0x3c);
      uVar6 = *(uint *)(param_1 + 1);
    }
    if ((uVar6 >> 0xf & 1) != 0) {
      local_48[0] = *(undefined2 *)(lVar4 + 0x4c);
      FUN_003a9b50(param_1 + 3,local_48);
      uVar6 = *(uint *)(param_1 + 1);
    }
    if ((uVar6 & 7) != 0) {
      lVar4 = *(long *)(PTR_DAT_02711068 + (ulong)(uVar6 >> 0x18 & 0xf) * 8 + 0x30);
      puVar5 = (undefined1 *)param_1[2];
      if (puVar5 == (undefined1 *)0x0) {
                    /* try { // try from 001e4ad4 to 001e4b13 has its CatchHandler @ 001e4b24 */
        puVar5 = (undefined1 *)FUN_001d1a00(*param_1);
        uVar6 = *(uint *)(param_1 + 1);
        param_1[2] = puVar5;
      }
      if ((uVar6 & 1) != 0) {
        local_38[0] = *puVar5;
        FUN_003ba2d0(lVar4 + (long)param_1,local_38);
        uVar6 = *(uint *)(param_1 + 1);
      }
      if ((uVar6 >> 1 & 1) != 0) {
        FUN_003ba310(lVar4 + (long)param_1,puVar5[1]);
        uVar6 = *(uint *)(param_1 + 1);
      }
      if ((uVar6 >> 2 & 1) != 0) {
        *(undefined1 *)((long)param_1 + lVar4 + 0xe) = puVar5[2];
      }
    }
  }
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = uVar6 & 0xff000000;
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 001e4ab0 to 001e4ab7 has its CatchHandler @ 001e4b20 */
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return;
}


