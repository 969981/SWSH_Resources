/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb2560; name: FUN_00eb2560
 */


void FUN_00eb2560(long *param_1,long param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  undefined1 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  float fVar16;
  long local_78;
  undefined8 local_68;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar6 == 0)) {
    lVar7 = 0;
  }
  else {
    puVar8 = (uint *)((long)param_4 + uVar6);
    lVar7 = (long)puVar8 + (ulong)*puVar8;
  }
  FUN_00e43220(param_1,param_2,param_3,lVar7);
  puVar4 = PTR_DAT_027201f0;
  *param_1 = (long)(PTR_DAT_027201f0 + 0x10);
  param_1[9] = (long)(puVar4 + 0x290);
  param_1[10] = (long)(puVar4 + 0x2d0);
  if (*(ushort *)((long)param_4 - (long)*param_4) < 9) {
    lVar7 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4];
    lVar7 = 0;
    if (uVar6 != 0) {
      lVar7 = *(long *)((long)param_4 + uVar6);
    }
  }
  param_1[0xba] = lVar7;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xb) {
    lVar7 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[5];
    lVar7 = 0;
    if (uVar6 != 0) {
      lVar7 = *(long *)((long)param_4 + uVar6);
    }
  }
  param_1[0xbb] = lVar7;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = (long)(PTR_DAT_02710ac8 + 0x10);
  *(undefined4 *)(param_1 + 0xe6) = 0xffffffff;
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  uVar15 = 0;
  if ((6 < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3], uVar6 != 0)) {
    uVar15 = *(undefined4 *)((long)param_4 + uVar6);
  }
  *(undefined4 *)(param_1 + 0xec) = uVar15;
  *(undefined4 *)((long)param_1 + 0x764) = 0x3f800000;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  lVar7 = 0;
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0;
  param_1[0xf0] = 0;
  param_1[0xef] = 0;
  param_1[0xee] = 0;
  param_1[0xed] = 0;
  param_1[0xf5] = param_2;
  param_1[0xf6] = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  param_1[0xf8] = 0x43c80000c2f00000;
  *(undefined4 *)(param_1 + 0x123) = 0;
  param_1[0x11e] = 0;
  *(undefined8 *)((long)param_1 + 0x8f5) = 0;
  *(undefined8 *)((long)param_1 + 0x90d) = 0;
  param_1[0x121] = 0;
  param_1[0x120] = 0;
  *(undefined8 *)((long)param_1 + 0x91c) = 0x780000005a;
  if (0xc < *(ushort *)((long)param_4 - (long)*param_4)) {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[6];
    if (uVar6 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)((long)param_4 + uVar6);
    }
  }
  param_1[0x126] = 0xffffffff;
  param_1[0x128] = 0xffffffff;
  uVar15 = 0;
  param_1[0x12a] = 0xffffffff;
  param_1[300] = 0xffffffff;
  param_1[0x12e] = 0xffffffff;
  param_1[0x130] = 0xffffffff;
  param_1[0x132] = 0xffffffff;
  param_1[0x134] = 0xffffffff;
  param_1[0x136] = 0xffffffff;
  param_1[0x138] = 0xffffffff;
  param_1[0x13a] = 0xffffffff;
  param_1[0x13c] = 0xffffffff;
  param_1[0x13e] = 0xffffffff;
  param_1[0x140] = 0xffffffff;
  param_1[0x142] = 0xffffffff;
  param_1[0x144] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x146) = 0xffffffff;
  param_1[0x125] = lVar7;
  param_1[0x127] = 0;
  param_1[0x129] = 0;
  param_1[299] = 0;
  param_1[0x12d] = 0;
  param_1[0x12f] = 0;
  param_1[0x131] = 0;
  param_1[0x133] = 0;
  param_1[0x135] = 0;
  param_1[0x137] = 0;
  param_1[0x139] = 0;
  param_1[0x13b] = 0;
  param_1[0x13d] = 0;
  param_1[0x13f] = 0;
  param_1[0x141] = 0;
  param_1[0x143] = 0;
  param_1[0x145] = 0;
  *(undefined8 *)((long)param_1 + 0xa34) = 0;
  *(undefined8 *)((long)param_1 + 0xa3c) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0xa44) = 0;
  *(undefined8 *)((long)param_1 + 0xa4c) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0xa54) = 0;
  *(undefined8 *)((long)param_1 + 0xa5c) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0xa64) = 0;
  *(undefined8 *)((long)param_1 + 0xa6c) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0xa74) = 0;
  *(undefined8 *)((long)param_1 + 0xa7c) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0xa84) = 0;
  *(undefined8 *)((long)param_1 + 0xa8c) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0xa94) = 0;
  *(undefined8 *)((long)param_1 + 0xa9c) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0xaa4) = 0;
  *(undefined8 *)((long)param_1 + 0xaac) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0xab4) = 0;
  param_1[0x157] = 0;
  *(undefined4 *)(param_1 + 0x158) = 0x3f800000;
  if (0x10 < *(ushort *)((long)param_4 - (long)*param_4)) {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[8];
    if (uVar6 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined4 *)((long)param_4 + uVar6);
    }
  }
  *(undefined4 *)((long)param_1 + 0xac4) = uVar15;
  *(undefined1 *)(param_1 + 0x169) = 0;
  *(undefined8 *)((long)param_1 + 0xb4c) = 0;
  *(undefined4 *)((long)param_1 + 0xb54) = 0;
  lVar7 = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  param_1[0x173] = 0;
  param_1[0x172] = 0;
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)PTR_DAT_027201f8;
  *(undefined8 *)((long)param_1 + 0xba4) = 0x1e;
  if (0x12 < *(ushort *)((long)param_4 - (long)*param_4)) {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[9];
    if (uVar6 == 0) {
      lVar7 = 0;
    }
    else {
      puVar8 = (uint *)((long)param_4 + uVar6);
      lVar7 = (long)puVar8 + (ulong)*puVar8;
    }
  }
  FUN_00e6e2a0(param_1 + 0x176,lVar7);
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x15) {
    uVar10 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[10];
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = (undefined1)*(undefined4 *)((long)param_4 + uVar6);
    }
  }
  *(undefined1 *)(param_1 + 0x17b) = uVar10;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x17) {
    uVar10 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xb];
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = (undefined1)*(undefined4 *)((long)param_4 + uVar6);
    }
  }
  *(undefined1 *)((long)param_1 + 0xbd9) = uVar10;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x19) {
    uVar10 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xc];
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = (undefined1)*(undefined4 *)((long)param_4 + uVar6);
    }
  }
  *(undefined1 *)((long)param_1 + 0xbda) = uVar10;
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 0x1b) ||
     (uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xd], uVar6 == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = (undefined1)*(undefined4 *)((long)param_4 + uVar6);
  }
  *(undefined1 *)((long)param_1 + 0xbdb) = uVar10;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x1d) {
    uVar10 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xe];
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = (undefined1)*(undefined4 *)((long)param_4 + uVar6);
    }
  }
  *(undefined1 *)((long)param_1 + 0xbdc) = uVar10;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  param_1[0xeb] = param_1[0x15];
  param_1[0xea] = param_1[0x14];
  param_1[0xe5] = param_1[0x15];
  param_1[0xe4] = param_1[0x14];
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xf) {
    puVar8 = (uint *)0x0;
    uVar1 = uRam0000000000000000;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[7];
    puVar8 = (uint *)0x0;
    if (uVar6 != 0) {
      puVar8 = (uint *)((long)param_4 + uVar6);
      puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
    }
    uVar1 = *puVar8;
  }
  if (uVar1 != 0) {
    uVar13 = (ulong)uVar1;
    lVar7 = 0;
    uVar6 = 0;
    lVar5 = 0x930;
    do {
      if (0x18 < uVar6) goto LAB_00eb2e24;
      uVar11 = (ulong)*(uint *)((long)puVar8 + lVar7 + 4);
      lVar9 = lVar7 + uVar11;
      lVar3 = lVar7 + (uVar11 - (long)*(int *)((long)puVar8 + lVar9 + 4));
      if (*(ushort *)((long)puVar8 + lVar3 + 4) < 5) {
        uVar15 = 0;
      }
      else {
        uVar12 = (ulong)*(ushort *)((long)puVar8 + lVar3 + 8);
        uVar15 = 0;
        if (uVar12 != 0) {
          uVar15 = *(undefined4 *)((long)puVar8 + lVar7 + uVar11 + uVar12 + 4);
        }
      }
      *(undefined4 *)((long)param_1 + lVar5) = uVar15;
      lVar3 = lVar7 + (uVar11 - (long)*(int *)((long)puVar8 + lVar9 + 4));
      uVar2 = *(ushort *)((long)puVar8 + lVar3 + 4);
      uVar15 = 0;
      if (0xc < uVar2) {
        uVar12 = (ulong)*(ushort *)((long)puVar8 + lVar3 + 0x10);
        uVar15 = 0;
        if ((uVar12 != 0) &&
           (uVar15 = 0, *(char *)((long)puVar8 + lVar7 + uVar11 + uVar12 + 4) != '\0' && 0xe < uVar2
           )) {
          uVar12 = (ulong)*(ushort *)((long)puVar8 + lVar3 + 0x12);
          uVar15 = 0;
          if (uVar12 != 0) {
            uVar15 = *(undefined4 *)((long)puVar8 + lVar7 + uVar11 + uVar12 + 4);
          }
        }
      }
      *(undefined4 *)((long)param_1 + lVar7 * 4 + 0x934) = uVar15;
      lVar3 = lVar7 + (uVar11 - (long)*(int *)((long)puVar8 + lVar9 + 4));
      if ((*(ushort *)((long)puVar8 + lVar3 + 4) < 7) ||
         (uVar12 = (ulong)*(ushort *)((long)puVar8 + lVar3 + 10), uVar12 == 0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined4 *)((long)puVar8 + lVar7 + uVar11 + uVar12 + 4);
      }
      *(undefined4 *)((long)param_1 + lVar5 + 8) = uVar15;
      lVar9 = lVar7 + (uVar11 - (long)*(int *)((long)puVar8 + lVar9 + 4));
      if ((*(ushort *)((long)puVar8 + lVar9 + 4) < 9) ||
         (uVar12 = (ulong)*(ushort *)((long)puVar8 + lVar9 + 0xc), uVar12 == 0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined4 *)((long)puVar8 + lVar7 + uVar11 + uVar12 + 4);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 4;
      *(undefined4 *)((long)param_1 + lVar5 + 0xc) = uVar15;
      puVar4 = PTR_DAT_02710860;
      lVar5 = lVar5 + 0x10;
    } while (uVar6 < uVar13);
    if (uVar1 != 0) {
      uVar6 = 0;
      lVar7 = (long)puVar8 + 0xe;
      do {
        while( true ) {
          uVar11 = (ulong)*(uint *)(lVar7 + -10);
          lVar9 = uVar11 - (long)*(int *)(lVar7 + uVar11 + -10);
          lVar5 = lVar7 + lVar9;
          uVar2 = *(ushort *)(lVar5 + -10);
          if (uVar2 < 5) {
            local_68._0_4_ = 0;
            uVar15 = 0;
          }
          else {
            uVar12 = (ulong)*(ushort *)(lVar5 + -6);
            local_68._0_4_ = 0;
            if (uVar12 != 0) {
              local_68._0_4_ = *(undefined4 *)(lVar7 + uVar11 + uVar12 + -10);
            }
            uVar15 = 0;
            if (10 < uVar2) {
              uVar12 = (ulong)*(ushort *)(lVar7 + lVar9);
              uVar15 = 0;
              if (uVar12 != 0) {
                uVar15 = *(undefined4 *)(lVar7 + uVar11 + uVar12 + -10);
              }
            }
          }
          local_68 = CONCAT44(uVar15,(undefined4)local_68);
          puVar14 = (undefined8 *)param_1[0xf3];
          if (puVar14 == (undefined8 *)param_1[0xf4]) break;
          lVar9 = param_1[0xf5];
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00eb2e24:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar9;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          *puVar14 = local_68;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
          param_1[0xf3] = param_1[0xf3] + 8;
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 4;
          if (uVar13 <= uVar6) goto LAB_00eb2cdc;
        }
        FUN_00eb6d50(param_1 + 0xf2,&local_68);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 4;
      } while (uVar6 < uVar13);
    }
  }
LAB_00eb2cdc:
  *(undefined8 *)((long)param_1 + 0x76c) = 0x41700000;
  *(undefined8 *)((long)param_1 + 0x774) = 0x43c8000042b40000;
  *(undefined8 *)((long)param_1 + 0x77c) = 0x41c80000;
  *(undefined8 *)((long)param_1 + 0x784) = 0x43fa000043160000;
  lVar7 = FUN_015cf9d0(&local_68,param_2);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (param_1[0x121] != 0) {
    (**(code **)(*(long *)(param_1[0x121] + 0x48) + 0x18))();
    param_1[0x121] = 0;
  }
  param_1[0x121] = lVar7;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_78 = lVar7;
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))((long *)(lVar7 + 0x48));
  FUN_01025970(&local_78,param_3);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  fVar16 = (float)FUN_00eb2e40(param_1);
  *(int *)(param_1 + 0x123) = (int)fVar16;
  param_1[0x168] = 0;
  param_1[0x167] = 0;
  param_1[0x166] = 0;
  param_1[0x165] = 0;
  param_1[0x164] = 0;
  param_1[0x163] = 0;
  param_1[0x162] = 0;
  param_1[0x161] = 0;
  param_1[0x160] = 0;
  param_1[0x15f] = 0;
  param_1[0x15e] = 0;
  param_1[0x15d] = 0;
  param_1[0x15c] = 0;
  param_1[0x15b] = 0;
  param_1[0x15a] = 0;
  param_1[0x159] = 0;
  (**(code **)(*param_1 + 0x250))(param_1,1);
  *(uint *)((long)param_1 + 0x38c) = *(uint *)((long)param_1 + 0x38c) | 0x800000;
  return;
}


