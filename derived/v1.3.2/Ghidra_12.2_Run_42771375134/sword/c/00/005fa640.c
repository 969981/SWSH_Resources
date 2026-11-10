/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fa640; name: FUN_005fa640
 */


undefined8 FUN_005fa640(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0xd0))(param_1,1,0,0);
  (**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x50))(plVar2,2);
  (**(code **)(*plVar2 + 0x60))(plVar2,0,2,3,0,0);
  (**(code **)(*plVar2 + 0x70))(plVar2,1,2,1);
  (**(code **)(*plVar2 + 0x78))(plVar2,1,0,1,0,0,1,0xffffffff);
  (**(code **)(*plVar2 + 0x80))(plVar2,1);
  local_90 = 0x100000004;
  local_88 = 0x100000001;
  uStack_80 = 0;
  local_78 = 0x142c80000;
  local_70 = 8;
  local_54 = 0;
  local_5c = 0;
  local_64 = 0;
  local_6c = 0;
  (**(code **)(*plVar2 + 0x90))(plVar2,0,2,0,0,&local_90);
  (**(code **)(*plVar2 + 0x48))(plVar2);
  uVar5 = 0;
  param_1[0x74] = (long)plVar2;
  plVar2 = param_1;
  do {
    if (((uint)uVar5 & 0x7fffffff) == 1) {
      iVar1 = FUN_005ecff0(uVar5 & 0xffffffff,0);
      if (((iVar1 != 0) && (lVar3 = (**(code **)(*param_1 + 0x170))(param_1,iVar1), lVar3 != 0)) &&
         (lVar4 = (**(code **)(*param_1 + 0x138))(param_1,5), lVar4 != 0)) {
        param_1[uVar5 * 7 + 0x75] = lVar3;
        param_1[uVar5 * 7 + 0x9f] = lVar4;
      }
      iVar1 = FUN_005ecff0(uVar5 & 0xffffffff,1);
      if (((iVar1 != 0) && (lVar3 = (**(code **)(*param_1 + 0x170))(param_1,iVar1), lVar3 != 0)) &&
         (lVar4 = (**(code **)(*param_1 + 0x138))(param_1,5), lVar4 != 0)) {
        param_1[uVar5 * 7 + 0x76] = lVar3;
        param_1[uVar5 * 7 + 0xa0] = lVar4;
      }
      iVar1 = FUN_005ecff0(uVar5 & 0xffffffff,2);
      if (((iVar1 != 0) && (lVar3 = (**(code **)(*param_1 + 0x170))(param_1,iVar1), lVar3 != 0)) &&
         (lVar4 = (**(code **)(*param_1 + 0x138))(param_1,5), lVar4 != 0)) {
        param_1[uVar5 * 7 + 0x77] = lVar3;
        param_1[uVar5 * 7 + 0xa1] = lVar4;
      }
      iVar1 = FUN_005ecff0(uVar5 & 0xffffffff,3);
      if (((iVar1 != 0) && (lVar3 = (**(code **)(*param_1 + 0x170))(param_1,iVar1), lVar3 != 0)) &&
         (lVar4 = (**(code **)(*param_1 + 0x138))(param_1,5), lVar4 != 0)) {
        param_1[uVar5 * 7 + 0x78] = lVar3;
        param_1[uVar5 * 7 + 0xa2] = lVar4;
      }
      iVar1 = FUN_005ecff0(uVar5 & 0xffffffff,4);
      if (((iVar1 != 0) && (lVar3 = (**(code **)(*param_1 + 0x170))(param_1,iVar1), lVar3 != 0)) &&
         (lVar4 = (**(code **)(*param_1 + 0x138))(param_1,5), lVar4 != 0)) {
        param_1[uVar5 * 7 + 0x79] = lVar3;
        param_1[uVar5 * 7 + 0xa3] = lVar4;
      }
      iVar1 = FUN_005ecff0(uVar5 & 0xffffffff,5);
      if (((iVar1 != 0) && (lVar3 = (**(code **)(*param_1 + 0x170))(param_1,iVar1), lVar3 != 0)) &&
         (lVar4 = (**(code **)(*param_1 + 0x138))(param_1,5), lVar4 != 0)) {
        param_1[uVar5 * 7 + 0x7a] = lVar3;
        param_1[uVar5 * 7 + 0xa4] = lVar4;
      }
      iVar1 = FUN_005ecff0(uVar5 & 0xffffffff,6);
      if (((iVar1 != 0) && (lVar3 = (**(code **)(*param_1 + 0x170))(param_1,iVar1), lVar3 != 0)) &&
         (lVar4 = (**(code **)(*param_1 + 0x138))(param_1,5), lVar4 != 0)) {
        param_1[uVar5 * 7 + 0x7b] = lVar3;
        param_1[uVar5 * 7 + 0xa5] = lVar4;
      }
    }
    else {
      uVar6 = 0;
      do {
        iVar1 = FUN_005ecff0(uVar5 & 0xffffffff,uVar6 & 0xffffffff);
        if ((iVar1 != 0) && (lVar3 = (**(code **)(*param_1 + 0x170))(param_1,iVar1), lVar3 != 0)) {
          switch((uint)uVar5 & 0x7fffffff) {
          case 2:
            lVar4 = (**(code **)(*param_1 + 0x138))(param_1,5);
            break;
          case 3:
          case 4:
          case 5:
            lVar4 = (**(code **)(*param_1 + 0x138))(param_1,6);
            break;
          default:
            goto switchD_005faa5c_default;
          }
          if (lVar4 != 0) {
            plVar2[uVar6 + 0x75] = lVar3;
            plVar2[uVar6 + 0x9f] = lVar4;
          }
        }
switchD_005faa5c_default:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 7);
    }
    plVar2 = plVar2 + 7;
    uVar5 = uVar5 + 1;
    if (uVar5 == 6) {
      return 1;
    }
  } while( true );
}


