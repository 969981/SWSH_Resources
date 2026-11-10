/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00685f20; name: FUN_00685f20
 */


undefined8
FUN_00685f20(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long local_70;
  
  uVar2 = (**(code **)(*param_4 + 0x58))(param_4);
  iVar3 = (**(code **)(*param_4 + 0x78))(param_4);
  iVar4 = (**(code **)(*param_4 + 0x60))(param_4);
  lVar7 = *param_5;
  lVar10 = param_4[0x18];
  lVar6 = param_4[0x11];
  uVar5 = (**(code **)(*param_4 + 0x58))(param_4);
  if ((uVar5 & 1) == 0) {
    lVar8 = (**(code **)(*param_4 + 0x90))(param_4);
    lVar11 = param_4[0x14];
    uVar9 = (undefined4)param_4[0x16];
    local_70 = lVar11;
    if (lVar11 < 1) {
      local_70 = lVar8;
    }
  }
  else {
    uVar9 = 0;
    lVar11 = 0;
    lVar8 = 0;
    local_70 = 0;
  }
  (**(code **)(*param_2 + 0x198))(param_2,lVar7,1);
  (**(code **)(*param_2 + 0x198))(param_2,lVar8,1);
  (**(code **)(*param_2 + 0x198))(param_2,lVar10,1);
  (**(code **)(*param_2 + 0x198))(param_2,(long)iVar3,1);
  (**(code **)(*param_2 + 0x198))(param_2,(long)iVar4,1);
  (**(code **)(*param_2 + 0x198))(param_2,lVar11,1);
  (**(code **)(*param_2 + 400))(param_2,uVar9,1);
  (**(code **)(*param_2 + 0x1b0))(param_2,(int)lVar6,1);
  (**(code **)(*param_2 + 0x1a0))(param_2,uVar2 & 1,1);
  (**(code **)(*param_2 + 0x1a0))(param_2,0,1);
  (**(code **)(*param_2 + 0x1a0))(param_2,0,1);
  (**(code **)(*param_2 + 0x1a0))(param_2,0,1);
  *param_5 = *param_5 + local_70;
  lVar6 = (**(code **)(*param_4 + 0x48))(param_4);
  puVar1 = PTR_DAT_02713e78;
  if (*(undefined **)(lVar6 + 8) != (undefined *)0x0) {
    puVar1 = *(undefined **)(lVar6 + 8);
  }
  (**(code **)(*param_2 + 0x1e0))(param_2,puVar1,1);
  uVar5 = (**(code **)(*param_4 + 0x58))(param_4);
  if ((uVar5 & 1) != 0) {
    iVar3 = (**(code **)(*param_4 + 0x78))(param_4);
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        lVar7 = (**(code **)(*param_4 + 0x80))(param_4,lVar6);
        (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(lVar7 + 0xb8),1);
        lVar6 = lVar6 + 1;
        iVar3 = (**(code **)(*param_4 + 0x78))(param_4);
      } while (lVar6 < iVar3);
    }
    iVar3 = (**(code **)(*param_4 + 0x60))(param_4);
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        lVar7 = (**(code **)(*param_4 + 0x68))(param_4,lVar6);
        (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(lVar7 + 0xb8),1);
        lVar6 = lVar6 + 1;
        iVar3 = (**(code **)(*param_4 + 0x60))(param_4);
      } while (lVar6 < iVar3);
    }
  }
  return 1;
}


