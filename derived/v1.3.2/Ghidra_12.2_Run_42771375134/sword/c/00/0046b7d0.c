/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046b7d0; name: FUN_0046b7d0
 */


undefined8 FUN_0046b7d0(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 uVar10;
  char cVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined4 local_87;
  undefined2 local_83;
  undefined1 local_81;
  char local_80;
  undefined4 local_7f;
  undefined2 local_7b;
  undefined1 local_79;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  local_68 = *(undefined4 *)PTR_DAT_02713158;
  pbVar7 = *(byte **)(param_1 + 0x20);
  pbVar8 = pbVar7;
  if (pbVar7 != (byte *)0x0) {
    uVar9 = 0;
    pbVar8 = pbVar7 + ((ulong)(*pbVar7 + 4) & 0x1fc);
    do {
      if (pbVar7[uVar9 + 1] == 0) goto LAB_0046b840;
      uVar9 = uVar9 + 1;
      pbVar8 = pbVar8 + 4;
    } while (uVar9 < *pbVar7);
    pbVar8 = (byte *)0x0;
  }
LAB_0046b840:
  uVar13 = *(undefined1 *)(param_2 + 3);
  pbVar7 = (byte *)&local_68;
  if (pbVar8 != (byte *)0x0) {
    pbVar7 = pbVar8;
  }
  uVar12 = *param_2;
  iVar4 = *(int *)pbVar7;
  uVar14 = *(undefined4 *)(param_2 + 1);
  uVar2 = *(undefined4 *)((long)param_2 + 0xc);
  uVar15 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((long)param_2 + 0x14);
  local_87 = *(undefined4 *)((long)param_2 + 0x19);
  local_81 = *(undefined1 *)((long)param_2 + 0x1f);
  local_83 = *(undefined2 *)((long)param_2 + 0x1d);
  local_7f = *(undefined4 *)((long)param_2 + 0x21);
  local_79 = *(undefined1 *)((long)param_2 + 0x27);
  cVar11 = *(char *)(param_2 + 4);
  local_7b = *(undefined2 *)((long)param_2 + 0x25);
  if (iVar4 < 1) {
    uVar10 = param_2[5];
  }
  else {
    if (cVar11 != -1) {
      uVar14 = 0;
    }
    if (iVar4 == 1) {
      uVar10 = 0;
    }
    else {
      uVar15 = 0;
      uVar10 = 0;
      uVar14 = 0;
      if (iVar4 != 2) {
        uVar12 = 0;
      }
      uVar13 = 0xff;
      cVar11 = -1;
    }
  }
  local_a0 = uVar12;
  local_98 = uVar14;
  uStack_94 = uVar2;
  local_90 = uVar15;
  uStack_8c = uVar3;
  local_88 = uVar13;
  local_80 = cVar11;
  local_78 = uVar10;
  local_70 = local_7f;
  local_6c = local_7b;
  local_6a = local_79;
  local_68 = local_87;
  local_64 = local_83;
  local_62 = local_81;
  lVar5 = FUN_0046b400(param_1,&local_a0);
  uVar6 = 0;
  if (lVar5 != 0) {
    *param_2 = uVar12;
    *(undefined4 *)(param_2 + 1) = uVar14;
    *(undefined4 *)((long)param_2 + 0xc) = uVar2;
    *(undefined4 *)(param_2 + 2) = uVar15;
    *(undefined4 *)((long)param_2 + 0x14) = uVar3;
    *(undefined1 *)(param_2 + 3) = uVar13;
    *(undefined1 *)((long)param_2 + 0x1f) = local_62;
    *(undefined2 *)((long)param_2 + 0x1d) = local_64;
    *(undefined4 *)((long)param_2 + 0x19) = local_68;
    *(char *)(param_2 + 4) = cVar11;
    *(undefined1 *)((long)param_2 + 0x27) = local_6a;
    *(undefined2 *)((long)param_2 + 0x25) = local_6c;
    *(undefined4 *)((long)param_2 + 0x21) = local_70;
    param_2[5] = uVar10;
    uVar6 = 1;
    puVar1 = (undefined4 *)(lVar5 + 0x70);
    if (*(long *)(lVar5 + 0x50) != 0) {
      puVar1 = (undefined4 *)(*(long *)(lVar5 + 0x50) + 0xc);
    }
    *param_3 = *puVar1;
  }
  return uVar6;
}


