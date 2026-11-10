/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131d350; name: FUN_0131d350
 */


void FUN_0131d350(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined8 local_68;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x54) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
    if (puVar4 == (undefined8 *)0x0) goto LAB_0131d3cc;
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    lVar3 = FUN_00c781c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar4 = puVar4 + -10;
        goto LAB_0131d3cc;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_0131d3cc:
  FUN_006b96a0(param_2);
  local_68 = FUN_006b91b0();
  plVar2 = (long *)FUN_006b92e0(&local_68);
  lVar3 = *plVar2;
  FUN_006b96a0(param_2);
  local_68 = FUN_006b91b0();
  plVar2 = (long *)FUN_006b92e0(&local_68);
  lVar6 = *plVar2;
  FUN_006b96a0(param_2);
  local_68 = FUN_006b91b0();
  plVar2 = (long *)FUN_006b92e0(&local_68);
  lVar5 = *plVar2;
  fVar7 = (float)FUN_0069c560(puVar4);
  if ((1.0 < fVar7) &&
     ((((iVar1 = *(int *)(param_1 + 8), iVar1 == 3 &&
        (lVar3 == 0x6f3c13bce33a451a || lVar3 == 0x148785bc46ac4581)) ||
       ((iVar1 == 1 && (lVar6 == -0x36d3a400db7ba287 || lVar6 == 0x60a352e5a3788049)))) ||
      ((iVar1 == 2 && (lVar5 == -0x5237f66b670614a9 || lVar5 == 0x23e3ad9a65982c8b)))))) {
    FUN_0069c550(0x3f800000,puVar4);
  }
  if ((*(char *)(param_1 + 0xd) != '\0') &&
     ((((iVar1 = *(int *)(param_1 + 8),
        (lVar3 == 0x6f3c13bce33a451a) != (lVar3 == 0x148785bc46ac4581) && (iVar1 == 3)) ||
       (((lVar6 == -0x36d3a400db7ba287) != (lVar6 == 0x60a352e5a3788049) && (iVar1 == 1)))) ||
      (((lVar5 == -0x5237f66b670614a9) != (lVar5 == 0x23e3ad9a65982c8b) && (iVar1 == 2)))))) {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if ((((lVar3 == 0x6f3c13bce33a451a || lVar3 == 0x148785bc46ac4581) ||
       (lVar6 == -0x36d3a400db7ba287 || lVar6 == 0x60a352e5a3788049)) ||
       (lVar5 == -0x5237f66b670614a9 || lVar5 == 0x23e3ad9a65982c8b)) &&
     (*(char *)(param_1 + 0xe) != '\0')) {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return;
}


