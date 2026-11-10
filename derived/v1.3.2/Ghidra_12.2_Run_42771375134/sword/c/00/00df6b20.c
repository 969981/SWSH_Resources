/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df6b20; name: FUN_00df6b20
 */


void FUN_00df6b20(long param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ushort local_78 [4];
  byte local_70 [32];
  ulong local_48;
  
  iVar3 = *(int *)(param_1 + 0xb0);
  uVar6 = 3;
  if (iVar3 == 1) {
    uVar6 = 4;
  }
  lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x290);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    iVar3 = *(int *)(param_1 + 0xb0);
  }
  uVar11 = 0xcbf29ce484222645;
  iVar3 = FUN_01502fd0(lVar10,iVar3);
  snprintf((char *)local_70,0x20,"tower_tr_%03d",iVar3);
  if (local_70[0] != 0) {
    pbVar8 = (byte *)((ulong)local_70 | 1);
    do {
      uVar11 = (uVar11 ^ local_70[0]) * 0x100000001b3;
      local_70[0] = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (local_70[0] != 0);
  }
  local_48 = uVar11;
  FUN_00f47b30(*(undefined8 *)(param_1 + 0xb8),param_1 + 0x78,&local_48,uVar6,
               *(undefined8 *)(param_1 + 0x58));
  uVar5 = FUN_00f48250(*(undefined8 *)(param_1 + 0xb8),&local_48);
  *(undefined8 *)(param_1 + 0x130) = uVar5;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x50))(*(long **)(param_1 + 0xa0),0);
  uVar4 = FUN_008787f0();
  iVar3 = 0;
  iVar7 = 0;
LAB_00df6c30:
  do {
    if ((0 < iVar7) && ((uVar4 & 0xffff) != 0)) {
      lVar9 = 0;
      do {
        if ((uint)local_78[lVar9] == (uVar4 & 0xffff)) {
          uVar4 = (&DAT_01d4b730)[iVar3];
          iVar3 = iVar3 + 1;
          if ((int)uVar6 <= iVar7) goto LAB_00df6ca8;
          goto LAB_00df6c30;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar7);
    }
    iVar1 = iVar7 + 1;
    local_78[iVar7] = (ushort)uVar4;
    if ((int)uVar6 <= iVar1) {
LAB_00df6ca8:
      uVar11 = 0;
      do {
        uVar5 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x50))
                          (*(long **)(param_1 + 0xa0),uVar11 & 0xffffffff);
        uVar2 = FUN_008787f0();
        if (uVar2 != local_78[uVar11]) {
          FUN_00878810(uVar5);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar6);
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
      return;
    }
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x50))(*(long **)(param_1 + 0xa0),iVar1);
    uVar4 = FUN_008787f0();
    iVar7 = iVar1;
  } while( true );
}


