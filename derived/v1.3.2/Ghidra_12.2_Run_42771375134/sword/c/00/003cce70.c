/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cce70; name: FUN_003cce70
 */


void FUN_003cce70(ushort *param_1,long *param_2,long *param_3,long *param_4,ulong param_5,
                 ulong param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 unaff_x26;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar12;
  ulong uVar11;
  undefined4 local_80;
  undefined4 uStack_7c;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar12 = (undefined4)((ulong)in_stack_ffffffffffffff50 >> 0x20);
  local_68 = 0;
  uStack_60 = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0xffff;
  param_1[3] = 0xffff;
  local_78 = 0;
  uStack_70 = 0;
  uVar10 = param_6 & 0xffffffff;
  uVar9 = param_5 & 0xffffffff;
  uVar8 = (uint)param_5;
  (**(code **)(*param_3 + 0x10))(param_3,&uStack_7c,&local_68);
  (**(code **)(*param_4 + 0x10))(param_4,&local_80,&local_78);
  lVar6 = *param_2;
  uVar11 = CONCAT44(uVar12,*(undefined4 *)(lVar6 + 0x1058));
  (**(code **)(lVar6 + 0x1060))
            (&local_58,uStack_7c,local_68,uStack_60,local_80,local_78,uStack_70,param_1 + 1,
             *(undefined8 *)(lVar6 + 0x1050),uVar11);
  *param_1 = (ushort)local_58;
  uVar4 = (ushort)local_58;
  if (((ushort)local_58 >> 2 & 1) != 0) {
    if (*(long *)(*param_2 + 0x1068) == 0) {
      *param_1 = (ushort)local_58 & 0xfff3;
      uVar2 = FUN_00400880();
      FUN_00400890(uVar2,2,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScNPhaseCore.cpp"
                   ,0x4cd,"Filtering: eCALLBACK set but no filter callback defined.");
      uVar4 = *param_1;
    }
    else {
      if ((param_6 & 1) == 0) {
        return;
      }
      if (uVar8 == 0xffffffff) {
        plVar7 = (long *)param_2[0x13];
        uVar9 = plVar7[2];
        if (uVar9 != 0xffffffff) {
          lVar6 = (uVar9 & 0xffffffff) * 8;
          plVar7[2] = *(long *)(*plVar7 + lVar6);
          *(undefined8 *)(*plVar7 + lVar6) = 2;
          uVar8 = *(uint *)(param_3 + 3);
          goto joined_r0x003cd1bc;
        }
        uVar8 = *(uint *)(plVar7 + 1);
        uVar9 = (ulong)uVar8;
        local_58 = 2;
        if ((*(uint *)((long)plVar7 + 0xc) & 0x7fffffff) <= uVar8) {
          FUN_003d5fd0(plVar7,&local_58);
          uVar8 = *(uint *)(param_3 + 3);
          goto joined_r0x003cd1bc;
        }
        *(undefined8 *)(*plVar7 + uVar9 * 8) = 2;
        *(uint *)(plVar7 + 1) = uVar8 + 1;
        uVar8 = *(uint *)(param_3 + 3) >> 0x1d & 3;
        if (uVar8 == 1) goto LAB_003cd06c;
LAB_003ccf48:
        if (uVar8 != 0) {
          uVar8 = *(uint *)(param_4 + 3);
          goto joined_r0x003cd090;
        }
        uVar10 = FUN_003d9790(*(undefined8 *)(param_3[2] + 0x50));
        uVar2 = FUN_003f8c90(param_3[8]);
        uVar8 = *(uint *)(param_4 + 3) >> 0x1d & 3;
        if (uVar8 == 1) goto LAB_003cd094;
LAB_003cd018:
        if (uVar8 == 0) {
          unaff_x26 = FUN_003d9790(*(undefined8 *)(param_4[2] + 0x50));
          uVar3 = FUN_003f8c90(param_4[8]);
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar8 = *(uint *)(param_3 + 3);
joined_r0x003cd1bc:
        uVar8 = uVar8 >> 0x1d & 3;
        if (uVar8 != 1) goto LAB_003ccf48;
LAB_003cd06c:
        FUN_003ade70(param_3);
        FUN_003aa4d0();
        uVar10 = FUN_003a99f0();
        uVar8 = *(uint *)(param_4 + 3);
joined_r0x003cd090:
        uVar8 = uVar8 >> 0x1d & 3;
        uVar2 = 0;
        if (uVar8 != 1) goto LAB_003cd018;
LAB_003cd094:
        FUN_003ade70(param_4);
        FUN_003aa4d0();
        unaff_x26 = FUN_003a99f0();
        uVar3 = 0;
      }
      uVar11 = local_78;
      (**(code **)**(undefined8 **)(*param_2 + 0x1068))
                (&local_58,*(undefined8 **)(*param_2 + 0x1068),uVar9 & 0xffffffff,uStack_7c,local_68
                 ,uStack_60,uVar10,uVar2,local_80,local_78,uStack_70,unaff_x26,uVar3,param_1 + 1);
      *param_1 = (ushort)local_58;
      uVar8 = (uint)uVar9;
      *(uint *)(param_1 + 2) = uVar8;
      uVar4 = (ushort)local_58;
    }
  }
  uVar5 = uVar4 & 0xfffe;
  if (((uVar4 ^ 0xffff) & 3) != 0) {
    uVar5 = uVar4;
  }
  *param_1 = uVar5;
  if (uVar8 == 0xffffffff) {
    return;
  }
  bVar1 = (uVar5 & 0xc) == 0xc;
  if ((uVar5 & 1) == 0) {
    if (bVar1) {
      return;
    }
  }
  else if (bVar1) {
    (**(code **)(**(long **)(*param_2 + 0x1068) + 8))
              (*(long **)(*param_2 + 0x1068),uVar8,uStack_7c,local_68,uStack_60,local_80,local_78,
               uStack_70,uVar11 & 0xffffffffffffff00);
    uVar5 = *param_1;
    if ((~uVar5 & 0xc) == 0) goto LAB_003cd16c;
  }
  *param_1 = uVar5 & 0xfff3;
LAB_003cd16c:
  plVar7 = (long *)param_2[0x13];
  *(long *)(*plVar7 + (ulong)uVar8 * 8) = plVar7[2];
  plVar7[2] = (ulong)uVar8;
  param_1[2] = 0xffff;
  param_1[3] = 0xffff;
  return;
}


