/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00669ff0; name: FUN_00669ff0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00669ff0(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN_00683020(param_2,0x10,0);
  (**(code **)(*param_2 + 0x1b0))(param_2,*(undefined4 *)(param_4 + 8),1);
  uVar3 = *(uint *)(param_4 + 8);
  if ((uVar3 & 1) != 0) {
    FUN_00683020(param_2,0x10,0);
    puVar2 = PTR_DAT_02713e78;
    puVar1 = PTR_DAT_02713e78;
    if (*(undefined **)(param_4 + 0x18) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_4 + 0x18);
    }
    (**(code **)(*param_2 + 0x1e0))(param_2,puVar1,1);
    FUN_00683020(param_2,0x10,0);
    if (*(undefined **)(param_4 + 0x48) != (undefined *)0x0) {
      puVar2 = *(undefined **)(param_4 + 0x48);
    }
    (**(code **)(*param_2 + 0x1d0))(param_2,puVar2,1);
    uVar3 = *(uint *)(param_4 + 8);
  }
  if ((uVar3 >> 1 & 1) != 0) {
    FUN_00683020(param_2,0x10,0);
    puVar2 = PTR_DAT_02713e78;
    puVar1 = PTR_DAT_02713e78;
    if (*(undefined **)(param_4 + 0x78) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_4 + 0x78);
    }
    (**(code **)(*param_2 + 0x1e0))(param_2,puVar1,1);
    FUN_00683020(param_2,0x10,0);
    if (*(undefined **)(param_4 + 0xa8) != (undefined *)0x0) {
      puVar2 = *(undefined **)(param_4 + 0xa8);
    }
    (**(code **)(*param_2 + 0x1d0))(param_2,puVar2,1);
    uVar3 = *(uint *)(param_4 + 8);
  }
  if ((uVar3 >> 2 & 1) != 0) {
    FUN_00683020(param_2,0x10,0);
    puVar2 = PTR_DAT_02713e78;
    puVar1 = PTR_DAT_02713e78;
    if (*(undefined **)(param_4 + 0xd8) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_4 + 0xd8);
    }
    (**(code **)(*param_2 + 0x1e0))(param_2,puVar1,1);
    FUN_00683020(param_2,0x10,0);
    if (*(undefined **)(param_4 + 0x108) != (undefined *)0x0) {
      puVar2 = *(undefined **)(param_4 + 0x108);
    }
    (**(code **)(*param_2 + 0x1d0))(param_2,puVar2,1);
    uVar3 = *(uint *)(param_4 + 8);
  }
  if ((uVar3 >> 4 & 1) != 0) {
    FUN_00683020(param_2,0x10,0);
    puVar2 = PTR_DAT_02713e78;
    puVar1 = PTR_DAT_02713e78;
    if (*(undefined **)(param_4 + 0x138) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_4 + 0x138);
    }
    (**(code **)(*param_2 + 0x1e0))(param_2,puVar1,1);
    FUN_00683020(param_2,0x10,0);
    if (*(undefined **)(param_4 + 0x168) != (undefined *)0x0) {
      puVar2 = *(undefined **)(param_4 + 0x168);
    }
    (**(code **)(*param_2 + 0x1d0))(param_2,puVar2,1);
    uVar3 = *(uint *)(param_4 + 8);
  }
  if ((uVar3 >> 3 & 1) != 0) {
    FUN_00683020(param_2,0x10,0);
    puVar2 = PTR_DAT_02713e78;
    puVar1 = PTR_DAT_02713e78;
    if (*(undefined **)(param_4 + 0x198) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_4 + 0x198);
    }
    (**(code **)(*param_2 + 0x1e0))(param_2,puVar1,1);
    FUN_00683020(param_2,0x10,0);
    if (*(undefined **)(param_4 + 0x1c8) != (undefined *)0x0) {
      puVar2 = *(undefined **)(param_4 + 0x1c8);
    }
    (**(code **)(*param_2 + 0x1d0))(param_2,puVar2,1);
    uVar3 = *(uint *)(param_4 + 8);
  }
  if ((uVar3 >> 5 & 1) != 0) {
    FUN_00683020(param_2,0x10,0);
    puVar2 = PTR_DAT_02713e78;
    puVar1 = PTR_DAT_02713e78;
    if (*(undefined **)(param_4 + 0x1f8) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_4 + 0x1f8);
    }
    (**(code **)(*param_2 + 0x1e0))(param_2,puVar1,1);
    FUN_00683020(param_2,0x10,0);
    if (*(undefined **)(param_4 + 0x228) != (undefined *)0x0) {
      puVar2 = *(undefined **)(param_4 + 0x228);
    }
    (**(code **)(*param_2 + 0x1d0))(param_2,puVar2,1);
  }
  FUN_00683020(param_2,0x10,0);
  uVar4 = (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(param_4 + 0x250),1);
  if (*(int *)(param_4 + 0x250) != 0) {
    FUN_0066a400(uVar4,param_2,param_4 + 0x254);
  }
  FUN_00683020(param_2,0x10,0);
  (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(param_4 + 0xa80),1);
  FUN_00683020(param_2,0x10,0);
  if (0 < *(int *)(param_4 + 0xa80)) {
    lVar5 = 0;
    do {
      FUN_0066a5a0(param_1,param_2);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_4 + 0xa80));
  }
  FUN_00683020(param_2,0x10,0);
  if (0 < *(int *)(param_4 + 0xad0)) {
    lVar5 = 0;
    do {
      (**(code **)(*param_2 + 400))
                (param_2,*(undefined4 *)(*(long *)(*(long *)(param_4 + 0xae8) + lVar5 * 8) + 0x114),
                 1);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_4 + 0xad0));
  }
  return 1;
}


