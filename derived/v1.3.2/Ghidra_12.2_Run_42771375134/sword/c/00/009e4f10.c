/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e4f10; name: FUN_009e4f10
 */


void FUN_009e4f10(long param_1)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  long *plVar11;
  
  if (*(char *)(param_1 + 0x88) != '\0') {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x84)) {
  case 0:
    uVar4 = 1;
    goto LAB_009e5320;
  case 1:
    if (*(short *)(param_1 + 0x6e) != 0) {
      FUN_009e6310(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x20));
      uVar4 = 2;
      goto LAB_009e5320;
    }
    break;
  case 2:
    plVar11 = *(long **)(param_1 + 0x50);
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    nn::os::GetSystemTick();
    lVar6 = nn::os::ConvertToTimeSpan();
    dVar1 = DAT_01cd5058;
    do {
      (**(code **)(*plVar11 + 0x28))(plVar11);
      uVar7 = (**(code **)(*plVar11 + 0x30))(plVar11);
      if ((uVar7 & 1) != 0) break;
      nn::os::GetSystemTick();
      lVar8 = nn::os::ConvertToTimeSpan();
    } while ((double)(lVar8 - lVar6) / dVar1 <= 2.5);
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
    }
    uVar7 = (**(code **)(**(long **)(param_1 + 0x50) + 0x30))();
    if ((uVar7 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x94) = 0;
    uVar4 = FUN_009e6540(*(undefined8 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x98) = uVar4;
    break;
  case 3:
    uVar7 = FUN_009e5350(param_1);
    if ((uVar7 & 1) != 0) {
      FUN_009e8d90(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x20));
      uVar4 = 4;
      goto LAB_009e5320;
    }
    goto LAB_009e50f8;
  case 4:
    plVar11 = *(long **)(param_1 + 0x58);
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    nn::os::GetSystemTick();
    lVar6 = nn::os::ConvertToTimeSpan();
    dVar1 = DAT_01cd5058;
    do {
      (**(code **)(*plVar11 + 0x28))(plVar11);
      uVar7 = (**(code **)(*plVar11 + 0x30))(plVar11);
      if ((uVar7 & 1) != 0) break;
      nn::os::GetSystemTick();
      lVar8 = nn::os::ConvertToTimeSpan();
    } while ((double)(lVar8 - lVar6) / dVar1 <= 2.5);
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
    }
    uVar7 = (**(code **)(**(long **)(param_1 + 0x58) + 0x30))();
    if ((uVar7 & 1) == 0) {
      return;
    }
    pbVar5 = (byte *)FUN_009e9190(*(undefined8 *)(param_1 + 0x58));
    if ((*pbVar5 & 1) != 0) {
      uVar4 = *(undefined4 *)(pbVar5 + 4);
      uVar3 = *(undefined4 *)(pbVar5 + 8);
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xa0) = uVar4;
      *(char *)(param_1 + 0x70) = (char)uVar3;
    }
LAB_009e50f8:
    uVar4 = 5;
    goto LAB_009e5320;
  case 5:
    if ((char)(*(char *)(param_1 + 0x69) + *(char *)(param_1 + 0x68) + *(char *)(param_1 + 0x6a)) !=
        -*(char *)(param_1 + 0x6b)) {
      uVar9 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
      uVar4 = FUN_008e0a00(*(undefined8 *)(param_1 + 0x20));
      uVar3 = FUN_008f9470(*(undefined8 *)(param_1 + 8),uVar9,uVar4);
      if (*(int *)(param_1 + 0x94) == 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined2 *)(param_1 + 0x6e);
      }
      FUN_009e7310(*(undefined8 *)(param_1 + 0x60),(char *)(param_1 + 0x68),uVar3,uVar4,uVar10,
                   *(undefined1 *)(param_1 + 0x6c));
      FUN_009e7390(*(undefined8 *)(param_1 + 0x60));
      uVar4 = 6;
      goto LAB_009e5320;
    }
    *(undefined8 *)(param_1 + 0xac) = 0x6400000000;
    goto LAB_009e524c;
  case 6:
    plVar11 = *(long **)(param_1 + 0x60);
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    nn::os::GetSystemTick();
    lVar6 = nn::os::ConvertToTimeSpan();
    dVar1 = DAT_01cd5058;
    do {
      (**(code **)(*plVar11 + 0x28))(plVar11);
      uVar7 = (**(code **)(*plVar11 + 0x30))(plVar11);
      if ((uVar7 & 1) != 0) break;
      nn::os::GetSystemTick();
      lVar8 = nn::os::ConvertToTimeSpan();
    } while ((double)(lVar8 - lVar6) / dVar1 <= 2.5);
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
    }
    uVar7 = (**(code **)(**(long **)(param_1 + 0x60) + 0x30))();
    if ((uVar7 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x60);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    uVar7 = FUN_009e87c0(lVar6);
    if ((uVar7 & 1) == 0) {
      uVar7 = FUN_009e87d0(lVar6);
      if ((uVar7 & 1) == 0) {
        *(undefined8 *)(param_1 + 0xac) = 0x6400000000;
      }
      else {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        uVar4 = FUN_009e87e0(lVar6);
        *(undefined4 *)(param_1 + 0x90) = uVar4;
        FUN_009e87f0(lVar6,param_1 + 0x71,param_1 + 0x72);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xa4) = 2;
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
LAB_009e524c:
    uVar4 = 7;
    goto LAB_009e5320;
  case 7:
    iVar2 = FUN_009e5440(param_1);
    if (iVar2 == 6) {
      iVar2 = FUN_009e5800(param_1);
    }
    *(int *)(param_1 + 0x74) = iVar2;
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x71);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_1 + 0x70);
    }
    else if (iVar2 == 1) {
      *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x6e);
    }
  default:
    uVar4 = 8;
    goto LAB_009e5320;
  case 8:
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    *(undefined1 *)(param_1 + 0x88) = 1;
    return;
  }
  uVar4 = 3;
LAB_009e5320:
  *(undefined4 *)(param_1 + 0x84) = uVar4;
  return;
}


