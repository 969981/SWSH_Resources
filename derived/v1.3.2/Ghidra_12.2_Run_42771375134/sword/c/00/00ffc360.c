/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffc360; name: FUN_00ffc360
 */


/* WARNING: Type propagation algorithm not settling */

byte FUN_00ffc360(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar10;
  
  if (*(long *)(param_1 + 0x430) == 0) {
    uVar2 = true;
    lVar7 = *(long *)(param_1 + 0x440);
  }
  else {
    iVar6 = FUN_016a6a00();
    uVar2 = iVar6 == 1;
    lVar7 = *(long *)(param_1 + 0x440);
  }
  if (lVar7 == 0) {
    bVar3 = true;
    lVar7 = *(long *)(param_1 + 0xa8);
  }
  else {
    iVar6 = FUN_0167a5c0();
    bVar3 = iVar6 == 1;
    lVar7 = *(long *)(param_1 + 0xa8);
  }
  if (lVar7 == 0) {
    bVar9 = 0;
    cVar1 = *(char *)(param_1 + 0x491);
  }
  else {
    bVar9 = *(byte *)(lVar7 + 0x170);
    cVar1 = *(char *)(param_1 + 0x491);
  }
  if (cVar1 == '\0') {
    bVar10 = 1;
    lVar7 = *(long *)(param_1 + 0x438);
  }
  else if (*(long *)(param_1 + 0x2b8) == 0) {
    bVar10 = 0;
    lVar7 = *(long *)(param_1 + 0x438);
  }
  else {
    bVar10 = *(byte *)(*(long *)(param_1 + 0x2b8) + 0x170);
    lVar7 = *(long *)(param_1 + 0x438);
  }
  if (lVar7 == 0) {
    bVar4 = 1;
    lVar7 = *(long *)(param_1 + 0x428);
  }
  else {
    bVar4 = FUN_016a7810();
    bVar4 = bVar4 & 1;
    lVar7 = *(long *)(param_1 + 0x428);
  }
  if (lVar7 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = FUN_0168e1d0();
    bVar5 = bVar5 & 1;
  }
  if (((*(long *)(param_1 + 0x438) != 0) && (uVar8 = FUN_016a7810(), (uVar8 & 1) != 0)) &&
     (*(char *)(param_1 + 0x449) == '\0')) {
    FUN_016a7890(*(undefined8 *)(param_1 + 0x438));
    *(undefined1 *)(param_1 + 0x449) = 1;
  }
  if (((*(long *)(param_1 + 0x430) != 0) && ((bool)uVar2 == true)) &&
     (*(char *)(param_1 + 0x448) == '\0')) {
    FUN_016a6a80();
    *(undefined1 *)(param_1 + 0x448) = 1;
  }
  if (((*(long *)(param_1 + 0x440) != 0) && (bVar3 == true)) && (*(char *)(param_1 + 0x44a) == '\0')
     ) {
    FUN_0167a5e0();
    *(undefined1 *)(param_1 + 0x44a) = 1;
  }
  return bVar9 & bVar3 & uVar2 & bVar10 & bVar4 & bVar5;
}


