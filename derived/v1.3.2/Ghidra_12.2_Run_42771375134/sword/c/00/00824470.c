/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00824470; name: FUN_00824470
 */


void FUN_00824470(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  code *pcVar11;
  int iVar12;
  ulong uVar13;
  byte local_a8 [16];
  void *local_98;
  void *local_90;
  void *local_88;
  undefined8 uStack_80;
  
  if (param_1 == param_2) {
    FUN_00801270(&local_90,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/reflection_ops.cc"
                 ,0x37);
    uVar4 = FUN_00800f30(&local_90,"CHECK failed: (&from) != (to): ");
    FUN_00800fa0(local_a8,uVar4);
    FUN_00801290(&local_90);
  }
  lVar5 = (**(code **)(*param_1 + 0xb8))(param_1);
  lVar6 = (**(code **)(*param_2 + 0xb8))(param_2);
  if (lVar6 != lVar5) {
    FUN_00801270(&local_90,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/reflection_ops.cc"
                 ,0x3a);
    uVar4 = FUN_00800f30(&local_90,"CHECK failed: (to->GetDescriptor()) == (descriptor): ");
    uVar4 = FUN_00800f30(uVar4,"Tried to merge messages of different types ");
    uVar4 = FUN_00800f30(uVar4,"(merge ");
    uVar4 = FUN_00800f60(uVar4,*(undefined8 *)(lVar5 + 8));
    uVar4 = FUN_00800f30(uVar4,&DAT_01d1b1d2);
    lVar5 = (**(code **)(*param_2 + 0xb8))(param_2);
    uVar4 = FUN_00800f60(uVar4,*(undefined8 *)(lVar5 + 8));
    uVar4 = FUN_00800f30(uVar4,&DAT_01d3dc7d);
    FUN_00800fa0(local_a8,uVar4);
    FUN_00801290(&local_90);
  }
  plVar7 = (long *)(**(code **)(*param_1 + 0xb0))(param_1);
  plVar8 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  (**(code **)(*plVar7 + 0x80))(plVar7,param_1,&local_90);
  puVar1 = PTR_DAT_02716e20;
  if (local_88 != local_90) {
    uVar13 = 0;
    do {
      lVar5 = *(long *)((long)local_90 + uVar13 * 8);
      if (*(int *)(lVar5 + 0x40) == 3) {
        iVar2 = (**(code **)(*plVar7 + 0x30))(plVar7,param_1,lVar5);
        if (0 < iVar2) {
          iVar12 = 0;
          do {
            switch(*(undefined4 *)(puVar1 + (ulong)*(uint *)(lVar5 + 0x3c) * 4)) {
            case 1:
              uVar3 = (**(code **)(*plVar7 + 0x150))(plVar7,param_1,lVar5,iVar12);
              pcVar11 = *(code **)(*plVar8 + 0x208);
              goto LAB_008247b8;
            case 2:
              uVar4 = (**(code **)(*plVar7 + 0x158))(plVar7,param_1,lVar5,iVar12);
              pcVar11 = *(code **)(*plVar8 + 0x210);
              goto LAB_008247fc;
            case 3:
              uVar3 = (**(code **)(*plVar7 + 0x160))(plVar7,param_1,lVar5,iVar12);
              pcVar11 = *(code **)(*plVar8 + 0x218);
              goto LAB_008247b8;
            case 4:
              uVar4 = (**(code **)(*plVar7 + 0x168))(plVar7,param_1,lVar5,iVar12);
              pcVar11 = *(code **)(*plVar8 + 0x220);
              goto LAB_008247fc;
            case 5:
              (**(code **)(*plVar7 + 0x178))(plVar7,param_1,lVar5,iVar12);
              (**(code **)(*plVar8 + 0x230))(plVar8,param_2,lVar5);
              break;
            case 6:
              (**(code **)(*plVar7 + 0x170))(plVar7,param_1,lVar5,iVar12);
              (**(code **)(*plVar8 + 0x228))(plVar8,param_2,lVar5);
              break;
            case 7:
              uVar3 = (**(code **)(*plVar7 + 0x180))(plVar7,param_1,lVar5,iVar12);
              pcVar11 = *(code **)(*plVar8 + 0x238);
              uVar3 = uVar3 & 1;
LAB_008247b8:
              (*pcVar11)(plVar8,param_2,lVar5,uVar3);
              break;
            case 8:
              uVar4 = (**(code **)(*plVar7 + 400))(plVar7,param_1,lVar5,iVar12);
              pcVar11 = *(code **)(*plVar8 + 0x248);
LAB_008247fc:
              (*pcVar11)(plVar8,param_2,lVar5,uVar4);
              break;
            case 9:
              (**(code **)(*plVar7 + 0x188))(local_a8,plVar7,param_1,lVar5,iVar12);
              (**(code **)(*plVar8 + 0x240))(plVar8,param_2,lVar5,local_a8);
              if ((local_a8[0] & 1) != 0) {
                operator_delete(local_98);
              }
            default:
              break;
            case 10:
              plVar9 = (long *)(**(code **)(*plVar8 + 600))(plVar8,param_2,lVar5,0);
              uVar4 = (**(code **)(*plVar7 + 0x1a0))(plVar7,param_1,lVar5,iVar12);
              (**(code **)(*plVar9 + 0x90))(plVar9,uVar4);
            }
            iVar12 = iVar12 + 1;
          } while (iVar2 != iVar12);
        }
        goto switchD_00824924_default;
      }
      switch(*(undefined4 *)(puVar1 + (ulong)*(uint *)(lVar5 + 0x3c) * 4)) {
      case 1:
        uVar3 = (**(code **)(*plVar7 + 0x88))(plVar7,param_1,lVar5);
        pcVar11 = *(code **)(*plVar8 + 0xe8);
        goto LAB_00824a4c;
      case 2:
        uVar4 = (**(code **)(*plVar7 + 0x90))(plVar7,param_1,lVar5);
        pcVar11 = *(code **)(*plVar8 + 0xf0);
        goto LAB_00824a80;
      case 3:
        uVar3 = (**(code **)(*plVar7 + 0x98))(plVar7,param_1,lVar5);
        pcVar11 = *(code **)(*plVar8 + 0xf8);
        goto LAB_00824a4c;
      case 4:
        uVar4 = (**(code **)(*plVar7 + 0xa0))(plVar7,param_1,lVar5);
        pcVar11 = *(code **)(*plVar8 + 0x100);
        goto LAB_00824a80;
      case 5:
        (**(code **)(*plVar7 + 0xb0))(plVar7,param_1,lVar5);
        (**(code **)(*plVar8 + 0x110))(plVar8,param_2,lVar5);
        break;
      case 6:
        (**(code **)(*plVar7 + 0xa8))(plVar7,param_1,lVar5);
        (**(code **)(*plVar8 + 0x108))(plVar8,param_2,lVar5);
        break;
      case 7:
        uVar3 = (**(code **)(*plVar7 + 0xb8))(plVar7,param_1,lVar5);
        pcVar11 = *(code **)(*plVar8 + 0x118);
        uVar3 = uVar3 & 1;
LAB_00824a4c:
        (*pcVar11)(plVar8,param_2,lVar5,uVar3);
        break;
      case 8:
        uVar4 = (**(code **)(*plVar7 + 200))(plVar7,param_1,lVar5);
        pcVar11 = *(code **)(*plVar8 + 0x128);
LAB_00824a80:
        (*pcVar11)(plVar8,param_2,lVar5,uVar4);
        break;
      case 9:
        (**(code **)(*plVar7 + 0xc0))(local_a8,plVar7,param_1,lVar5);
        (**(code **)(*plVar8 + 0x120))(plVar8,param_2,lVar5,local_a8);
        if ((local_a8[0] & 1) != 0) {
          operator_delete(local_98);
        }
        break;
      case 10:
        plVar9 = (long *)(**(code **)(*plVar8 + 0x138))(plVar8,param_2,lVar5,0);
        uVar4 = (**(code **)(*plVar7 + 0xd8))(plVar7,param_1,lVar5,0);
        (**(code **)(*plVar9 + 0x90))(plVar9,uVar4);
      }
switchD_00824924_default:
      uVar13 = uVar13 + 1;
    } while (uVar13 < (ulong)((long)local_88 - (long)local_90 >> 3));
  }
  uVar4 = (**(code **)(*plVar8 + 0x18))(plVar8,param_2);
  uVar10 = (**(code **)(*plVar7 + 0x10))(plVar7,param_1);
  FUN_0080f7b0(uVar4,uVar10);
  if (local_90 != (void *)0x0) {
    local_88 = local_90;
    operator_delete(local_90);
  }
  return;
}


