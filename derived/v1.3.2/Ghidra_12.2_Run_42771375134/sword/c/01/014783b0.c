/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014783b0; name: FUN_014783b0
 */


void FUN_014783b0(long param_1)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_60 [24];
  long local_48;
  
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_01478420:
    cVar1 = *(char *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5e0) + 0x58);
  }
  else {
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar10 != (undefined8 *)0x0) {
      plVar5 = (long *)(**(code **)*puVar10)(puVar10);
      plVar6 = (long *)FUN_0146e370();
      if (plVar5 == (long *)0x0) goto LAB_01478420;
      do {
        if (plVar5 == plVar6) {
          puVar10 = puVar10 + -10;
          if (*(char *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5e0) + 0x58) != '\0') {
            return;
          }
          goto LAB_01478460;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    cVar1 = *(char *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5e0) + 0x58);
  }
  puVar10 = (undefined8 *)0x0;
  if (cVar1 == '\0') {
LAB_01478460:
    uVar7 = FUN_010386e0();
    switch(*(undefined4 *)(param_1 + (uVar7 & 0xffffffff) * 4 + 0xa0)) {
    case 0:
      *(undefined4 *)(puVar10[0xc] + 0x14) = 3;
      lVar9 = *(long *)(param_1 + 0x90);
      if (*(char *)(lVar9 + 0x5cb) == '\0') {
        *(undefined1 *)(lVar9 + 0x5cb) = 1;
        FUN_006cf0a0(auStack_60,&DAT_026a3650);
        FUN_016d3620(auStack_60);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
        FUN_010364c0(lVar9,1);
      }
      FUN_01037030(*(undefined8 *)(param_1 + 0x80));
      *(undefined4 *)(param_1 + 0x7c) = 0xb;
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
      FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),0,1);
      break;
    case 1:
      lVar9 = puVar10[0xc];
      uVar8 = (**(code **)(**(long **)(lVar9 + 8) + 0x50))
                        (*(long **)(lVar9 + 8),*(undefined4 *)(lVar9 + 0x10));
      sVar3 = FUN_008787f0();
      if (sVar3 == 0) {
        FUN_01479920(param_1,0x2ca88fc062245800,1,1);
      }
      else {
        lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
        }
        uVar4 = FUN_008787f0(uVar8);
        uVar7 = FUN_015209b0(lVar12,uVar4,1);
        if ((uVar7 & 1) == 0) {
          FUN_01479920(param_1,0x2ca890c0622459b3,1,1);
        }
        else {
          uVar4 = FUN_008787f0(uVar8);
          FUN_01520760(lVar12,uVar4,1,1);
          FUN_014c7bf0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8),0,uVar8);
          uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8);
          uVar2 = FUN_008787f0(uVar8);
          FUN_014c9900(uVar11,1,uVar2,1);
          FUN_01479920(param_1,0x2ca896c0622463e5,1,1);
          FUN_01472630(puVar10);
          FUN_014713f0(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(lVar9 + 0x10));
          FUN_01470ad0(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(lVar9 + 0x10),1);
          uVar7 = FUN_01479ed0(param_1,*(undefined4 *)(lVar9 + 0x10));
          if ((uVar7 & 1) != 0) {
            FUN_01472540(puVar10,*(undefined4 *)(lVar9 + 0x10));
            FUN_0146bd00(*(long *)(*(long *)(param_1 + 0x90) + 0x5e0) +
                         (long)*(int *)(lVar9 + 0x10) * 0x218);
          }
        }
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
        }
      }
      *(undefined4 *)(param_1 + 0x7c) = 5;
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
      return;
    case 2:
      plVar5 = *(long **)(puVar10[0xc] + 8);
      (**(code **)(*plVar5 + 0x50))(plVar5,*(undefined4 *)(puVar10[0xc] + 0x10));
      sVar3 = FUN_008787f0();
      if (sVar3 == 0) {
        FUN_01479920(param_1,0x2ca88fc062245800,1,1);
        *(undefined4 *)(param_1 + 0x7c) = 5;
        FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 7;
        FUN_01472660(puVar10,0);
        plVar5 = (long *)(param_1 + 0x90);
        FUN_01470a00(*plVar5,1,*(undefined4 *)(puVar10 + 0xd));
        FUN_00ffa3d0(*plVar5,0);
        FUN_00ffa160(*plVar5,1,1);
        *(byte *)(*(long *)(*plVar5 + 0x618) + 0x58) =
             *(byte *)(*(long *)(*plVar5 + 0x618) + 0x58) | 1;
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(puVar10[0xc] + 0x10);
        FUN_01479920(param_1,0x2cac17c0622774ef,1,0);
        if (*(char *)(*plVar5 + 0x760) != '\0') {
          FUN_016b2d70(*(undefined8 *)(*plVar5 + 0x738),0);
        }
      }
      *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x730) = 0;
      break;
    case 3:
      if (*(char *)(param_1 + 0x98) == '\0') {
        *(undefined4 *)(param_1 + 0x7c) = 3;
        FUN_014794d0(param_1);
        plVar5 = *(long **)(puVar10[0xc] + 8);
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8);
        uVar8 = (**(code **)(*plVar5 + 0x50))(plVar5,*(undefined4 *)(puVar10[0xc] + 0x10));
        FUN_014c7bf0(uVar11,0,uVar8);
        FUN_014797a0(param_1);
        FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),1,1);
        return;
      }
      *(undefined1 *)(param_1 + 0x98) = 0;
      FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),1,1);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
      *(undefined4 *)(param_1 + 0x7c) = 1;
      *(undefined4 *)(puVar10[0xc] + 0x14) = 0;
      FUN_01471470(*(undefined8 *)(param_1 + 0x90),0);
      FUN_01470b40(*(undefined8 *)(param_1 + 0x90));
      FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
      lVar9 = *(long *)(*(long *)(param_1 + 0x90) + 0x618);
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
    }
  }
  return;
}


