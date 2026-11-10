/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01509bd0; name: FUN_01509bd0
 */


void FUN_01509bd0(long param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  long lVar9;
  long lVar10;
  
  puVar4 = PTR_DAT_02710848;
  lVar9 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  puVar3 = PTR_DAT_02710798;
  lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  uVar5 = FUN_01510f00(lVar10,0x973fe0e132a339e9);
  uVar6 = (uint)*(byte *)(param_1 + 0x56d);
  if ((uVar5 & 1) == 0 && uVar6 == 0x20) {
    uVar6 = 0x1f;
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (param_2 < uVar6) {
    lVar9 = *(long *)(*(long *)puVar4 + 0x90);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    lVar10 = *(long *)(*(long *)puVar3 + 0x1b8);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    uVar5 = FUN_01510f00(lVar10,0x973fe0e132a339e9);
    uVar6 = (uint)*(byte *)(param_1 + 0x56d);
    if ((uVar5 & 1) == 0 && uVar6 == 0x20) {
      uVar6 = 0x1f;
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    if (param_3 < uVar6) {
      puVar8 = (undefined2 *)(param_1 + 0x60 + (ulong)param_2 * 0x22);
      puVar7 = (undefined2 *)(param_1 + 0x60 + (ulong)param_3 * 0x22);
      uVar2 = *puVar8;
      *puVar8 = *puVar7;
      *puVar7 = uVar2;
      uVar2 = puVar8[1];
      puVar8[1] = puVar7[1];
      puVar7[1] = uVar2;
      uVar2 = puVar8[2];
      puVar8[2] = puVar7[2];
      puVar7[2] = uVar2;
      uVar2 = puVar8[3];
      puVar8[3] = puVar7[3];
      puVar7[3] = uVar2;
      uVar2 = puVar8[4];
      puVar8[4] = puVar7[4];
      puVar7[4] = uVar2;
      uVar2 = puVar8[5];
      puVar8[5] = puVar7[5];
      puVar7[5] = uVar2;
      uVar2 = puVar8[6];
      puVar8[6] = puVar7[6];
      puVar7[6] = uVar2;
      uVar2 = puVar8[7];
      puVar8[7] = puVar7[7];
      puVar7[7] = uVar2;
      uVar2 = puVar8[8];
      puVar8[8] = puVar7[8];
      puVar7[8] = uVar2;
      uVar2 = puVar8[9];
      puVar8[9] = puVar7[9];
      puVar7[9] = uVar2;
      uVar2 = puVar8[10];
      puVar8[10] = puVar7[10];
      puVar7[10] = uVar2;
      uVar2 = puVar8[0xb];
      puVar8[0xb] = puVar7[0xb];
      puVar7[0xb] = uVar2;
      uVar2 = puVar8[0xc];
      puVar8[0xc] = puVar7[0xc];
      puVar7[0xc] = uVar2;
      uVar2 = puVar8[0xd];
      puVar8[0xd] = puVar7[0xd];
      puVar7[0xd] = uVar2;
      uVar2 = puVar8[0xe];
      puVar8[0xe] = puVar7[0xe];
      puVar7[0xe] = uVar2;
      uVar2 = puVar8[0xf];
      puVar8[0xf] = puVar7[0xf];
      puVar7[0xf] = uVar2;
      uVar2 = puVar8[0x10];
      lVar9 = param_1 + 0x570;
      puVar8[0x10] = puVar7[0x10];
      puVar7[0x10] = uVar2;
      uVar1 = *(undefined1 *)(lVar9 + (ulong)param_2);
      *(undefined1 *)(lVar9 + (ulong)param_2) = *(undefined1 *)(lVar9 + (ulong)param_3);
      *(undefined1 *)(lVar9 + (ulong)param_3) = uVar1;
      FUN_01509f80(param_1,param_2,param_3);
      return;
    }
  }
  return;
}


