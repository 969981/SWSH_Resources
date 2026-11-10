/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009dd930; name: FUN_009dd930
 */


void FUN_009dd930(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5)

{
  long lVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  code *pcVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  int iVar16;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  uVar13 = param_5 & 0xffffffff;
  uVar8 = FUN_008f35c0(param_4,0x20000000);
  if ((uVar8 & 1) == 0) {
    uVar8 = FUN_008f89e0(param_4);
    if (((uVar8 & 1) == 0) && (iVar3 = FUN_008f8110(param_4), iVar3 != 2)) goto LAB_009ddf48;
    plVar15 = *(long **)(param_1 + (param_5 & 0xff) * 2 + 0x106);
    FUN_008f8060(&local_68,param_4,param_5 & 0xffffffff,1);
    plVar11 = local_68;
    if (local_68 != (long *)0x0) {
      (**(code **)(local_68[9] + 0x18))();
      local_68 = (long *)0x0;
    }
    uVar9 = FUN_00931920(param_2);
    local_78 = plVar11;
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    FUN_008df560(uVar9,&local_78,uVar13,(long)param_1 + 0xb41);
    if (local_78 != (long *)0x0) {
      (**(code **)(local_78[9] + 0x18))();
      local_78 = (long *)0x0;
    }
    if (*param_1 == 1) {
      FUN_008fb0c0(param_4,1);
      uVar8 = FUN_01623040();
      if (((uVar8 & 1) != 0) && (iVar3 = FUN_00884820(plVar11), iVar3 != 0)) {
        iVar16 = 0;
        do {
          uVar9 = (**(code **)(*plVar11 + 0x50))(plVar11,iVar16);
          FUN_014a9b70(uVar9,2);
          iVar16 = iVar16 + 1;
        } while (iVar3 != iVar16);
      }
    }
    iVar3 = FUN_008f8110(param_4);
    if ((iVar3 == 2) || (*param_1 == 1)) {
      FUN_009de3f0(plVar11,plVar15);
    }
    iVar3 = FUN_00884820(plVar11);
    if (iVar3 != 0) {
      iVar16 = 0;
      do {
        uVar9 = (**(code **)(*plVar11 + 0x50))(plVar11,iVar16);
        uVar10 = (**(code **)(*plVar15 + 0x58))(plVar15,iVar16);
        FUN_009de4c0(uVar9,uVar10);
        iVar16 = iVar16 + 1;
      } while (iVar3 != iVar16);
    }
    FUN_009de320(plVar11,plVar15);
    pcVar12 = *(code **)(*plVar15 + 0x68);
  }
  else {
    lVar1 = (long)param_1 + 0xb41;
    FUN_009de290(param_3,param_4,0);
    plVar15 = *(long **)(param_1 + 0x106);
    FUN_008f8060(&local_68,param_4,0,1);
    plVar11 = local_68;
    if (local_68 != (long *)0x0) {
      (**(code **)(local_68[9] + 0x18))();
      local_68 = (long *)0x0;
    }
    uVar9 = FUN_00931920(param_3);
    local_70 = plVar11;
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    FUN_008df560(uVar9,&local_70,0,lVar1);
    if (local_70 != (long *)0x0) {
      (**(code **)(local_70[9] + 0x18))();
      local_70 = (long *)0x0;
    }
    iVar3 = FUN_00884820(plVar11);
    if (iVar3 != 0) {
      iVar16 = 0;
      do {
        uVar9 = (**(code **)(*plVar11 + 0x50))(plVar11,iVar16);
        uVar10 = (**(code **)(*plVar15 + 0x58))(plVar15,iVar16);
        FUN_009de4c0(uVar9,uVar10);
        iVar16 = iVar16 + 1;
      } while (iVar3 != iVar16);
    }
    FUN_009de320(plVar11,plVar15);
    (**(code **)(*plVar15 + 0x68))(plVar15,plVar11);
    FUN_009de290(param_3,param_4,1);
    plVar15 = *(long **)(param_1 + 0x108);
    FUN_008f8060(&local_68,param_4,1,1);
    plVar11 = local_68;
    if (local_68 != (long *)0x0) {
      (**(code **)(local_68[9] + 0x18))();
      local_68 = (long *)0x0;
    }
    uVar9 = FUN_00931920(param_3);
    local_70 = plVar11;
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    FUN_008df560(uVar9,&local_70,1,lVar1);
    if (local_70 != (long *)0x0) {
      (**(code **)(local_70[9] + 0x18))();
      local_70 = (long *)0x0;
    }
    iVar3 = FUN_00884820(plVar11);
    if (iVar3 != 0) {
      iVar16 = 0;
      do {
        uVar9 = (**(code **)(*plVar11 + 0x50))(plVar11,iVar16);
        uVar10 = (**(code **)(*plVar15 + 0x58))(plVar15,iVar16);
        FUN_009de4c0(uVar9,uVar10);
        iVar16 = iVar16 + 1;
      } while (iVar3 != iVar16);
    }
    FUN_009de320(plVar11,plVar15);
    (**(code **)(*plVar15 + 0x68))(plVar15,plVar11);
    FUN_009de290(param_3,param_4,2);
    plVar15 = *(long **)(param_1 + 0x10a);
    FUN_008f8060(&local_68,param_4,2,1);
    plVar11 = local_68;
    if (local_68 != (long *)0x0) {
      (**(code **)(local_68[9] + 0x18))();
      local_68 = (long *)0x0;
    }
    uVar9 = FUN_00931920(param_3);
    local_70 = plVar11;
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    FUN_008df560(uVar9,&local_70,2,lVar1);
    if (local_70 != (long *)0x0) {
      (**(code **)(local_70[9] + 0x18))();
      local_70 = (long *)0x0;
    }
    iVar3 = FUN_00884820(plVar11);
    if (iVar3 != 0) {
      iVar16 = 0;
      do {
        uVar9 = (**(code **)(*plVar11 + 0x50))(plVar11,iVar16);
        uVar10 = (**(code **)(*plVar15 + 0x58))(plVar15,iVar16);
        FUN_009de4c0(uVar9,uVar10);
        iVar16 = iVar16 + 1;
      } while (iVar3 != iVar16);
    }
    FUN_009de320(plVar11,plVar15);
    (**(code **)(*plVar15 + 0x68))(plVar15,plVar11);
    FUN_009de290(param_3,param_4,3);
    plVar15 = *(long **)(param_1 + 0x10c);
    FUN_008f8060(&local_68,param_4,3,1);
    plVar11 = local_68;
    if (local_68 != (long *)0x0) {
      (**(code **)(local_68[9] + 0x18))();
      local_68 = (long *)0x0;
    }
    uVar9 = FUN_00931920(param_3);
    local_70 = plVar11;
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    FUN_008df560(uVar9,&local_70,3,lVar1);
    if (local_70 != (long *)0x0) {
      (**(code **)(local_70[9] + 0x18))();
      local_70 = (long *)0x0;
    }
    iVar3 = FUN_00884820(plVar11);
    if (iVar3 != 0) {
      iVar16 = 0;
      do {
        uVar9 = (**(code **)(*plVar11 + 0x50))(plVar11,iVar16);
        uVar10 = (**(code **)(*plVar15 + 0x58))(plVar15,iVar16);
        FUN_009de4c0(uVar9,uVar10);
        iVar16 = iVar16 + 1;
      } while (iVar3 != iVar16);
    }
    FUN_009de320(plVar11,plVar15);
    pcVar12 = *(code **)(*plVar15 + 0x68);
  }
  (*pcVar12)(plVar15,plVar11);
LAB_009ddf48:
  if ((*param_1 == 0) || (iVar3 = FUN_008f8110(param_4), iVar3 == 2)) {
    uVar5 = FUN_008f8d30(param_4,uVar13,0);
    plVar15 = *(long **)(param_1 + (ulong)(uVar5 & 0xff) * 2 + 0x106);
    FUN_008f8060(&local_68,param_4,uVar5,1);
    plVar11 = local_68;
    if (local_68 != (long *)0x0) {
      (**(code **)(local_68[9] + 0x18))();
      local_68 = (long *)0x0;
    }
    uVar9 = FUN_00931920(param_2);
    local_80 = plVar11;
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    FUN_008df460(uVar9,&local_80,uVar5,1);
    if (local_80 != (long *)0x0) {
      (**(code **)(local_80[9] + 0x18))();
      local_80 = (long *)0x0;
    }
    iVar3 = FUN_00884820(plVar11);
    if (iVar3 != 0) {
      iVar16 = 0;
      do {
        uVar9 = (**(code **)(*plVar11 + 0x50))(plVar11,iVar16);
        uVar10 = (**(code **)(*plVar15 + 0x58))(plVar15,iVar16);
        FUN_009de4c0(uVar9,uVar10);
        iVar16 = iVar16 + 1;
      } while (iVar3 != iVar16);
    }
    iVar3 = FUN_00884820(plVar11);
    if (iVar3 != 0) {
      iVar16 = 0;
      do {
        uVar9 = (**(code **)(*plVar11 + 0x50))(plVar11,iVar16);
        uVar4 = FUN_008783b0();
        uVar8 = FUN_009a79b0(param_4,uVar4);
        if ((uVar8 & 1) != 0) {
          FUN_00878310(uVar9);
        }
        iVar16 = iVar16 + 1;
      } while (iVar3 != iVar16);
    }
    iVar3 = FUN_008f8110(param_4);
    if (iVar3 == 2) {
      (**(code **)(*plVar15 + 0x50))(plVar15,0);
      uVar4 = FUN_008787f0();
      uVar9 = (**(code **)(*plVar11 + 0x50))(plVar11,0);
      FUN_00878810(uVar9,uVar4);
    }
    (**(code **)(**(long **)(param_1 + (ulong)(uVar5 & 0xff) * 2 + 0x106) + 0x68))
              (*(long **)(param_1 + (ulong)(uVar5 & 0xff) * 2 + 0x106),plVar11);
    iVar3 = *param_1;
    uVar9 = extraout_x1_00;
  }
  else {
    iVar3 = *param_1;
    uVar9 = extraout_x1;
  }
  if (iVar3 == 4) {
    uVar8 = FUN_008f89e0(param_4);
  }
  else {
    FUN_009dd7a0(param_1,uVar9,param_3,param_4,uVar13);
    uVar8 = FUN_008f89e0(param_4);
  }
  if ((uVar8 & 1) != 0) {
    FUN_008f8060(&local_68,param_4,uVar13,0);
    uVar9 = FUN_00931920(param_3);
    uVar9 = FUN_008df3c0(uVar9,(uint)param_5 & 0xff);
    uVar5 = FUN_008f5920(uVar13);
    uVar6 = FUN_00884820(local_68);
    if (uVar6 != 0) {
      uVar8 = 0;
      do {
        uVar14 = 0;
        do {
          uVar10 = FUN_00914330(uVar9,uVar14);
          uVar7 = FUN_008e0a00();
          if ((int)uVar8 + (uVar5 & 0xff) == (uVar7 & 0xff)) {
            uVar2 = FUN_008e2dc0(uVar10);
            *(undefined2 *)((long)param_1 + uVar8 * 8 + 0xb4e) = uVar2;
            uVar2 = FUN_008e4e80(uVar10,0);
            *(undefined2 *)(param_1 + uVar8 * 2 + 0x2d4) = uVar2;
            uVar2 = FUN_008e4e80(uVar10,2);
            *(undefined2 *)((long)param_1 + uVar8 * 8 + 0xb52) = uVar2;
            uVar2 = FUN_008e4e80(uVar10,1);
            *(undefined2 *)(param_1 + uVar8 * 2 + 0x2d5) = uVar2;
            break;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar6);
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar6);
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(local_68[9] + 0x18))();
      local_68 = (long *)0x0;
    }
  }
  uVar8 = FUN_009de7b0(param_4);
  if ((uVar8 & 1) != 0) {
    FUN_009de970((long)param_1 + 0xbb2,param_4,param_2);
  }
  return;
}


