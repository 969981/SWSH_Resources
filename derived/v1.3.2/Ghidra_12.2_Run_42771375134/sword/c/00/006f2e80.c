/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f2e80; name: FUN_006f2e80
 */


void FUN_006f2e80(long param_1)

{
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_02715500;
  if (*(long *)(param_1 + 0x80) != 0) {
    iVar1 = *(int *)PTR_DAT_02715500;
    if (*(int *)(param_1 + 0x104) != iVar1) {
      *(undefined1 *)(param_1 + 0x109) = 0;
      FUN_006f3430(*(long *)(param_1 + 0x58) + (long)iVar1 * 0x170);
      lVar4 = *(long *)(param_1 + 0x58) + (long)*(int *)puVar2 * 0x170;
      FUN_0199cb60(lVar4);
      (**(code **)(param_1 + 0x80))(param_1 + 0xa0);
      if (*(int *)(lVar4 + 0x168) != 0) {
        FUN_0199de60(lVar4);
        *(undefined4 *)(lVar4 + 0x168) = 0;
      }
      FUN_0199cbc0(lVar4);
      pcVar3 = *(code **)(param_1 + 0x88);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(long *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        (*pcVar3)(param_1 + 0xa0);
      }
      *(undefined1 *)(param_1 + 0x109) = 1;
    }
  }
  return;
}


