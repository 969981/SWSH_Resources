/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00701cc0; name: FUN_00701cc0
 */


void FUN_00701cc0(long param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  FUN_006f2e20(*(undefined8 *)(param_1 + 0x60));
  lVar3 = *(long *)(param_1 + 0x60);
  iVar1 = *(int *)PTR_DAT_02715500;
  if (*(int *)(lVar3 + 0x100) == 0) {
    lVar4 = *(long *)(lVar3 + 0x58) + (long)iVar1 * 0x170;
    FUN_0199cb60(lVar4);
    FUN_00703f20(param_1);
    if (*(int *)(lVar4 + 0x168) != 0) {
      FUN_0199de60(lVar4);
      *(undefined4 *)(lVar4 + 0x168) = 0;
    }
    FUN_0199cbc0(lVar4);
  }
  else {
    pcVar2 = *(code **)(lVar3 + 0x88);
    *(int *)(lVar3 + 0x104) = iVar1;
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(lVar3 + 0x90) = 0;
      *(undefined8 *)(lVar3 + 0x98) = 0;
      *(undefined8 *)(lVar3 + 0x80) = 0;
      *(undefined8 *)(lVar3 + 0x88) = 0;
      (*pcVar2)(lVar3 + 0xa0);
      iVar1 = *(int *)(lVar3 + 0x104);
    }
    *(long *)(lVar3 + 0xa0) = param_1;
    *(code **)(lVar3 + 0x80) = FUN_007065e0;
    *(undefined1 **)(lVar3 + 0x88) = &LAB_007065f0;
    lVar4 = *(long *)(lVar3 + 0x58) + (long)iVar1 * 0x170;
    *(undefined1 **)(lVar3 + 0x90) = &LAB_00706600;
    *(undefined1 **)(lVar3 + 0x98) = &LAB_00706610;
    FUN_0199cb60(lVar4);
    (**(code **)(lVar3 + 0x80))((long *)(lVar3 + 0xa0));
    if (*(int *)(lVar4 + 0x168) != 0) {
      FUN_0199de60(lVar4);
      *(undefined4 *)(lVar4 + 0x168) = 0;
    }
    FUN_0199cbc0(lVar4);
    FUN_006f6c30(*(undefined8 *)PTR_DAT_02710460,lVar3);
  }
  *(undefined1 *)(lVar3 + 0x109) = 1;
  return;
}


