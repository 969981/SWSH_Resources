/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00791180; name: FUN_00791180
 */


void FUN_00791180(long param_1,long param_2,int param_3,int param_4,int param_5,uint param_6,
                 undefined8 *param_7,undefined8 *param_8)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  float fVar14;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  ulong local_288;
  undefined4 local_280;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined4 local_90;
  ulong local_78;
  
  iVar6 = *(int *)(*(long *)(param_1 + 0x78) + 8);
  if (0 < iVar6) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
    lVar13 = 0;
    puVar12 = (uint *)(lVar11 + (long)param_5 * 4 + 0x7b8);
    do {
      if ((*puVar12 & param_6) != 0) {
        bVar1 = true;
        goto LAB_00791204;
      }
      lVar13 = lVar13 + 1;
      puVar12 = puVar12 + 0x27a;
    } while (lVar13 < iVar6);
    bVar1 = false;
LAB_00791204:
    lVar13 = 0;
    puVar12 = (uint *)(lVar11 + (long)param_5 * 4 + 0x8b8);
    do {
      if ((*puVar12 & param_6) != 0) {
        bVar2 = true;
        goto LAB_0079123c;
      }
      lVar13 = lVar13 + 1;
      puVar12 = puVar12 + 0x27a;
    } while (lVar13 < iVar6);
    if (bVar1) {
      bVar2 = false;
LAB_0079123c:
      local_78 = 0;
      param_4 = param_3 * 3 + param_4;
      FUN_0199c2a0(&local_78);
      puVar4 = PTR_DAT_02715500;
      puVar3 = PTR_DAT_02710910;
      local_78 = (local_78 >> 0x10 & 0xffff) << 0x10;
      fVar14 = *(float *)(*(long *)PTR_DAT_02710910 + 0x85c4);
      if (bVar1) {
        FUN_0199de60(*(long *)(*(long *)(param_2 + 0x60) + 0x58) +
                     (long)*(int *)PTR_DAT_02715500 * 0x170,0x80);
        if (fVar14 == 1.0) {
          local_280 = 0;
          local_290 = 0;
          local_288 = 0;
          local_2a0 = 0;
          uStack_298 = 0;
          FUN_0199c2b0(&local_2a0);
          uVar5 = FUN_006f82b0(*(undefined8 *)(*(long *)puVar3 + 0x168));
          uStack_298 = CONCAT44(uVar5,(undefined4)uStack_298);
          uVar5 = FUN_006f8330(*(undefined8 *)(*(long *)puVar3 + 0x168));
          local_290 = CONCAT44(local_290._4_4_,uVar5);
          FUN_0199c2a0(&local_288);
          local_288 = (local_288 >> 0x10 & 0xffff) << 0x10;
          lVar13 = *(long *)(param_2 + 0x60);
          uVar8 = FUN_006fe990(*(undefined8 *)(param_1 + 0x98));
          uVar9 = (**(code **)(*(long *)*param_7 + 0x30))();
          FUN_0199d3e0(*(long *)(lVar13 + 0x58) + (long)*(int *)puVar4 * 0x170,uVar8,&local_78,0,0,0
                       ,uVar9,&local_2a0);
        }
        else {
          local_280 = 0;
          local_290 = 0;
          local_288 = 0;
          local_2a0 = 0;
          uStack_298 = 0;
          FUN_0199c2b0(&local_2a0);
          uVar5 = FUN_006f82b0(*(undefined8 *)(param_1 + 0x98));
          uStack_298 = CONCAT44(uVar5,(undefined4)uStack_298);
          uVar5 = FUN_006f8330(*(undefined8 *)(param_1 + 0x98));
          local_290 = CONCAT44(local_290._4_4_,uVar5);
          FUN_0199c2a0(&local_288);
          local_288 = (local_288 >> 0x10 & 0xffff) << 0x10;
          local_90 = 0;
          local_a0 = 0;
          local_98 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          iVar6 = FUN_006f82b0(*param_7);
          iVar7 = FUN_006f8330(*param_7);
          FUN_0199c2b0(&local_b0);
          uStack_a8 = CONCAT44((int)(fVar14 * (float)iVar6),(undefined4)uStack_a8);
          local_a0 = CONCAT44(local_a0._4_4_,(int)(fVar14 * (float)iVar7));
          FUN_0199c2a0(&local_98);
          local_98 = (local_98 >> 0x10 & 0xffff) << 0x10;
          lVar13 = *(long *)(param_2 + 0x60);
          uVar8 = FUN_006fe990(*(undefined8 *)(param_1 + 0x98));
          uVar9 = (**(code **)(*(long *)*param_7 + 0x30))();
          FUN_0199d930(*(long *)(lVar13 + 0x58) + (long)*(int *)puVar4 * 0x170,uVar8,&local_2a0,
                       uVar9,&local_b0,0);
        }
        lVar13 = *(long *)(param_1 + 0x78);
        FUN_00784060(&local_2a0,*(undefined8 *)(param_1 + 0x98));
        puVar10 = (undefined8 *)FUN_006fc6f0(&local_2a0);
        if (param_4 < *(int *)(lVar13 + 8)) {
          *(undefined8 *)(*(long *)(lVar13 + 0x10) + (long)param_4 * 0x9e8 + 0x7a8) = *puVar10;
        }
        FUN_00784490(&local_2a0);
      }
      puVar4 = PTR_DAT_02715500;
      if (bVar2) {
        FUN_0199de60(*(long *)(*(long *)(param_2 + 0x60) + 0x58) +
                     (long)*(int *)PTR_DAT_02715500 * 0x170,0x100);
        if (fVar14 == 1.0) {
          local_280 = 0;
          local_290 = 0;
          local_288 = 0;
          local_2a0 = 0;
          uStack_298 = 0;
          FUN_0199c2b0(&local_2a0);
          uVar5 = FUN_006f82b0(*(undefined8 *)(*(long *)puVar3 + 0x168));
          uStack_298 = CONCAT44(uVar5,(undefined4)uStack_298);
          uVar5 = FUN_006f8330(*(undefined8 *)(*(long *)puVar3 + 0x168));
          local_290 = CONCAT44(local_290._4_4_,uVar5);
          FUN_0199c2a0(&local_288);
          local_288 = (local_288 >> 0x10 & 0xffff) << 0x10;
          lVar13 = *(long *)(param_2 + 0x60);
          uVar8 = FUN_006f2950(*(undefined8 *)(param_1 + 0xa0));
          uVar9 = (**(code **)(*(long *)*param_8 + 0x30))();
          FUN_0199d3e0(*(long *)(lVar13 + 0x58) + (long)*(int *)puVar4 * 0x170,uVar8,&local_78,0,0,0
                       ,uVar9,&local_2a0);
        }
        else {
          local_280 = 0;
          local_290 = 0;
          local_288 = 0;
          local_2a0 = 0;
          uStack_298 = 0;
          FUN_0199c2b0(&local_2a0);
          uVar5 = FUN_006f82b0(*(undefined8 *)(param_1 + 0xa0));
          uStack_298 = CONCAT44(uVar5,(undefined4)uStack_298);
          uVar5 = FUN_006f8330(*(undefined8 *)(param_1 + 0xa0));
          local_290 = CONCAT44(local_290._4_4_,uVar5);
          FUN_0199c2a0(&local_288);
          local_288 = (local_288 >> 0x10 & 0xffff) << 0x10;
          local_90 = 0;
          local_a0 = 0;
          local_98 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          iVar6 = FUN_006f82b0(*param_8);
          iVar7 = FUN_006f8330(*param_8);
          FUN_0199c2b0(&local_b0);
          uStack_a8 = CONCAT44((int)(fVar14 * (float)iVar6),(undefined4)uStack_a8);
          local_a0 = CONCAT44(local_a0._4_4_,(int)(fVar14 * (float)iVar7));
          FUN_0199c2a0(&local_98);
          local_98 = (local_98 >> 0x10 & 0xffff) << 0x10;
          lVar13 = *(long *)(param_2 + 0x60);
          uVar8 = FUN_006f2950(*(undefined8 *)(param_1 + 0xa0));
          uVar9 = (**(code **)(*(long *)*param_8 + 0x30))();
          FUN_0199d930(*(long *)(lVar13 + 0x58) + (long)*(int *)puVar4 * 0x170,uVar8,&local_2a0,
                       uVar9,&local_b0,0);
        }
        lVar13 = *(long *)(param_1 + 0x78);
        FUN_006f29a0(&local_2a0,*(undefined8 *)(param_1 + 0xa0));
        puVar10 = (undefined8 *)FUN_006fc6f0(&local_2a0);
        if (param_4 < *(int *)(lVar13 + 8)) {
          *(undefined8 *)(*(long *)(lVar13 + 0x10) + (long)param_4 * 0x9e8 + 0x7b0) = *puVar10;
        }
        FUN_00784490(&local_2a0);
      }
    }
  }
  return;
}


