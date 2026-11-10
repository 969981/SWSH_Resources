/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fd6d0; name: FUN_009fd6d0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_009fd6d0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  byte bVar8;
  byte bVar9;
  undefined8 uVar10;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  long local_68;
  
  iVar2 = FUN_00884820(*param_2);
  if (iVar2 == 0) {
    uVar10 = 1;
  }
  else {
    bVar8 = 0;
    bVar9 = 0;
    uVar10 = 1;
    local_78 = 0;
    local_70 = 0;
    local_88 = 0;
    local_80 = 0;
    do {
      lVar5 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,bVar8);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      uVar6 = FUN_0087d610(lVar5,2);
      if ((uVar6 & 1) == 0) {
        local_68 = lVar5;
        if (lVar5 == 0) {
          uVar3 = FUN_009fde50(param_1,&local_68);
        }
        else {
          plVar7 = (long *)(lVar5 + 0x48);
          (**(code **)(*plVar7 + 0x10))(plVar7);
          uVar3 = FUN_009fde50(param_1,&local_68);
          (**(code **)(*plVar7 + 0x18))(plVar7);
          local_68 = 0;
        }
        if ((uVar3 & 1) == 0) {
          uVar4 = FUN_008783b0(lVar5);
          uVar1 = FUN_008787f0(lVar5);
          if (uVar3 != 0) {
            if ((uVar3 >> 4 & 1) != 0) {
              *(undefined1 *)(param_3 + 6) = 1;
              *(undefined4 *)(param_3 + (local_70 & 0xff) * 4 + 0x48) = uVar4;
              *(undefined1 *)(param_3 + (ulong)bVar8 + 0xae) = 1;
              local_70 = (ulong)((int)local_70 + 1);
            }
            if ((uVar3 >> 2 & 1) != 0) {
              *(undefined1 *)(param_3 + 4) = 1;
              *(undefined4 *)(param_3 + (local_78 & 0xff) * 4 + 0xc) = uVar4;
              *(undefined1 *)(param_3 + (ulong)bVar8 + 0x9c) = 1;
              local_78 = (ulong)((int)local_78 + 1);
            }
            if ((uVar3 >> 0xc & 1) != 0) {
              uVar6 = (ulong)bVar9;
              *(undefined1 *)(param_3 + 10) = 1;
              bVar9 = bVar9 + 1;
              *(undefined4 *)(param_3 + uVar6 * 4 + 0x84) = uVar4;
              *(undefined1 *)(param_3 + (ulong)bVar8 + 0xb4) = 1;
            }
            if ((uVar3 >> 3 & 1) != 0) {
              *(undefined1 *)(param_3 + 5) = 1;
              *(undefined2 *)(param_3 + (local_88 & 0xff) * 2 + 0x24) = uVar1;
              *(undefined1 *)(param_3 + (ulong)bVar8 + 0xa2) = 1;
              local_88 = (ulong)((int)local_88 + 1);
            }
            if ((uVar3 >> 1 & 1) != 0) {
              *(undefined1 *)(param_3 + 3) = 1;
              *(undefined4 *)(param_3 + (local_80 & 0xff) * 4 + 0x30) = uVar4;
              *(undefined1 *)(param_3 + (ulong)bVar8 + 0xa8) = 1;
              local_80 = (ulong)((int)local_80 + 1);
            }
            uVar10 = 0;
            if ((uVar3 >> 0xd & 1) != 0) {
              uVar10 = 0;
              *(undefined1 *)(param_3 + (ulong)bVar8 + 0xba) = 1;
            }
          }
        }
        else {
          uVar10 = 0;
        }
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      bVar8 = bVar8 + 1;
      uVar3 = FUN_00884820(*param_2);
    } while (bVar8 < uVar3);
  }
  return uVar10;
}


