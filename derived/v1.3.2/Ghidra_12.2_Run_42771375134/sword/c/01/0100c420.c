/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100c420; name: FUN_0100c420
 */


void FUN_0100c420(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long local_900 [272];
  long local_80;
  long local_78;
  long local_70 [2];
  
  lVar7 = *(long *)PTR_DAT_02710798;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar6 + 0x58);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  local_70[0] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN_014ae2e0(local_70);
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  iVar1 = 0;
  do {
    FUN_0100ce70(param_1,iVar1,0);
    FUN_0100ce70(param_1,iVar1,1);
    FUN_0100ce70(param_1,iVar1,2);
    FUN_0100ce70(param_1,iVar1,3);
    FUN_0100ce70(param_1,iVar1,4);
    FUN_0100ce70(param_1,iVar1,5);
    FUN_0100ce70(param_1,iVar1,6);
    FUN_0100ce70(param_1,iVar1,7);
    FUN_0100ce70(param_1,iVar1,8);
    FUN_0100ce70(param_1,iVar1,9);
    FUN_0100ce70(param_1,iVar1,10);
    FUN_0100ce70(param_1,iVar1,0xb);
    FUN_0100ce70(param_1,iVar1,0xc);
    FUN_0100ce70(param_1,iVar1,0xd);
    FUN_0100ce70(param_1,iVar1,0xe);
    FUN_0100ce70(param_1,iVar1,0xf);
    FUN_0100ce70(param_1,iVar1,0x10);
    FUN_0100ce70(param_1,iVar1,0x11);
    FUN_0100ce70(param_1,iVar1,0x12);
    FUN_0100ce70(param_1,iVar1,0x13);
    FUN_0100ce70(param_1,iVar1,0x14);
    FUN_0100ce70(param_1,iVar1,0x15);
    FUN_0100ce70(param_1,iVar1,0x16);
    FUN_0100ce70(param_1,iVar1,0x17);
    FUN_0100ce70(param_1,iVar1,0x18);
    FUN_0100ce70(param_1,iVar1,0x19);
    FUN_0100ce70(param_1,iVar1,0x1a);
    FUN_0100ce70(param_1,iVar1,0x1b);
    FUN_0100ce70(param_1,iVar1,0x1c);
    FUN_0100ce70(param_1,iVar1,0x1d);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x20);
  lVar6 = *(long *)(lVar7 + 0x268);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  iVar1 = 0;
  do {
    pbVar3 = (byte *)FUN_0152d910(lVar6,iVar1);
    if (*pbVar3 != 0) {
      uVar8 = 0;
      do {
        FUN_0152da80(local_900,lVar6,iVar1,uVar8,param_1);
        uVar4 = FUN_014ae0c0(local_900[0]);
        if ((uVar4 & 1) != 0) {
          local_78 = local_900[0];
          if (local_900[0] != 0) {
            (**(code **)(*(long *)(local_900[0] + 0x48) + 0x10))();
          }
          FUN_0152db90(lVar6,iVar1,uVar8,&local_78);
          if (local_78 != 0) {
            (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
            local_78 = 0;
          }
        }
        if (local_900[0] != 0) {
          (**(code **)(*(long *)(local_900[0] + 0x48) + 0x18))();
          local_900[0] = 0;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *pbVar3);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x20);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  lVar6 = *(long *)(lVar7 + 0x270);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  iVar1 = FUN_01501130(lVar6,0);
  if (iVar1 != 0) {
    uVar8 = 0;
    do {
      FUN_01501160(local_900,lVar6,param_1,0,uVar8);
      uVar4 = FUN_014ae0c0(local_900[0]);
      if ((uVar4 & 1) != 0) {
        local_80 = local_900[0];
        if (local_900[0] != 0) {
          (**(code **)(*(long *)(local_900[0] + 0x48) + 0x10))();
        }
        FUN_01501290(lVar6,0,uVar8,&local_80);
        if (local_80 != 0) {
          (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
          local_80 = 0;
        }
      }
      if (local_900[0] != 0) {
        (**(code **)(*(long *)(local_900[0] + 0x48) + 0x18))();
        local_900[0] = 0;
      }
      uVar8 = uVar8 + 1;
      uVar2 = FUN_01501130(lVar6,0);
    } while (uVar8 < uVar2);
  }
  iVar1 = FUN_01501130(lVar6,1);
  if (iVar1 != 0) {
    uVar8 = 0;
    do {
      FUN_01501160(local_900,lVar6,param_1,1,uVar8);
      uVar4 = FUN_014ae0c0(local_900[0]);
      if ((uVar4 & 1) != 0) {
        local_80 = local_900[0];
        if (local_900[0] != 0) {
          (**(code **)(*(long *)(local_900[0] + 0x48) + 0x10))();
        }
        FUN_01501290(lVar6,1,uVar8,&local_80);
        if (local_80 != 0) {
          (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
          local_80 = 0;
        }
      }
      if (local_900[0] != 0) {
        (**(code **)(*(long *)(local_900[0] + 0x48) + 0x18))();
        local_900[0] = 0;
      }
      uVar8 = uVar8 + 1;
      uVar2 = FUN_01501130(lVar6,1);
    } while (uVar8 < uVar2);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
                    /* WARNING: Subroutine does not return */
  memset(local_900,0,0x87f);
}


