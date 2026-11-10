/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c5940; name: FUN_008c5940
 */


void FUN_008c5940(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  *(byte *)(*(long *)(param_1 + 0x5f8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5f8) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x600) + 0x58) = *(byte *)(*(long *)(param_1 + 0x600) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x608) + 0x58) = *(byte *)(*(long *)(param_1 + 0x608) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x610) + 0x58) = *(byte *)(*(long *)(param_1 + 0x610) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x618) + 0x58) = *(byte *)(*(long *)(param_1 + 0x618) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x620) + 0x58) = *(byte *)(*(long *)(param_1 + 0x620) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x628) + 0x58) = *(byte *)(*(long *)(param_1 + 0x628) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x630) + 0x58) = *(byte *)(*(long *)(param_1 + 0x630) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x638) + 0x58) = *(byte *)(*(long *)(param_1 + 0x638) + 0x58) & 0xfe
  ;
  puVar1 = PTR_DAT_02710798;
  switch(**(undefined4 **)(param_1 + 0x5f0)) {
  case 0:
  case 4:
  case 8:
  case 10:
    *(undefined8 *)(param_1 + 0x648) = 0;
    *(byte *)(*(long *)(param_1 + 0x5f8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5f8) + 0x58) | 1;
    lVar5 = param_1 + 0x6a0;
    puVar8 = (undefined8 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    lVar10 = *(long *)(param_1 + 0x5f8);
    uVar9 = *puVar8;
    *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar10 + 0x30) = uVar9;
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
    lVar10 = param_1 + 0x64c;
    uVar4 = *(int *)(param_1 + 0x648) + 1;
    *(uint *)(param_1 + 0x648) = uVar4;
    *(undefined4 *)(lVar10 + (ulong)uVar4 * 4) = 1;
    *(byte *)(*(long *)(param_1 + 0x600) + 0x58) = *(byte *)(*(long *)(param_1 + 0x600) + 0x58) | 1;
    puVar8 = (undefined8 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    lVar6 = *(long *)(param_1 + 0x600);
    uVar9 = *puVar8;
    *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
    uVar4 = *(int *)(param_1 + 0x648) + 1;
    *(uint *)(param_1 + 0x648) = uVar4;
    *(undefined4 *)(lVar10 + (ulong)uVar4 * 4) = 2;
    *(byte *)(*(long *)(param_1 + 0x608) + 0x58) = *(byte *)(*(long *)(param_1 + 0x608) + 0x58) | 1;
    puVar8 = (undefined8 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    lVar6 = *(long *)(param_1 + 0x608);
    uVar9 = *puVar8;
    *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
    uVar4 = *(int *)(param_1 + 0x648) + 1;
    *(uint *)(param_1 + 0x648) = uVar4;
    *(undefined4 *)(lVar10 + (ulong)uVar4 * 4) = 3;
    *(byte *)(*(long *)(param_1 + 0x610) + 0x58) = *(byte *)(*(long *)(param_1 + 0x610) + 0x58) | 1;
    puVar8 = (undefined8 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    lVar6 = *(long *)(param_1 + 0x610);
    uVar9 = *puVar8;
    *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
    uVar4 = *(int *)(param_1 + 0x648) + 1;
    *(uint *)(param_1 + 0x648) = uVar4;
    *(undefined4 *)(lVar10 + (ulong)uVar4 * 4) = 4;
    *(byte *)(*(long *)(param_1 + 0x618) + 0x58) = *(byte *)(*(long *)(param_1 + 0x618) + 0x58) | 1;
    puVar8 = (undefined8 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    lVar6 = *(long *)(param_1 + 0x618);
    uVar9 = *puVar8;
    *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
    uVar4 = *(int *)(param_1 + 0x648) + 1;
    *(uint *)(param_1 + 0x648) = uVar4;
    *(undefined4 *)(lVar10 + (ulong)uVar4 * 4) = 5;
    *(byte *)(*(long *)(param_1 + 0x620) + 0x58) = *(byte *)(*(long *)(param_1 + 0x620) + 0x58) | 1;
    puVar8 = (undefined8 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    lVar6 = *(long *)(param_1 + 0x620);
    uVar9 = *puVar8;
    *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
    uVar4 = *(int *)(param_1 + 0x648) + 1;
    *(uint *)(param_1 + 0x648) = uVar4;
    *(undefined4 *)(lVar10 + (ulong)uVar4 * 4) = 6;
    *(byte *)(*(long *)(param_1 + 0x628) + 0x58) = *(byte *)(*(long *)(param_1 + 0x628) + 0x58) | 1;
    puVar8 = (undefined8 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    lVar6 = *(long *)(param_1 + 0x628);
    uVar9 = *puVar8;
    *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
    uVar4 = *(int *)(param_1 + 0x648) + 1;
    *(uint *)(param_1 + 0x648) = uVar4;
    *(undefined4 *)(lVar10 + (ulong)uVar4 * 4) = 7;
    *(byte *)(*(long *)(param_1 + 0x630) + 0x58) = *(byte *)(*(long *)(param_1 + 0x630) + 0x58) | 1;
    puVar8 = (undefined8 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    lVar6 = *(long *)(param_1 + 0x630);
    uVar9 = *puVar8;
    *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
    uVar4 = *(int *)(param_1 + 0x648) + 1;
    *(uint *)(param_1 + 0x648) = uVar4;
    *(undefined4 *)(lVar10 + (ulong)uVar4 * 4) = 8;
    *(byte *)(*(long *)(param_1 + 0x638) + 0x58) = *(byte *)(*(long *)(param_1 + 0x638) + 0x58) | 1;
    lVar10 = *(long *)(param_1 + 0x638);
    puVar8 = (undefined8 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    goto LAB_008c5c94;
  case 1:
    *(undefined8 *)(param_1 + 0x648) = 0;
    *(byte *)(*(long *)(param_1 + 0x5f8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5f8) + 0x58) | 1;
    lVar10 = param_1 + 0x6a0;
    puVar8 = (undefined8 *)(lVar10 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    lVar6 = *(long *)(param_1 + 0x5f8);
    lVar5 = param_1 + 0x64c;
    uVar9 = *puVar8;
    *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
    uVar4 = *(int *)(param_1 + 0x648) + 1;
    *(uint *)(param_1 + 0x648) = uVar4;
    *(undefined4 *)(lVar5 + (ulong)uVar4 * 4) = 1;
    *(byte *)(*(long *)(param_1 + 0x600) + 0x58) = *(byte *)(*(long *)(param_1 + 0x600) + 0x58) | 1;
    puVar8 = (undefined8 *)(lVar10 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    lVar6 = *(long *)(param_1 + 0x600);
    uVar9 = *puVar8;
    *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
    uVar4 = *(int *)(param_1 + 0x648) + 1;
    *(uint *)(param_1 + 0x648) = uVar4;
    *(undefined4 *)(lVar5 + (ulong)uVar4 * 4) = 2;
    *(byte *)(*(long *)(param_1 + 0x608) + 0x58) = *(byte *)(*(long *)(param_1 + 0x608) + 0x58) | 1;
    puVar8 = (undefined8 *)(lVar10 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    lVar6 = *(long *)(param_1 + 0x608);
    uVar9 = *puVar8;
    *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
    uVar4 = *(int *)(param_1 + 0x648) + 1;
    *(uint *)(param_1 + 0x648) = uVar4;
    *(undefined4 *)(lVar5 + (ulong)uVar4 * 4) = 3;
    *(byte *)(*(long *)(param_1 + 0x610) + 0x58) = *(byte *)(*(long *)(param_1 + 0x610) + 0x58) | 1;
    puVar8 = (undefined8 *)(lVar10 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    lVar10 = *(long *)(param_1 + 0x610);
LAB_008c5c94:
    uVar9 = *puVar8;
    *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar10 + 0x30) = uVar9;
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
    uVar4 = *(uint *)(param_1 + 0x648);
LAB_008c5fd0:
    *(uint *)(param_1 + 0x648) = uVar4 + 1;
    break;
  case 2:
  case 3:
    *(undefined4 *)(param_1 + 0x648) = 0;
    *(byte *)(*(long *)(param_1 + 0x5f8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5f8) + 0x58) | 1;
    puVar8 = (undefined8 *)(param_1 + 0x6a0 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    lVar10 = *(long *)(param_1 + 0x5f8);
    uVar9 = *puVar8;
    *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar10 + 0x30) = uVar9;
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
    uVar4 = *(uint *)(param_1 + 0x648);
    *(undefined4 *)(param_1 + 0x64c + (ulong)uVar4 * 4) = 0;
    goto LAB_008c5e78;
  case 5:
    *(undefined4 *)(param_1 + 0x648) = 0;
    *(byte *)(*(long *)(param_1 + 0x630) + 0x58) = *(byte *)(*(long *)(param_1 + 0x630) + 0x58) | 1;
    puVar8 = (undefined8 *)(param_1 + 0x6a0 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    lVar10 = *(long *)(param_1 + 0x630);
    uVar9 = *puVar8;
    *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar10 + 0x30) = uVar9;
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
    uVar4 = *(uint *)(param_1 + 0x648);
    *(undefined4 *)(param_1 + 0x64c + (ulong)uVar4 * 4) = 7;
LAB_008c5e78:
    *(uint *)(param_1 + 0x648) = uVar4 + 1;
    *(byte *)(*(long *)(param_1 + 0x610) + 0x58) = *(byte *)(*(long *)(param_1 + 0x610) + 0x58) | 1;
    puVar8 = (undefined8 *)(param_1 + 0x6a0 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    lVar10 = *(long *)(param_1 + 0x610);
    uVar9 = *puVar8;
    *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar10 + 0x30) = uVar9;
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
    uVar4 = *(uint *)(param_1 + 0x648);
    *(undefined4 *)(param_1 + 0x64c + (ulong)uVar4 * 4) = 3;
    goto LAB_008c5fd0;
  case 6:
    *(undefined4 *)(param_1 + 0x648) = 0;
    lVar10 = *(long *)(*(long *)puVar1 + 0x1d8);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    uVar2 = FUN_00888c50(0x4f0,0xe);
    iVar3 = FUN_01520330(lVar10,uVar2);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    if (iVar3 != 0) {
      *(byte *)(*(long *)(param_1 + 0x630) + 0x58) =
           *(byte *)(*(long *)(param_1 + 0x630) + 0x58) | 1;
      lVar5 = param_1 + (ulong)*(uint *)(param_1 + 0x648) * 0xc;
      lVar10 = *(long *)(param_1 + 0x630);
      uVar9 = *(undefined8 *)(lVar5 + 0x6a0);
      *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(lVar5 + 0x6a8);
      *(undefined8 *)(lVar10 + 0x30) = uVar9;
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
      uVar4 = *(uint *)(param_1 + 0x648);
      *(undefined4 *)(param_1 + (ulong)uVar4 * 4 + 0x64c) = 7;
      *(uint *)(param_1 + 0x648) = uVar4 + 1;
    }
    goto LAB_008c5f80;
  case 7:
    *(undefined4 *)(param_1 + 0x648) = 0;
LAB_008c5f80:
    *(byte *)(*(long *)(param_1 + 0x610) + 0x58) = *(byte *)(*(long *)(param_1 + 0x610) + 0x58) | 1;
    lVar5 = param_1 + (ulong)*(uint *)(param_1 + 0x648) * 0xc;
    lVar10 = *(long *)(param_1 + 0x610);
    uVar9 = *(undefined8 *)(lVar5 + 0x6a0);
    *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(lVar5 + 0x6a8);
    *(undefined8 *)(lVar10 + 0x30) = uVar9;
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
    uVar4 = *(uint *)(param_1 + 0x648);
    *(undefined4 *)(param_1 + (ulong)uVar4 * 4 + 0x64c) = 3;
    goto LAB_008c5fd0;
  case 9:
    *(undefined8 *)(param_1 + 0x648) = 0x500000000;
    *(byte *)(*(long *)(param_1 + 0x620) + 0x58) = *(byte *)(*(long *)(param_1 + 0x620) + 0x58) | 1;
    lVar5 = param_1 + (ulong)*(uint *)(param_1 + 0x648) * 0xc;
    lVar10 = *(long *)(param_1 + 0x620);
    uVar9 = *(undefined8 *)(lVar5 + 0x6a0);
    *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(lVar5 + 0x6a8);
    *(undefined8 *)(lVar10 + 0x30) = uVar9;
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
    break;
  case 0xb:
    *(undefined4 *)(param_1 + 0x648) = 0;
    *(byte *)(*(long *)(param_1 + 0x610) + 0x58) = *(byte *)(*(long *)(param_1 + 0x610) + 0x58) | 1;
    lVar10 = param_1 + 0x6a0;
    lVar5 = *(long *)(param_1 + 0x610);
    puVar8 = (undefined8 *)(lVar10 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    uVar9 = *puVar8;
    uVar2 = *(undefined4 *)(puVar8 + 1);
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
    *(undefined4 *)(lVar5 + 0x38) = uVar2;
    *(undefined8 *)(lVar5 + 0x30) = uVar9;
    uVar4 = *(uint *)(param_1 + 0x648);
    lVar5 = param_1 + 0x64c;
    *(uint *)(param_1 + 0x648) = uVar4 + 1;
    *(undefined4 *)(lVar5 + (ulong)uVar4 * 4) = 3;
    *(byte *)(*(long *)(param_1 + 0x618) + 0x58) = *(byte *)(*(long *)(param_1 + 0x618) + 0x58) | 1;
    lVar6 = *(long *)(param_1 + 0x618);
    puVar8 = (undefined8 *)(lVar10 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    uVar9 = *puVar8;
    uVar2 = *(undefined4 *)(puVar8 + 1);
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
    *(undefined4 *)(lVar6 + 0x38) = uVar2;
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    uVar4 = *(uint *)(param_1 + 0x648);
    *(uint *)(param_1 + 0x648) = uVar4 + 1;
    *(undefined4 *)(lVar5 + (ulong)uVar4 * 4) = 4;
    *(byte *)(*(long *)(param_1 + 0x628) + 0x58) = *(byte *)(*(long *)(param_1 + 0x628) + 0x58) | 1;
    lVar6 = *(long *)(param_1 + 0x628);
    puVar8 = (undefined8 *)(lVar10 + (ulong)*(uint *)(param_1 + 0x648) * 0xc);
    uVar9 = *puVar8;
    uVar2 = *(undefined4 *)(puVar8 + 1);
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
    *(undefined4 *)(lVar6 + 0x38) = uVar2;
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    uVar4 = *(uint *)(param_1 + 0x648);
    *(uint *)(param_1 + 0x648) = uVar4 + 1;
    *(undefined4 *)(lVar5 + (ulong)uVar4 * 4) = 6;
  }
  lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (*(uint *)(param_1 + 0x648) != 0) {
    lVar5 = lVar10;
    if (**(int **)(param_1 + 0x5f0) - 1U < 2) {
      lVar5 = lVar10 + 1;
    }
    if (*(uint *)(param_1 + 0x64c) == (uint)*(byte *)(lVar5 + 0x560)) {
      uVar7 = 0;
    }
    else {
      uVar4 = 1;
      do {
        uVar7 = uVar4 & 0xff;
        if (*(uint *)(param_1 + 0x648) <= uVar7) goto LAB_008c6054;
        uVar4 = uVar7 + 1;
      } while (*(uint *)(param_1 + (ulong)uVar7 * 4 + 0x64c) != (uint)*(byte *)(lVar5 + 0x560));
    }
    *(uint *)(param_1 + 0x640) = uVar7;
  }
LAB_008c6054:
  if (lVar10 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008c6070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  return;
}


