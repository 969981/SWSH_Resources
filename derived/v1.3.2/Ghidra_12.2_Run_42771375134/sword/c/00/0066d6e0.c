/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066d6e0; name: FUN_0066d6e0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0066d6e0(long param_1,long *param_2,long param_3,uint param_4,long param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x88) + (long)*(int *)(param_5 + 8) * 8);
  lVar1 = param_1 + 0x80;
  lVar2 = param_1 + 0x90;
  if ((param_4 & 1) != 0) {
    puVar3 = PTR_DAT_02713e78;
    if (*(undefined **)(lVar5 + 0x18) != (undefined *)0x0) {
      puVar3 = *(undefined **)(lVar5 + 0x18);
    }
    puVar4 = PTR_DAT_02713e78;
    if (*(undefined **)(lVar5 + 0x48) != (undefined *)0x0) {
      puVar4 = *(undefined **)(lVar5 + 0x48);
    }
    (**(code **)(*param_2 + 0x58))
              (param_2,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),lVar1,
               *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),lVar2,1,puVar3,puVar4
               ,param_5,param_6,0);
  }
  if ((param_4 >> 1 & 1) != 0) {
    puVar3 = PTR_DAT_02713e78;
    if (*(undefined **)(lVar5 + 0x78) != (undefined *)0x0) {
      puVar3 = *(undefined **)(lVar5 + 0x78);
    }
    puVar4 = PTR_DAT_02713e78;
    if (*(undefined **)(lVar5 + 0xa8) != (undefined *)0x0) {
      puVar4 = *(undefined **)(lVar5 + 0xa8);
    }
    (**(code **)(*param_2 + 0x58))
              (param_2,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),lVar1,
               *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),lVar2,2,puVar3,puVar4
               ,param_5,param_6,0);
  }
  if ((param_4 >> 2 & 1) != 0) {
    puVar3 = PTR_DAT_02713e78;
    if (*(undefined **)(lVar5 + 0xd8) != (undefined *)0x0) {
      puVar3 = *(undefined **)(lVar5 + 0xd8);
    }
    puVar4 = PTR_DAT_02713e78;
    if (*(undefined **)(lVar5 + 0x108) != (undefined *)0x0) {
      puVar4 = *(undefined **)(lVar5 + 0x108);
    }
    (**(code **)(*param_2 + 0x58))
              (param_2,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),lVar1,
               *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),lVar2,3,puVar3,puVar4
               ,param_5,param_6,0);
  }
  if ((param_4 >> 4 & 1) != 0) {
    puVar3 = PTR_DAT_02713e78;
    if (*(undefined **)(lVar5 + 0x138) != (undefined *)0x0) {
      puVar3 = *(undefined **)(lVar5 + 0x138);
    }
    puVar4 = PTR_DAT_02713e78;
    if (*(undefined **)(lVar5 + 0x168) != (undefined *)0x0) {
      puVar4 = *(undefined **)(lVar5 + 0x168);
    }
    (**(code **)(*param_2 + 0x58))
              (param_2,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),lVar1,
               *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),lVar2,5,puVar3,puVar4
               ,param_5,param_6,0);
  }
  if ((param_4 >> 3 & 1) != 0) {
    puVar3 = PTR_DAT_02713e78;
    if (*(undefined **)(lVar5 + 0x198) != (undefined *)0x0) {
      puVar3 = *(undefined **)(lVar5 + 0x198);
    }
    puVar4 = PTR_DAT_02713e78;
    if (*(undefined **)(lVar5 + 0x1c8) != (undefined *)0x0) {
      puVar4 = *(undefined **)(lVar5 + 0x1c8);
    }
    (**(code **)(*param_2 + 0x58))
              (param_2,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),lVar1,
               *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),lVar2,4,puVar3,puVar4
               ,param_5,param_6,0);
  }
  if ((param_4 >> 5 & 1) != 0) {
    puVar3 = PTR_DAT_02713e78;
    if (*(undefined **)(lVar5 + 0x1f8) != (undefined *)0x0) {
      puVar3 = *(undefined **)(lVar5 + 0x1f8);
    }
    puVar4 = PTR_DAT_02713e78;
    if (*(undefined **)(lVar5 + 0x228) != (undefined *)0x0) {
      puVar4 = *(undefined **)(lVar5 + 0x228);
    }
    (**(code **)(*param_2 + 0x58))
              (param_2,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),lVar1,
               *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),lVar2,6,puVar3,puVar4
               ,param_5,param_6,0);
  }
  return;
}


