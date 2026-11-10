/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066a5a0; name: FUN_0066a5a0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0066a5a0(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = 0;
  if ((param_2 != (long *)0x0) && (param_5 != 0)) {
    FUN_00683020(param_2,0x10,0);
    puVar1 = PTR_DAT_02713e78;
    if (*(undefined **)(param_5 + 0x10) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_5 + 0x10);
    }
    (**(code **)(*param_2 + 0x1d0))(param_2,puVar1,1);
    FUN_00683020(param_2,0x10,0);
    FUN_00683020(param_2,0x10,0);
    (**(code **)(*param_2 + 0x1b0))(param_2,*(undefined4 *)(param_5 + 0x40),1);
    if (0 < *(int *)(param_5 + 0x44)) {
      lVar4 = 0;
      do {
        (**(code **)(*param_2 + 0x1a0))
                  (param_2,*(undefined1 *)(*(long *)(param_5 + 0x48) + lVar4),1);
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_5 + 0x44));
    }
    FUN_00683020(param_2,0x10,0);
    (**(code **)(*param_2 + 0x1b0))(param_2,*(undefined4 *)(param_5 + 0xa0),1);
    FUN_00683020(param_2,0x10,0);
    FUN_00683020(param_2,0x10,0);
    (**(code **)(*param_2 + 0x1b0))(param_2,*(undefined4 *)(param_5 + 0xb0),1);
    if (0 < *(int *)(param_5 + 0xb4)) {
      lVar4 = 0;
      do {
        (**(code **)(*param_2 + 0x1a0))
                  (param_2,*(undefined1 *)(*(long *)(param_5 + 0xb8) + lVar4),1);
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_5 + 0xb4));
    }
    FUN_00683020(param_2,0x10,0);
    (**(code **)(*param_2 + 0x1b0))(param_2,*(undefined4 *)(param_5 + 0x110),1);
    uVar2 = *(uint *)(param_4 + 8);
    if ((uVar2 & 1) != 0) {
      (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(param_5 + 0x118),1);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(param_5 + 0x11c),1);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(param_5 + 0x120),1);
    }
    if ((uVar2 >> 4 & 1) != 0) {
      (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(param_5 + 0x124),1);
    }
    if ((uVar2 >> 3 & 1) != 0) {
      (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(param_5 + 0x128),1);
    }
    if ((uVar2 >> 5 & 1) == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
      (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(param_5 + 300),1);
    }
  }
  return uVar3;
}


