/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f488d0; name: FUN_00f488d0
 */


void FUN_00f488d0(long *param_1,long param_2,uint param_3,long *param_4)

{
  uint *puVar1;
  long lVar2;
  undefined4 uVar3;
  uint *puVar4;
  ushort *puVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined2 local_5c;
  undefined8 local_5a;
  undefined4 local_52;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_46;
  
  puVar4 = *(uint **)(*(long *)(param_2 + 0x68) + 400);
  piVar11 = (int *)((long)puVar4 + (ulong)*puVar4);
  puVar4 = (uint *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (4 - (long)*piVar11)));
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  uVar7 = (ulong)*puVar4;
  if (uVar7 != 0) {
    lVar8 = 0;
    do {
      uVar9 = (ulong)*(uint *)((long)puVar4 + lVar8 + 4);
      lVar2 = lVar8 + (uVar9 - (long)*(int *)((long)puVar4 + lVar8 + uVar9 + 4));
      if ((*(ushort *)((long)puVar4 + lVar2 + 4) < 0x1b) ||
         (uVar10 = (ulong)*(ushort *)((long)puVar4 + lVar2 + 0x1e), uVar10 == 0)) {
        if ((param_3 & 0xffff) == 0) goto LAB_00f48998;
      }
      else if (*(uint *)((long)puVar4 + lVar8 + uVar9 + uVar10 + 4) == (param_3 & 0xffff)) {
LAB_00f48998:
        puVar1 = (uint *)((long)puVar4 + lVar8 + 4);
        if (puVar1 != puVar4 + uVar7 + 1) {
          piVar11 = (int *)((long)puVar1 + (ulong)*puVar1);
          goto LAB_00f489c8;
        }
        break;
      }
      lVar8 = lVar8 + 4;
    } while (uVar7 * 4 != lVar8);
  }
  piVar11 = (int *)0x0;
LAB_00f489c8:
  local_80 = 0xffffffffffffffff;
  uStack_78 = 0x3ffffffff;
  local_68 = 899;
  local_64 = 0xffff00ff00010000;
  local_5c = 0x1ff;
  local_4c = 0xffff;
  local_46 = 0x1000100;
  local_90 = 0;
  local_88 = 0;
  local_70 = 0xffffffffffffffff;
  local_48 = 0;
  local_52 = 0xffffffff;
  local_5a = 0xffffffffffffffff;
  FUN_00f48d70(param_2,piVar11,&local_90);
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_4;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar2 = (**(code **)(*param_4 + 0x10))(param_4,0xb8,8);
  if (lVar2 == 0) {
    (**(code **)(*param_4 + 0xb8))(param_4);
  }
  FUN_008662a0(lVar2,param_4,&local_90);
  *(long **)(lVar2 + 8) = param_4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0xb8;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 0x17) ||
     (uVar7 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0xb], uVar7 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)((long)piVar11 + uVar7);
  }
  FUN_00878810(lVar2,uVar3);
  puVar5 = (ushort *)((long)piVar11 - (long)*piVar11);
  uVar6 = *puVar5;
  if (0xc < uVar6) {
    if (((ulong)puVar5[6] != 0) && (*(char *)((long)piVar11 + (ulong)puVar5[6]) != '\0')) {
      FUN_0087a8a0(lVar2,0,0xfc);
      puVar5 = (ushort *)((long)piVar11 - (long)*piVar11);
    }
    uVar6 = *puVar5;
  }
  if (((6 < uVar6) && ((ulong)puVar5[3] != 0)) &&
     (*(char *)((long)piVar11 + (ulong)puVar5[3]) != '\0')) {
    FUN_0087a8a0(lVar2,1,0xfc);
    puVar5 = (ushort *)((long)piVar11 - (long)*piVar11);
  }
  if (8 < *puVar5) {
    if (((ulong)puVar5[4] != 0) && (*(char *)((long)piVar11 + (ulong)puVar5[4]) != '\0')) {
      FUN_0087a8a0(lVar2,2,0xfc);
      puVar5 = (ushort *)((long)piVar11 - (long)*piVar11);
    }
    if (0xe < *puVar5) {
      if (((ulong)puVar5[7] != 0) && (*(char *)((long)piVar11 + (ulong)puVar5[7]) != '\0')) {
        FUN_0087a8a0(lVar2,3,0xfc);
        puVar5 = (ushort *)((long)piVar11 - (long)*piVar11);
      }
      uVar6 = *puVar5;
      if (uVar6 < 0x11) goto LAB_00f48c10;
      if (((ulong)puVar5[8] != 0) && (*(char *)((long)piVar11 + (ulong)puVar5[8]) != '\0')) {
        FUN_0087a8a0(lVar2,4,0xfc);
        puVar5 = (ushort *)((long)piVar11 - (long)*piVar11);
      }
    }
  }
  uVar6 = *puVar5;
LAB_00f48c10:
  if (((4 < uVar6) && ((ulong)puVar5[2] != 0)) &&
     (*(char *)((long)piVar11 + (ulong)puVar5[2]) != '\0')) {
    FUN_0087a8a0(lVar2,5,0xfc);
  }
  FUN_0087bcd0(lVar2,0);
  FUN_0087bcd0(lVar2,1);
  FUN_0087bcd0(lVar2,2);
  FUN_0087bcd0(lVar2,3);
  puVar5 = (ushort *)((long)piVar11 - (long)*piVar11);
  uVar6 = *puVar5;
  if (0x30 < uVar6) {
    if (((ulong)puVar5[0x18] != 0) && (*(int *)((long)piVar11 + (ulong)puVar5[0x18]) != 0)) {
      FUN_0087bd30(lVar2);
      puVar5 = (ushort *)((long)piVar11 - (long)*piVar11);
    }
    uVar6 = *puVar5;
    if (0x32 < uVar6) {
      if (((ulong)puVar5[0x19] != 0) && (*(int *)((long)piVar11 + (ulong)puVar5[0x19]) != 0)) {
        FUN_0087bd30(lVar2);
        puVar5 = (ushort *)((long)piVar11 - (long)*piVar11);
      }
      uVar6 = *puVar5;
      if (0x34 < uVar6) {
        if (((ulong)puVar5[0x1a] != 0) && (*(int *)((long)piVar11 + (ulong)puVar5[0x1a]) != 0)) {
          FUN_0087bd30(lVar2);
          puVar5 = (ushort *)((long)piVar11 - (long)*piVar11);
        }
        uVar6 = *puVar5;
        if (0x36 < uVar6) {
          if (((ulong)puVar5[0x1b] != 0) && (*(int *)((long)piVar11 + (ulong)puVar5[0x1b]) != 0)) {
            FUN_0087bd30(lVar2);
            puVar5 = (ushort *)((long)piVar11 - (long)*piVar11);
          }
          uVar6 = *puVar5;
        }
      }
    }
  }
  if (((0x14 < uVar6) && ((ulong)puVar5[10] != 0)) &&
     (*(int *)((long)piVar11 + (ulong)puVar5[10]) == 2)) {
    FUN_00879870(lVar2);
  }
  return;
}


