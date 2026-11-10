/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0107aa40; name: FUN_0107aa40
 */


long FUN_0107aa40(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  char cVar12;
  char cVar13;
  
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar10)(puVar10);
  lVar7 = FUN_01072710();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  uVar1 = *(undefined1 *)(puVar10[0x35] + 0x58);
  cVar3 = FUN_0106f4c0(*(undefined4 *)puVar10[2],uVar1);
  if (cVar3 != '\0') {
    cVar3 = '\0';
    uVar11 = 0;
    cVar12 = '\0';
    do {
      iVar4 = FUN_0106f650(uVar11,*(undefined4 *)puVar10[2],uVar1);
      uVar8 = FUN_0106f400(puVar10[2],iVar4);
      cVar13 = cVar12;
      if ((uVar8 & 1) != 0) {
        cVar13 = cVar12 + '\x01';
        if (iVar4 == 1) {
          lVar7 = FUN_01073d30(*(undefined8 *)(param_1 + 0x78),1);
          lVar9 = FUN_01073cf0(*(undefined8 *)(param_1 + 0x78),1);
          if ((lVar7 == -0x2ff60d54f2674d29) || (lVar9 == -0x2ff60d54f2674d29)) {
            bVar2 = (lVar7 != -0x2ff60d54f2674d29) != (lVar9 != -0x2ff60d54f2674d29);
            if (!bVar2) {
              cVar13 = cVar12;
            }
            cVar3 = cVar3 + bVar2;
            goto LAB_0107ab7c;
          }
        }
        lVar7 = FUN_01073cf0(*(undefined8 *)(param_1 + 0x78),iVar4);
        lVar9 = FUN_01073d30(*(undefined8 *)(param_1 + 0x78),iVar4);
        if (lVar7 != lVar9) {
          cVar3 = cVar3 + '\x01';
        }
      }
LAB_0107ab7c:
      uVar11 = uVar11 + 1;
      uVar5 = FUN_0106f4c0(*(undefined4 *)puVar10[2],uVar1);
      cVar12 = cVar13;
    } while ((uVar11 & 0xff) < (uVar5 & 0xff));
    if (cVar3 != '\0') {
      return (ulong)(cVar3 == cVar13) << 1;
    }
  }
  return 1;
}


