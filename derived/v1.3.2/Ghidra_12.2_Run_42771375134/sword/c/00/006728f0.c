/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006728f0; name: FUN_006728f0
 */


undefined8 FUN_006728f0(long param_1,long *param_2,int param_3,undefined8 param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_00683020(param_2,(long)param_3,0);
  lVar4 = *(long *)(*(long *)(param_1 + 0xd0) + (long)param_5 * 8);
  (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(lVar4 + 0x44),1);
  (**(code **)(*param_2 + 0x1b0))(param_2,*(undefined4 *)(lVar4 + 0x18),1);
  (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(lVar4 + 0x1c),1);
  (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(lVar4 + 0x34),1);
  (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(lVar4 + 0x40),1);
  (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(lVar4 + 0x100),1);
  if (0 < *(int *)(lVar4 + 0x1c)) {
    lVar5 = 0;
    do {
      (**(code **)(*param_2 + 0x1a0))(param_2,*(undefined1 *)(*(long *)(lVar4 + 0x20) + lVar5),1);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar4 + 0x1c));
  }
  if (0 < *(int *)(lVar4 + 0x34)) {
    lVar5 = 0;
    do {
      (**(code **)(*param_2 + 0x1a0))(param_2,*(undefined1 *)(*(long *)(lVar4 + 0x38) + lVar5),1);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar4 + 0x34));
  }
  puVar2 = PTR_DAT_02713e78;
  if (0 < *(int *)(lVar4 + 0x100)) {
    lVar5 = 0;
    lVar6 = 8;
    do {
      FUN_00683020(param_2,(long)param_3,0);
      puVar3 = *(undefined **)(*(long *)(lVar4 + 0x118) + lVar6);
      puVar1 = puVar2;
      if (puVar3 != (undefined *)0x0) {
        puVar1 = puVar3;
      }
      (**(code **)(*param_2 + 0x1d0))(param_2,puVar1,1);
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x30;
    } while (lVar5 < *(int *)(lVar4 + 0x100));
  }
  return 1;
}


