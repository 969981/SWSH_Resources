/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00709180; name: FUN_00709180
 */


void FUN_00709180(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  undefined4 local_60;
  ulong local_58;
  
  if (*(long *)(param_1 + 0x218) != *(long *)(param_1 + 0x210)) {
    lVar9 = *(long *)(param_1 + 0x1e0);
    lVar1 = *(long *)(param_1 + 0x1e8);
    local_58 = 0;
    FUN_0199c2a0(&local_58);
    puVar3 = PTR_DAT_02715500;
    local_58 = (local_58 >> 0x10 & 0xffff) << 0x10;
    fVar11 = *(float *)(*(long *)PTR_DAT_02710910 + 0x85c4);
    piVar2 = (int *)PTR_DAT_02715500;
    if (lVar9 != 0) {
      FUN_0199de60(*(long *)(*(long *)(param_1 + 0x60) + 0x58) +
                   (long)*(int *)PTR_DAT_02715500 * 0x170,0x80);
      if (*(int *)(*(long *)(param_1 + 0xb0) + 0x90) < 2) {
        if (fVar11 == 1.0 || *(char *)(param_1 + 0x208) == '\0') {
          local_60 = 0;
          local_70 = 0;
          local_68 = 0;
          local_80 = 0;
          uStack_78 = 0;
          FUN_0199c2b0(&local_80);
          uVar4 = FUN_006f82b0(lVar9);
          uStack_78 = CONCAT44(uVar4,(undefined4)uStack_78);
          uVar4 = FUN_006f8330(lVar9);
          local_70 = CONCAT44(local_70._4_4_,uVar4);
          FUN_0199c2a0(&local_68);
          local_68 = (local_68 >> 0x10 & 0xffff) << 0x10;
          lVar10 = *(long *)(param_1 + 0x60);
          uVar7 = FUN_006fe990(lVar9);
          uVar8 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x30))();
          FUN_0199d3e0(*(long *)(lVar10 + 0x58) + (long)*(int *)puVar3 * 0x170,uVar7,&local_58,0,0,0
                       ,uVar8,&local_80);
          piVar2 = (int *)PTR_DAT_02715500;
        }
        else {
          local_60 = 0;
          local_70 = 0;
          local_68 = 0;
          local_80 = 0;
          uStack_78 = 0;
          FUN_0199c2b0(&local_80);
          uVar4 = FUN_006f82b0(lVar9);
          uStack_78 = CONCAT44(uVar4,(undefined4)uStack_78);
          uVar4 = FUN_006f8330(lVar9);
          local_70 = CONCAT44(local_70._4_4_,uVar4);
          FUN_0199c2a0(&local_68);
          local_68 = (local_68 >> 0x10 & 0xffff) << 0x10;
          local_88 = 0;
          local_98 = 0;
          local_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          iVar5 = FUN_006f82b0(*(undefined8 *)(param_1 + 0xb0));
          iVar6 = FUN_006f8330(*(undefined8 *)(param_1 + 0xb0));
          FUN_0199c2b0(&local_a8);
          uStack_a0 = CONCAT44((int)(fVar11 * (float)iVar5),(undefined4)uStack_a0);
          local_98 = CONCAT44(local_98._4_4_,(int)(fVar11 * (float)iVar6));
          FUN_0199c2a0(&local_90);
          local_90 = (local_90 >> 0x10 & 0xffff) << 0x10;
          lVar10 = *(long *)(param_1 + 0x60);
          uVar7 = FUN_006fe990(lVar9);
          uVar8 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x30))();
          FUN_0199d930(*(long *)(lVar10 + 0x58) + (long)*(int *)puVar3 * 0x170,uVar7,&local_80,uVar8
                       ,&local_a8,0);
          piVar2 = (int *)PTR_DAT_02715500;
        }
      }
      else {
        lVar10 = *(long *)(param_1 + 0x60);
        uVar7 = FUN_006fe990(lVar9);
        uVar8 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x38))(*(long **)(param_1 + 0xb0),0,0);
        FUN_006f3880(*(long *)(lVar10 + 0x58) + (long)*(int *)puVar3 * 0x170,uVar7,uVar8);
        piVar2 = (int *)PTR_DAT_02715500;
      }
    }
    PTR_DAT_02715500 = (undefined *)piVar2;
    if (lVar1 != 0) {
      FUN_0199de60(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*piVar2 * 0x170,0x100);
      if (*(int *)(*(long *)(param_1 + 0x130) + 0x90) < 2) {
        if (fVar11 == 1.0 || *(char *)(param_1 + 0x208) == '\0') {
          local_60 = 0;
          local_70 = 0;
          local_68 = 0;
          local_80 = 0;
          uStack_78 = 0;
          FUN_0199c2b0(&local_80);
          uVar4 = FUN_006f82b0(lVar1);
          uStack_78 = CONCAT44(uVar4,(undefined4)uStack_78);
          uVar4 = FUN_006f8330(lVar1);
          local_70 = CONCAT44(local_70._4_4_,uVar4);
          FUN_0199c2a0(&local_68);
          local_68 = (local_68 >> 0x10 & 0xffff) << 0x10;
          lVar9 = *(long *)(param_1 + 0x60);
          uVar7 = FUN_006f2950(lVar1);
          uVar8 = FUN_006f2950(*(undefined8 *)(param_1 + 0x130));
          FUN_0199d3e0(*(long *)(lVar9 + 0x58) + (long)*piVar2 * 0x170,uVar7,&local_58,0,0,0,uVar8,
                       &local_80);
        }
        else {
          local_60 = 0;
          local_70 = 0;
          local_68 = 0;
          local_80 = 0;
          uStack_78 = 0;
          FUN_0199c2b0(&local_80);
          uVar4 = FUN_006f82b0(lVar1);
          uStack_78 = CONCAT44(uVar4,(undefined4)uStack_78);
          uVar4 = FUN_006f8330(lVar1);
          local_70 = CONCAT44(local_70._4_4_,uVar4);
          FUN_0199c2a0(&local_68);
          local_68 = (local_68 >> 0x10 & 0xffff) << 0x10;
          local_88 = 0;
          local_98 = 0;
          local_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          iVar5 = FUN_006f82b0(*(undefined8 *)(param_1 + 0x130));
          iVar6 = FUN_006f8330(*(undefined8 *)(param_1 + 0x130));
          FUN_0199c2b0(&local_a8);
          uStack_a0 = CONCAT44((int)(fVar11 * (float)iVar5),(undefined4)uStack_a0);
          local_98 = CONCAT44(local_98._4_4_,(int)(fVar11 * (float)iVar6));
          FUN_0199c2a0(&local_90);
          local_90 = (local_90 >> 0x10 & 0xffff) << 0x10;
          lVar9 = *(long *)(param_1 + 0x60);
          uVar7 = FUN_006f2950(lVar1);
          uVar8 = FUN_006f2950(*(undefined8 *)(param_1 + 0x130));
          FUN_0199d930(*(long *)(lVar9 + 0x58) + (long)*piVar2 * 0x170,uVar7,&local_80,uVar8,
                       &local_a8,0);
        }
      }
      else {
        lVar9 = *(long *)(param_1 + 0x60);
        uVar7 = FUN_006f2950(lVar1);
        uVar8 = FUN_006f2970(*(undefined8 *)(param_1 + 0x130),0,0);
        FUN_006f38a0(*(long *)(lVar9 + 0x58) + (long)*piVar2 * 0x170,uVar7,uVar8);
      }
    }
  }
  FUN_00708b10(param_1);
  return;
}


