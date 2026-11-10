/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01059fc0; name: FUN_01059fc0
 */


void FUN_01059fc0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  
  iVar1 = *(int *)PTR_DAT_02715500;
  if (*(int *)(param_1 + 0x100) == 0) {
    lVar6 = *(long *)(param_1 + 0x58) + (long)iVar1 * 0x170;
    FUN_0199cb60(lVar6);
    if (*(int *)(lVar6 + 0x168) != 0) {
      FUN_0199de60(lVar6);
      *(undefined4 *)(lVar6 + 0x168) = 0;
    }
    FUN_0199cbc0(lVar6);
  }
  else {
    pcVar5 = *(code **)(param_1 + 0x88);
    *(int *)(param_1 + 0x104) = iVar1;
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      (*pcVar5)(param_1 + 0xa0);
      iVar1 = *(int *)(param_1 + 0x104);
    }
    puVar4 = PTR_LAB_02723a80;
    puVar3 = PTR_LAB_02723a78;
    puVar2 = PTR_LAB_02723a70;
    *(undefined **)(param_1 + 0x80) = PTR_FUN_02723a68;
    *(undefined **)(param_1 + 0x88) = puVar2;
    lVar6 = *(long *)(param_1 + 0x58) + (long)iVar1 * 0x170;
    *(undefined **)(param_1 + 0x90) = puVar3;
    *(undefined **)(param_1 + 0x98) = puVar4;
    FUN_0199cb60(lVar6);
    (**(code **)(param_1 + 0x80))(param_1 + 0xa0);
    if (*(int *)(lVar6 + 0x168) != 0) {
      FUN_0199de60(lVar6);
      *(undefined4 *)(lVar6 + 0x168) = 0;
    }
    FUN_0199cbc0(lVar6);
    FUN_006f6c30(*(undefined8 *)PTR_DAT_02710460,param_1);
  }
  *(undefined1 *)(param_1 + 0x109) = 1;
  return;
}


