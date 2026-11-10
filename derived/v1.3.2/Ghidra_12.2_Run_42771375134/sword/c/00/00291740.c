/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00291740; name: FUN_00291740
 */


void FUN_00291740(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (2 < param_3) {
    FUN_00291240(param_1);
    *(undefined1 *)(param_1 + 0x20) = 2;
    return;
  }
  if (param_3 != 0) {
    lVar4 = 0;
    uVar5 = (ulong)param_3;
    do {
      puVar1 = (undefined8 *)(param_2 + lVar4);
      uVar6 = *puVar1;
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar4);
      puVar3[1] = puVar1[1];
      *puVar3 = uVar6;
      uVar6 = puVar1[2];
      lVar2 = *(long *)(param_1 + 0x30) + lVar4;
      *(undefined8 *)(lVar2 + 0x18) = puVar1[3];
      *(undefined8 *)(lVar2 + 0x10) = uVar6;
      uVar6 = puVar1[4];
      lVar2 = *(long *)(param_1 + 0x30) + lVar4;
      lVar4 = lVar4 + 0x30;
      uVar5 = uVar5 - 1;
      *(undefined8 *)(lVar2 + 0x28) = puVar1[5];
      *(undefined8 *)(lVar2 + 0x20) = uVar6;
    } while (uVar5 != 0);
  }
  *(char *)(param_1 + 0x20) = (char)param_3;
  return;
}


