/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d8b00; name: FUN_011d8b00
 */


void FUN_011d8b00(long param_1,undefined2 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (lVar1 != 0) {
    FUN_011d75e0(param_1 + 0x90);
  }
  *(undefined2 *)(param_1 + 0x84) = param_2;
  FUN_007a2760(*(undefined8 *)(param_1 + 0x2a0));
  lVar1 = *(long *)(param_1 + 0x358);
  if (lVar1 != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x350);
    do {
      puVar3 = (undefined8 *)*puVar4;
      lVar1 = lVar1 + -1;
      *puVar4 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        pcVar2 = (code *)puVar3[1];
        if (pcVar2 != (code *)0x0) {
          puVar3[2] = 0;
          puVar3[3] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          (*pcVar2)(puVar3 + 4);
        }
        (**(code **)(*(long *)puVar4[1] + 0x18))((long *)puVar4[1],puVar3,puVar4[2],puVar4[3]);
      }
      puVar4 = puVar4 + 4;
    } while (lVar1 != 0);
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
    FUN_009b6bf0(param_1 + 0xb0);
  }
  if (*(int *)(param_1 + 0x80) != 0x10) {
    *(undefined4 *)(param_1 + 0x80) = 2;
  }
  *(undefined1 *)(param_1 + 0x370) = 0;
  if (*(long *)PTR_DAT_02716750 == 0) {
    return;
  }
  FUN_007db470(*(long *)PTR_DAT_02716750,0);
  return;
}


