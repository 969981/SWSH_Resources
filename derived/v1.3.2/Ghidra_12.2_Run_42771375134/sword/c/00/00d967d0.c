/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d967d0; name: FUN_00d967d0
 */


void FUN_00d967d0(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  if (*(long *)(param_1 + 0x600) == 0) {
    if (*(char *)(param_1 + 0x653) != '\0') {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
    *(undefined4 *)(param_1 + 0x5d0) = param_2;
    if (*(long *)(param_1 + 0x5e0) != 0) {
      lVar5 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8));
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
      }
      *(undefined8 *)(param_1 + 0x5e0) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x5dc);
    if (iVar1 != -1) {
      uVar6 = FUN_00787110(*(undefined8 *)(param_1 + 0x5c8),iVar1);
      if ((uVar6 & 1) != 0) {
        FUN_00787070(*(undefined8 *)(param_1 + 0x5c8),iVar1);
      }
      *(undefined4 *)(param_1 + 0x5dc) = 0xffffffff;
    }
    iVar1 = *(int *)(param_1 + 0x5d0);
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x5f8) = 0xffffffff;
      *(char **)(param_1 + 0x600) = "P_fade_cross_texture_00";
      lVar5 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8));
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x638);
      lVar5 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0x600));
      if (lVar5 != 0) {
        *(char *)(lVar5 + 0x59) = (char)(int)(float)((ulong)uVar8 >> 0x20);
        return;
      }
    }
    else {
      if (iVar1 == 1) {
        uVar3 = *(uint *)(param_1 + 0x5d8);
        if (uVar3 < 0x10) {
          iVar1 = *(int *)(param_1 + (long)(int)uVar3 * 0xc + 0xec);
          bVar4 = iVar1 == -1;
          *(int *)(param_1 + 0x5f8) = iVar1;
          if (bVar4) {
            iVar1 = *(int *)(param_1 + (long)(int)uVar3 * 0xc + 0xe8);
            *(int *)(param_1 + 0x5f8) = iVar1;
          }
          if (-1 < iVar1) {
            *(undefined8 *)(param_1 + 0x600) =
                 *(undefined8 *)
                  (param_1 + (long)*(int *)(param_1 + (long)iVar1 * 0x10 + 0x1b0) * 8 + 0x60);
            lVar5 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8));
            if (lVar5 != 0) {
              *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
            }
            if (bVar4) {
              return;
            }
            uVar2 = *(undefined4 *)(param_1 + 0x5f8);
            uVar6 = FUN_00787110(*(undefined8 *)(param_1 + 0x5c8),uVar2);
            if ((uVar6 & 1) == 0) {
              FUN_00786f10(*(undefined8 *)(param_1 + 0x5c8),uVar2,0);
            }
            FUN_00787170(*(undefined8 *)(param_1 + 0x5c8),uVar2,1);
            FUN_00786fd0(0,*(undefined8 *)(param_1 + 0x5c8),uVar2);
            return;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x5f8) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x5d8) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x5f8) = 0xffffffff;
        }
        *(undefined4 *)(param_1 + 0x5f8) = 0;
        *(undefined8 *)(param_1 + 0x600) =
             *(undefined8 *)(param_1 + (long)*(int *)(param_1 + 0x1b0) * 8 + 0x60);
        lVar5 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8));
      }
      else {
        if (iVar1 != 0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x5f8) = 0xffffffff;
        *(undefined8 *)(param_1 + 0x600) = *(undefined8 *)(param_1 + 0x68);
        local_28 = (undefined1)(int)(float)*(undefined8 *)(param_1 + 0x610);
        local_27 = (undefined1)(int)(float)((ulong)*(undefined8 *)(param_1 + 0x610) >> 0x20);
        local_26 = (undefined1)(int)(float)*(undefined8 *)(param_1 + 0x618);
        local_25 = (undefined1)(int)(float)((ulong)*(undefined8 *)(param_1 + 0x618) >> 0x20);
        plVar7 = (long *)FUN_00786910(*(undefined8 *)(param_1 + 0x5c8));
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x28))(plVar7,0,&local_28);
          (**(code **)(*plVar7 + 0x28))(plVar7,1,&local_28);
          (**(code **)(*plVar7 + 0x28))(plVar7,2,&local_28);
          (**(code **)(*plVar7 + 0x28))(plVar7,3,&local_28);
        }
        lVar5 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0x600));
      }
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
        return;
      }
    }
  }
  return;
}


