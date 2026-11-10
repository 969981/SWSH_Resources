/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00201b50; name: FUN_00201b50
 */


void FUN_00201b50(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  
  lVar5 = param_1[2];
  uVar6 = (int)lVar5 + 0x30;
  uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  if (uVar2 < uVar6 && uVar2 < uVar6 * 3) {
    FUN_00202520(param_1);
  }
  FUN_002024e0(param_1,uVar6);
  memcpy((void *)(*param_1 + (ulong)*(uint *)(param_1 + 2)),param_2,0x2c);
  *(uint *)(param_1 + 2) = uVar6;
  puVar7 = (undefined4 *)*param_2;
  if (puVar7 != (undefined4 *)0x0) {
    uVar6 = (int)lVar5 + 0x3c;
    uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    if ((uVar2 < uVar6) && (uVar2 < uVar6 * 3)) {
      FUN_00202520(param_1);
    }
    FUN_002024e0(param_1,uVar6);
    puVar1 = (undefined4 *)(*param_1 + (ulong)*(uint *)(param_1 + 2));
    *puVar1 = *puVar7;
    puVar1[1] = puVar7[1];
    puVar1[2] = puVar7[2];
    *(uint *)(param_1 + 2) = uVar6;
  }
  puVar7 = (undefined4 *)param_2[1];
  if (puVar7 != (undefined4 *)0x0) {
    uVar6 = uVar6 + 0xc;
    uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    if ((uVar2 < uVar6) && (uVar2 < uVar6 * 3)) {
      FUN_00202520(param_1);
    }
    FUN_002024e0(param_1,uVar6);
    puVar1 = (undefined4 *)(*param_1 + (ulong)*(uint *)(param_1 + 2));
    *puVar1 = *puVar7;
    puVar1[1] = puVar7[1];
    puVar1[2] = puVar7[2];
    *(uint *)(param_1 + 2) = uVar6;
  }
  puVar7 = (undefined4 *)param_2[4];
  if (puVar7 != (undefined4 *)0x0) {
    uVar6 = uVar6 + 0x1c;
    uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    if ((uVar2 < uVar6) && (uVar2 < uVar6 * 3)) {
      FUN_00202520(param_1);
    }
    FUN_002024e0(param_1,uVar6);
    puVar1 = (undefined4 *)(*param_1 + (ulong)*(uint *)(param_1 + 2));
    *puVar1 = *puVar7;
    puVar1[1] = puVar7[1];
    puVar1[2] = puVar7[2];
    puVar1[3] = puVar7[3];
    puVar1[4] = puVar7[4];
    puVar1[5] = puVar7[5];
    puVar1[6] = puVar7[6];
    *(uint *)(param_1 + 2) = uVar6;
  }
  puVar8 = (undefined8 *)param_2[3];
  if (puVar8 != (undefined8 *)0x0) {
    uVar4 = *(undefined4 *)puVar8;
    uVar2 = uVar6 + 4;
    uVar3 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    if ((uVar3 < uVar2) && (uVar3 < uVar2 * 3)) {
      FUN_00202520(param_1);
    }
    FUN_002024e0(param_1,uVar2);
    *(undefined4 *)(*param_1 + (ulong)*(uint *)(param_1 + 2)) = uVar4;
    *(uint *)(param_1 + 2) = uVar2;
    switch(uVar4) {
    case 0:
      uVar6 = uVar6 + 0xc;
      uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((uVar2 < uVar6) && (uVar2 < uVar6 * 3)) {
        FUN_00202520(param_1);
      }
      FUN_002024e0(param_1,uVar6);
      *(undefined8 *)(*param_1 + (ulong)*(uint *)(param_1 + 2)) = *puVar8;
      break;
    default:
      goto switchD_00201d70_caseD_1;
    case 2:
      uVar6 = uVar6 + 0x10;
      uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((uVar2 < uVar6) && (uVar2 < uVar6 * 3)) {
        FUN_00202520(param_1);
      }
      FUN_002024e0(param_1,uVar6);
      lVar5 = *param_1;
      uVar2 = *(uint *)(param_1 + 2);
      *(undefined4 *)((undefined8 *)(lVar5 + (ulong)uVar2) + 1) = *(undefined4 *)(puVar8 + 1);
      *(undefined8 *)(lVar5 + (ulong)uVar2) = *puVar8;
      break;
    case 3:
      uVar6 = uVar6 + 0x14;
      uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((uVar2 < uVar6) && (uVar2 < uVar6 * 3)) {
        FUN_00202520(param_1);
      }
      FUN_002024e0(param_1,uVar6);
      puVar7 = (undefined4 *)(*param_1 + (ulong)*(uint *)(param_1 + 2));
      *puVar7 = *(undefined4 *)puVar8;
      puVar7[1] = *(undefined4 *)((long)puVar8 + 4);
      puVar7[2] = *(undefined4 *)(puVar8 + 1);
      puVar7[3] = *(undefined4 *)((long)puVar8 + 0xc);
      break;
    case 4:
      uVar6 = uVar6 + 0x34;
      uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((uVar2 < uVar6) && (uVar2 < uVar6 * 3)) {
        FUN_00202520(param_1);
      }
      FUN_002024e0(param_1,uVar6);
      puVar7 = (undefined4 *)(*param_1 + (ulong)*(uint *)(param_1 + 2));
      *puVar7 = *(undefined4 *)puVar8;
      puVar7[1] = *(undefined4 *)((long)puVar8 + 4);
      puVar7[2] = *(undefined4 *)(puVar8 + 1);
      puVar7[3] = *(undefined4 *)((long)puVar8 + 0xc);
      puVar7[4] = *(undefined4 *)(puVar8 + 2);
      puVar7[5] = *(undefined4 *)((long)puVar8 + 0x14);
      puVar7[6] = *(undefined4 *)(puVar8 + 3);
      puVar7[7] = *(undefined4 *)((long)puVar8 + 0x1c);
      puVar7[10] = *(undefined4 *)(puVar8 + 5);
      *(undefined8 *)(puVar7 + 8) = puVar8[4];
      *(undefined1 *)(puVar7 + 0xb) = *(undefined1 *)((long)puVar8 + 0x2c);
      *(undefined1 *)((long)puVar7 + 0x2f) = *(undefined1 *)((long)puVar8 + 0x2f);
      *(undefined2 *)((long)puVar7 + 0x2d) = *(undefined2 *)((long)puVar8 + 0x2d);
    }
    *(uint *)(param_1 + 2) = uVar6;
  }
switchD_00201d70_caseD_1:
  return;
}


