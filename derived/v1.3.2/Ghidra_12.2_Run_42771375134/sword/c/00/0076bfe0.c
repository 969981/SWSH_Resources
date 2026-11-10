/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076bfe0; name: FUN_0076bfe0
 */


void FUN_0076bfe0(long param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_02715500;
  iVar1 = *(int *)PTR_DAT_02715500;
  if (*(int *)(param_1 + 0x100) == 0) {
    lVar7 = *(long *)(param_1 + 0x58) + (long)iVar1 * 0x170;
    FUN_0199cb60(lVar7);
    FUN_0076bbc0(*(undefined8 *)(*param_2 + 0xb0),
                 *(long *)(*(long *)(*param_2 + 0x60) + 0x58) + (long)*(int *)puVar2 * 0x170);
    if (*(int *)(lVar7 + 0x168) != 0) {
      FUN_0199de60(lVar7);
      *(undefined4 *)(lVar7 + 0x168) = 0;
    }
    FUN_0199cbc0(lVar7);
  }
  else {
    pcVar6 = *(code **)(param_1 + 0x88);
    *(int *)(param_1 + 0x104) = iVar1;
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      (*pcVar6)(param_1 + 0xa0);
      iVar1 = *(int *)(param_1 + 0x104);
    }
    puVar3 = PTR_LAB_027160e8;
    puVar2 = PTR_FUN_027160e0;
    *(long *)(param_1 + 0xa0) = *param_2;
    puVar5 = PTR_LAB_027160f8;
    puVar4 = PTR_LAB_027160f0;
    *(undefined **)(param_1 + 0x80) = puVar2;
    *(undefined **)(param_1 + 0x88) = puVar3;
    *(undefined **)(param_1 + 0x90) = puVar4;
    *(undefined **)(param_1 + 0x98) = puVar5;
    lVar7 = *(long *)(param_1 + 0x58) + (long)iVar1 * 0x170;
    FUN_0199cb60(lVar7);
    (**(code **)(param_1 + 0x80))((long *)(param_1 + 0xa0));
    if (*(int *)(lVar7 + 0x168) != 0) {
      FUN_0199de60(lVar7);
      *(undefined4 *)(lVar7 + 0x168) = 0;
    }
    FUN_0199cbc0(lVar7);
    FUN_006f6c30(*(undefined8 *)PTR_DAT_02710460,param_1);
  }
  *(undefined1 *)(param_1 + 0x109) = 1;
  return;
}


