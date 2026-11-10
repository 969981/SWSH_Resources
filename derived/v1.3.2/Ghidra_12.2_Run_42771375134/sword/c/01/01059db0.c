/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01059db0; name: FUN_01059db0
 */


void FUN_01059db0(long param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulong local_60;
  undefined4 local_58;
  ulong local_48;
  
  puVar2 = PTR_DAT_02715500;
  iVar1 = *(int *)PTR_DAT_02715500;
  if (*(int *)(param_1 + 0x100) == 0) {
    lVar10 = *(long *)(param_1 + 0x58) + (long)iVar1 * 0x170;
    FUN_0199cb60(lVar10);
    lVar11 = *param_2;
    local_58 = 0;
    local_68 = 0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    FUN_0199c2b0(&local_78);
    uVar6 = FUN_006f82b0(*(undefined8 *)(lVar11 + 0xb0));
    uStack_70 = CONCAT44(uVar6,(undefined4)uStack_70);
    uVar6 = FUN_006f8330(*(undefined8 *)(lVar11 + 0xb0));
    local_68 = CONCAT44(local_68._4_4_,uVar6);
    FUN_0199c2a0(&local_60);
    local_60 = (local_60 >> 0x10 & 0xffff) << 0x10;
    local_48 = 0;
    FUN_0199c2a0(&local_48);
    local_48 = (local_48 >> 0x10 & 0xffff) << 0x10;
    FUN_0199de60(*(long *)(*(long *)(lVar11 + 0x60) + 0x58) + (long)*(int *)puVar2 * 0x170,0x80);
    lVar12 = *(long *)(lVar11 + 0x60);
    uVar7 = FUN_006fe990(*(undefined8 *)(lVar11 + 0xb8));
    uVar8 = FUN_006fe990(*(undefined8 *)(lVar11 + 0xb0));
    FUN_0199d3e0(*(long *)(lVar12 + 0x58) + (long)*(int *)puVar2 * 0x170,uVar7,&local_48,0,0,0,uVar8
                 ,&local_78);
    if (*(int *)(lVar10 + 0x168) != 0) {
      FUN_0199de60(lVar10);
      *(undefined4 *)(lVar10 + 0x168) = 0;
    }
    FUN_0199cbc0(lVar10);
  }
  else {
    pcVar9 = *(code **)(param_1 + 0x88);
    *(int *)(param_1 + 0x104) = iVar1;
    if (pcVar9 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      (*pcVar9)(param_1 + 0xa0);
      iVar1 = *(int *)(param_1 + 0x104);
    }
    puVar3 = PTR_LAB_02723a50;
    puVar2 = PTR_FUN_02723a48;
    *(long *)(param_1 + 0xa0) = *param_2;
    puVar5 = PTR_LAB_02723a60;
    puVar4 = PTR_LAB_02723a58;
    *(undefined **)(param_1 + 0x80) = puVar2;
    *(undefined **)(param_1 + 0x88) = puVar3;
    *(undefined **)(param_1 + 0x90) = puVar4;
    *(undefined **)(param_1 + 0x98) = puVar5;
    lVar10 = *(long *)(param_1 + 0x58) + (long)iVar1 * 0x170;
    FUN_0199cb60(lVar10);
    (**(code **)(param_1 + 0x80))((long *)(param_1 + 0xa0));
    if (*(int *)(lVar10 + 0x168) != 0) {
      FUN_0199de60(lVar10);
      *(undefined4 *)(lVar10 + 0x168) = 0;
    }
    FUN_0199cbc0(lVar10);
    FUN_006f6c30(*(undefined8 *)PTR_DAT_02710460,param_1);
  }
  *(undefined1 *)(param_1 + 0x109) = 1;
  return;
}


