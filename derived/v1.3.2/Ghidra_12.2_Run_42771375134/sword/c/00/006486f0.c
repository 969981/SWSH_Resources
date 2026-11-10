/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006486f0; name: FUN_006486f0
 */


uint FUN_006486f0(long param_1,long *param_2,undefined8 *param_3,float *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long *plVar10;
  float fVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (param_2 == (long *)0x0) {
switchD_00648a64_default:
    uVar4 = 0;
  }
  else {
    if ((*(char *)((long)param_3 + 0x85) != '\0') &&
       (((((float)*(int *)((long)param_3 + 0x8c) < *param_4 ||
          (param_4[1] < (float)*(int *)(param_3 + 0x11))) ||
         ((float)*(int *)((long)param_3 + 0x94) < param_4[2])) ||
        (param_4[3] < (float)*(int *)(param_3 + 0x12))))) {
      uVar4 = 1;
      goto LAB_00648af4;
    }
    plVar10 = *(long **)(param_1 + 0x490);
    (**(code **)(*plVar10 + 0x298))(plVar10,1);
    lVar5 = (**(code **)(*plVar10 + 0x2a8))(plVar10);
    *(undefined4 *)(lVar5 + 0x10) = 1;
    *(undefined1 *)(lVar5 + 0x2d) = *(undefined1 *)((long)param_3 + 0x85);
    *(undefined4 *)(lVar5 + 0x14) = 3;
    *(undefined2 *)(lVar5 + 0x34) = 0;
    *(undefined4 *)(lVar5 + 0x16c) = 5;
    *(undefined1 *)(lVar5 + 0x60) = *(undefined1 *)((long)param_3 + 0x84);
    *(undefined8 *)(lVar5 + 0x6c) = 0x500000001;
    *(undefined8 *)(lVar5 + 100) = 0x600000005;
    *(undefined8 *)(lVar5 + 0x74) = 0x100000006;
    if (*(char *)((long)param_3 + 0x85) != '\0') {
      local_c0 = *(undefined4 *)(param_3 + 0x11);
      uStack_bc = *(undefined4 *)((long)param_3 + 0x8c);
      local_b8 = *(undefined4 *)(param_3 + 0x12);
      local_b4 = *(undefined4 *)((long)param_3 + 0x94);
      (**(code **)(*plVar10 + 0x78))(plVar10,1,&local_c0);
    }
    local_70 = 0x3f00000000;
    local_80 = 0x300000001;
    local_78 = 0x200000001;
    local_68 = 0x200000001;
    (**(code **)(*plVar10 + 0x90))(plVar10,1,&local_80);
    piVar6 = (int *)(**(code **)(*param_2 + 0x98))(param_2);
    plVar7 = param_2;
    if (((*piVar6 == 4) && (*(char *)((long)param_3 + 0x54) == '\0')) &&
       (fVar11 = *(float *)(param_3 + 8), (float)(int)fVar11 == fVar11)) {
      plVar7 = (long *)(**(code **)(*param_2 + 0xd0))
                                 (param_2,*(undefined4 *)(param_3 + 0xb),(int)fVar11);
    }
    (**(code **)(*plVar10 + 0x2e0))(plVar10,1,2,0,plVar7);
    (**(code **)(*plVar10 + 0x2f0))(plVar10,1,2,0,*(undefined8 *)(param_1 + 0xae0));
    puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x240))(plVar10,1,3,0,0xc0);
    lVar5 = (**(code **)(*plVar10 + 0x108))(plVar10);
    uVar13 = *(undefined4 *)(lVar5 + 0x34);
    lVar5 = (**(code **)(*plVar10 + 0x108))(plVar10);
    FUN_005ee0d0(&local_c0,uVar13,*(undefined4 *)(lVar5 + 0x38),0x3f800000,0x40000000);
    puVar8[2] = local_b0;
    puVar8[3] = uStack_a8;
    *puVar8 = CONCAT44(uStack_bc,local_c0);
    puVar8[1] = CONCAT44(local_b4,local_b8);
    puVar8[6] = local_90;
    puVar8[7] = uStack_88;
    puVar8[4] = local_a0;
    puVar8[5] = uStack_98;
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    puVar8[10] = param_3[2];
    puVar8[0xb] = uVar3;
    puVar8[8] = uVar1;
    puVar8[9] = uVar2;
    uVar1 = param_3[4];
    uVar2 = param_3[5];
    uVar3 = param_3[7];
    puVar8[0xe] = param_3[6];
    puVar8[0xf] = uVar3;
    puVar8[0xc] = uVar1;
    puVar8[0xd] = uVar2;
    *(undefined4 *)(puVar8 + 0x10) = *(undefined4 *)((long)param_3 + 0x44);
    *(undefined4 *)((long)puVar8 + 0x84) = *(undefined4 *)(param_3 + 9);
    *(undefined4 *)(puVar8 + 0x11) = *(undefined4 *)((long)param_3 + 0x4c);
    *(undefined4 *)((long)puVar8 + 0x8c) = *(undefined4 *)(param_3 + 10);
    *(undefined4 *)(puVar8 + 0x12) = *(undefined4 *)(param_3 + 8);
    *(undefined8 *)((long)puVar8 + 0x94) = 0;
    *(undefined4 *)((long)puVar8 + 0x9c) = 0;
    iVar12 = *(int *)((long)param_3 + 100);
    *(undefined8 *)((long)puVar8 + 0xa4) = 0;
    *(undefined4 *)((long)puVar8 + 0xac) = 0;
    *(float *)(puVar8 + 0x14) = (float)iVar12;
    uVar13 = 0;
    if (*(char *)(param_3 + 0xe) != '\0') {
      uVar13 = 0x3f800000;
    }
    *(undefined4 *)(puVar8 + 0x16) = uVar13;
    *(undefined4 *)((long)puVar8 + 0xb4) = *(undefined4 *)((long)param_3 + 0x74);
    *(undefined4 *)(puVar8 + 0x17) = *(undefined4 *)(param_3 + 0xf);
    *(undefined4 *)((long)puVar8 + 0xbc) = 0;
    (**(code **)(*plVar10 + 0x248))(plVar10);
    puVar9 = (undefined4 *)(**(code **)(*param_2 + 0x98))(param_2);
    switch(*puVar9) {
    case 2:
      uVar4 = FUN_00648b20(param_1,param_2,param_3,param_4,param_5);
      break;
    case 3:
      uVar4 = FUN_0064bc10(param_1,param_2,param_3,param_4,param_5);
      break;
    case 4:
      uVar4 = FUN_00649020(param_1,param_2,param_3,param_4,param_5);
      break;
    case 5:
      uVar4 = FUN_0064c120(param_1,param_2,param_3,param_4,param_5);
      break;
    default:
      goto switchD_00648a64_default;
    }
    (**(code **)(*plVar10 + 0x298))(plVar10,0);
  }
LAB_00648af4:
  return uVar4 & 1;
}


