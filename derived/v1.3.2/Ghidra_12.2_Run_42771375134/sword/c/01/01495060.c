/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01495060; name: FUN_01495060
 */


void FUN_01495060(long param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  byte bVar8;
  uint uVar9;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar2 = (long *)(**(code **)*puVar6)(puVar6);
  lVar3 = FUN_01481a10();
  for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
  }
  if (*(int *)puVar6[2] == 7) {
    FUN_01488960(*(undefined8 *)(param_1 + 0x80));
    return;
  }
  if (*(int *)puVar6[2] == 1) {
    FUN_014887d0(*(undefined8 *)(param_1 + 0x80));
    return;
  }
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  plVar2 = (long *)(**(code **)*puVar6)(puVar6);
  lVar3 = FUN_01481a10();
  for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
  }
  uVar4 = FUN_01485a70(puVar6[2]);
  uVar9 = 0;
  do {
    uVar5 = FUN_0087ede0(uVar4,uVar9);
    if ((uVar5 & 1) != 0) {
      uVar4 = 1;
      goto LAB_01495158;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x62);
  uVar4 = 0;
LAB_01495158:
  FUN_014881d0(uVar7,uVar4);
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar2 = (long *)(**(code **)*puVar6)(puVar6);
  lVar3 = FUN_01481a10();
  for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
  }
  uVar7 = FUN_01485a70(puVar6[2]);
  uVar9 = 0;
  do {
    uVar5 = FUN_0087ede0(uVar7,uVar9);
    if ((uVar5 & 1) != 0) {
      bVar8 = 1;
      goto LAB_014951cc;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x62);
  bVar8 = 0;
LAB_014951cc:
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar2 = (long *)(**(code **)*puVar6)(puVar6);
  lVar3 = FUN_01481a10();
  for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
  }
  bVar1 = 0;
  if (*(char *)(puVar6[2] + 0x15) != '\0') {
    bVar1 = FUN_014876d0();
    bVar1 = bVar1 ^ 1;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x88) + 0x6710);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | bVar8 & bVar1;
  return;
}


