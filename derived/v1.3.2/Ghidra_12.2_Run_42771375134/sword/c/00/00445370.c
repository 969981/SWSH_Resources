/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00445370; name: FUN_00445370
 */


/* WARNING: Removing unreachable block (ram,0x00445428) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00445370(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  int local_74;
  byte local_70;
  int local_6f;
  uint local_64;
  
  lVar1 = param_1 + 8;
  local_64 = 0;
  uVar8 = FUN_0044e640(lVar1,&local_64,4);
  puVar2 = PTR_DAT_02712a90;
  if (((int)uVar8 != 1) || (local_64 == 0)) goto LAB_004454a4;
  uVar13 = *(int *)(param_2 + 0x6c) + local_64;
  puVar9 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar13 << 3);
  if (puVar9 == (undefined8 *)0x0) {
    return 2;
  }
  puVar11 = *(undefined8 **)(param_2 + 0x60);
  if ((puVar11 != (undefined8 *)0x0) && (puVar11 != puVar9)) {
    uVar7 = *(uint *)(param_2 + 0x68);
    if (uVar7 != 0) {
      *puVar9 = *puVar11;
      if (uVar7 != 1) {
        if (uVar7 == 2) {
          lVar12 = 1;
        }
        else {
          lVar4 = 0;
          do {
            lVar12 = lVar4;
            puVar9[lVar12 + 1] = *(undefined8 *)(*(long *)(param_2 + 0x60) + lVar12 * 8 + 8);
            puVar9[lVar12 + 2] = *(undefined8 *)(*(long *)(param_2 + 0x60) + lVar12 * 8 + 0x10);
            lVar4 = lVar12 + 2;
          } while (((ulong)uVar7 - 1) - (ulong)(~uVar7 & 1) != lVar12 + 2);
          lVar12 = lVar12 + 3;
          if ((~uVar7 & 1) == 0) goto LAB_0044548c;
        }
        puVar9[lVar12] = *(undefined8 *)(*(long *)(param_2 + 0x60) + lVar12 * 8);
      }
LAB_0044548c:
      puVar11 = *(undefined8 **)(param_2 + 0x60);
    }
    FUN_00404870(*(undefined4 *)puVar2,puVar11);
  }
  uVar8 = 1;
  *(undefined8 **)(param_2 + 0x60) = puVar9;
  *(uint *)(param_2 + 0x6c) = uVar13;
LAB_004454a4:
  puVar3 = PTR_DAT_02712e18;
  puVar2 = PTR_DAT_02712ae8;
  if (((int)uVar8 == 1) && (local_64 != 0)) {
    uVar13 = 1;
    do {
      uVar8 = FUN_0044e640(lVar1,&local_70,5);
      if ((int)uVar8 != 1) {
LAB_0044578c:
        uVar7 = (uint)uVar8;
        goto joined_r0x004456f8;
      }
      switch(local_70) {
      case 1:
        uVar8 = FUN_00447bd0(param_1,&local_70,param_2);
        uVar7 = (uint)uVar8;
        break;
      case 2:
        uVar8 = FUN_00447460(param_1,&local_70,param_2,param_3);
        iVar6 = (int)uVar8;
        goto joined_r0x00445558;
      case 3:
        uVar8 = FUN_00447160(param_1,&local_70,param_2);
        iVar6 = (int)uVar8;
joined_r0x00445558:
        if (iVar6 != 1) {
          return uVar8;
        }
        goto LAB_00445794;
      case 4:
        uVar8 = FUN_004472e0(param_1,&local_70,param_2);
        uVar7 = (uint)uVar8;
        break;
      case 5:
        uVar10 = FUN_00435370(*(undefined8 *)puVar2,0);
        uVar8 = FUN_00447600(param_1,&local_70,param_2,uVar10);
        uVar7 = (uint)uVar8;
        break;
      case 6:
        uVar10 = FUN_00435370(*(undefined8 *)puVar2,0);
        uVar8 = FUN_00447780(param_1,&local_70,param_2,uVar10);
        uVar7 = (uint)uVar8;
        break;
      case 7:
        uVar10 = FUN_00435370(*(undefined8 *)puVar2,0);
        uVar8 = FUN_00447a60(param_1,&local_70,param_2,uVar10);
        uVar7 = (uint)uVar8;
        break;
      case 8:
        uVar8 = FUN_00447d40(param_1,&local_70,param_2);
        uVar7 = (uint)uVar8;
        break;
      case 9:
        uVar10 = FUN_00435370(*(undefined8 *)puVar2,0);
        uVar8 = FUN_004478f0(param_1,&local_70,param_2,uVar10);
        uVar7 = (uint)uVar8;
        break;
      default:
        if (*(code **)puVar3 == (code *)0x0) {
          uVar7 = 1;
        }
        else {
          uVar8 = (**(code **)puVar3)(&local_70,param_2,param_3);
          if ((int)uVar8 != 3) goto LAB_0044578c;
          uVar7 = 3;
        }
        local_74 = 0;
        FUN_0044df40(lVar1,local_6f,&local_74);
        if (local_74 != local_6f) {
          uVar7 = 7;
        }
        uVar8 = (ulong)uVar7;
        break;
      case 0xe:
        uVar8 = FUN_00448130(param_1,&local_70,param_2,*(long *)puVar2 + 0x150);
        uVar7 = (uint)uVar8;
        break;
      case 0xf:
        uVar8 = FUN_004485a0(param_1,&local_70,param_2,*(long *)puVar2 + 0x1f8);
        uVar7 = (uint)uVar8;
        break;
      case 0x10:
        uVar8 = FUN_00448710(param_1,&local_70,param_2,*(long *)puVar2 + 0x230);
        uVar7 = (uint)uVar8;
        break;
      case 0x11:
        uVar8 = FUN_004489f0(param_1,&local_70,param_2,*(long *)puVar2 + 0x268);
        uVar7 = (uint)uVar8;
        break;
      case 0x12:
        uVar10 = FUN_00435370(*(undefined8 *)puVar2,1);
        uVar8 = FUN_00447fb0(param_1,&local_70,param_2,uVar10);
        uVar7 = (uint)uVar8;
        break;
      case 0x13:
        uVar8 = FUN_004482a0(param_1,&local_70,param_2,*(long *)puVar2 + 0x188);
        uVar7 = (uint)uVar8;
        break;
      case 0x14:
        uVar8 = FUN_00448420(param_1,&local_70,param_2,*(long *)puVar2 + 0x188);
        uVar7 = (uint)uVar8;
        break;
      case 0x15:
        uVar8 = FUN_00448880(param_1,&local_70,param_2,*(long *)puVar2 + 0x2a0);
        goto LAB_0044578c;
      }
joined_r0x004456f8:
      if (uVar7 != 1) {
        return uVar8;
      }
LAB_00445794:
      bVar5 = uVar13 < local_64;
      uVar13 = uVar13 + 1;
    } while (bVar5);
  }
  return uVar8;
}


