/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095f600; name: FUN_0095f600
 */


void FUN_0095f600(undefined8 param_1,undefined2 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long local_a0;
  long local_98;
  ulong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 auStack_78 [8];
  ulong local_70;
  undefined4 local_68;
  
  lVar3 = FUN_0093b2c0(param_3[3],0);
  if (lVar3 != 0) {
    iVar7 = 1;
    do {
      uVar4 = FUN_008e1600(lVar3);
      if ((uVar4 & 1) == 0) {
        uVar8 = *param_3;
        uVar2 = FUN_008e0a00(lVar3);
        uVar2 = FUN_00960520(uVar8,uVar2);
        puVar1 = (undefined4 *)param_3[1];
        uVar8 = param_3[2];
        uVar4 = FUN_008e55a0(lVar3);
        if ((uVar4 & 1) == 0) {
LAB_0095f6a0:
          uVar9 = 0;
        }
        else {
          uVar5 = FUN_009423e0(param_1);
          uVar4 = FUN_009267c0(uVar5,uVar8,lVar3,*puVar1);
          if ((uVar4 & 1) != 0) goto LAB_0095f6a0;
          uVar9 = 1;
        }
        lVar6 = FUN_00942400(param_1);
        FUN_0093af10(lVar6 + 0x10);
        lVar6 = FUN_00942400(param_1);
        FUN_0093afe0(lVar6 + 0x10);
        uStack_84 = FUN_0095f7d0(param_1,param_3[2],lVar3,param_3[1],param_3[3],param_3[4],uVar2,
                                 uVar9);
        local_90 = (ulong *)param_3[1];
        local_a0 = param_3[2];
        uStack_84 = uStack_84 & 0xffff;
        local_80 = 0;
        local_98 = lVar3;
        local_88 = uVar2;
        local_7f = uVar9;
        FUN_00942450(param_1);
        uVar8 = FUN_00925d50();
        FUN_0095feb0(uVar8,&local_70,&local_a0);
        local_70 = param_3[2];
        local_68 = *(undefined4 *)(param_3[1] + 4);
        local_98 = CONCAT71(local_98._1_7_,1);
        local_a0 = lVar3;
        local_90 = &local_70;
        FUN_00942450(param_1);
        uVar8 = FUN_009251d0();
        FUN_0094af90(uVar8,auStack_78,&local_a0);
        uVar4 = FUN_008e0b50(lVar3);
        if ((uVar4 & 1) != 0) {
          local_90 = (ulong *)param_3[1];
          local_a0 = param_3[2];
          local_98 = param_3[4];
          local_70 = local_70 & 0xffffffffffff0000;
          FUN_00942450(param_1);
          uVar8 = FUN_00925ad0();
          FUN_009600b0(uVar8,&local_70,&local_a0);
          *param_2 = (undefined2)local_70;
        }
      }
      lVar3 = FUN_0093b2c0(param_3[3],iVar7);
      iVar7 = iVar7 + 1;
    } while (lVar3 != 0);
  }
  return;
}


