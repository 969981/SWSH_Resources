/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0b9b0; name: FUN_00a0b9b0
 */


void FUN_00a0b9b0(long param_1,long *param_2,ulong param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined2 local_68;
  
  param_3 = param_3 & 0xffffffff;
  lVar5 = FUN_00a0c7f0();
  uVar2 = FUN_00a0c800();
  lVar10 = *(long *)(param_1 + 0x58);
  local_90 = 0;
  local_88 = 0xff;
  local_68 = 5;
  lVar8 = lVar10 + param_3 * 0xc0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  *(long *)(lVar8 + 0x88) = 0;
  *(undefined4 *)(lVar8 + 0xb8) = 6;
  *(undefined8 *)(lVar8 + 0xa8) = 0x600000006;
  *(undefined8 *)(lVar8 + 0xb0) = 0x600000006;
  *(undefined8 *)(lVar8 + 0xa0) = 0x600000006;
  *(undefined1 *)(lVar8 + 0xbc) = 0;
  pbVar11 = (byte *)(param_1 + param_3 + 0x78);
  *pbVar11 = 0;
  uVar6 = FUN_00a0bc30(&local_90,param_2,param_3);
  puVar1 = (undefined1 *)(*(long *)(param_1 + 0x58) + param_3 * 0xc0 + 0xbc);
  if ((uVar6 & 1) == 0) {
    *puVar1 = 0;
  }
  else {
    *puVar1 = 1;
    if (uVar2 != 0) {
      uVar6 = (ulong)uVar2;
      do {
        local_b8 = 0;
        uStack_b0 = 0;
        local_98 = 0;
        local_a8 = 0x100000000;
        uStack_a0 = 0;
        uVar7 = FUN_00a0c220(&local_b8,&local_90,lVar5);
        if ((uVar7 & 1) != 0) {
          FUN_00a0bf00(lVar10 + param_3 * 0xc0 + 0x40,&local_b8);
        }
        lVar5 = lVar5 + 0x20;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    lVar5 = (**(code **)(*param_2 + 0x7f8))(param_2,param_3);
    if ((lVar5 != 0) && (uVar6 = FUN_008e1600(), (uVar6 & 1) == 0)) {
      lVar10 = *(long *)(param_1 + 0x58);
      bVar9 = true;
      uVar3 = FUN_008e12a0(lVar5,1);
      lVar10 = lVar10 + param_3 * 0xc0;
      *(undefined4 *)(lVar10 + 0xa0) = uVar3;
      uVar3 = FUN_008e12a0(lVar5,2);
      *(undefined4 *)(lVar10 + 0xa4) = uVar3;
      uVar3 = FUN_008e12a0(lVar5,3);
      *(undefined4 *)(lVar10 + 0xa8) = uVar3;
      uVar3 = FUN_008e12a0(lVar5,4);
      *(undefined4 *)(lVar10 + 0xac) = uVar3;
      uVar3 = FUN_008e12a0(lVar5,5);
      *(undefined4 *)(lVar10 + 0xb0) = uVar3;
      uVar3 = FUN_008e12a0(lVar5,6);
      *(undefined4 *)(lVar10 + 0xb4) = uVar3;
      iVar4 = FUN_008e12a0(lVar5,7);
      *(int *)(lVar10 + 0xb8) = iVar4;
      if (*(int *)(lVar10 + 0xa0) == 6) {
        if ((((*(int *)(lVar10 + 0xa4) == 6) && (*(int *)(lVar10 + 0xa8) == 6)) &&
            (*(int *)(lVar10 + 0xac) == 6)) && (*(int *)(lVar10 + 0xb0) == 6)) {
          bVar9 = iVar4 != 6 || *(int *)(lVar10 + 0xb4) != 6;
        }
        else {
          bVar9 = true;
        }
      }
      lVar8 = *(long *)(lVar8 + 0x88);
      iVar4 = FUN_008e19f0(lVar5);
      *pbVar11 = bVar9 | lVar8 != 0 | iVar4 != 0;
    }
  }
  return;
}


