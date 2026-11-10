/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00905ee0; name: FUN_00905ee0
 */


void FUN_00905ee0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 local_58 [4];
  undefined1 auStack_54 [4];
  
  uVar2 = FUN_009141c0(*(undefined8 *)(param_1 + 0x340));
  uVar3 = FUN_008f9fc0(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6));
  if (*(char *)(param_1 + 0x2b9) == '\0') {
    *(undefined1 *)(param_1 + 0x2d8) = 0;
  }
  else {
    uVar9 = 0;
    uVar8 = 0;
LAB_00905f30:
    do {
      FUN_008f8e50(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + uVar9 + 699),auStack_54
                   ,local_58);
      uVar7 = uVar3 & 0xff;
      if ((uVar3 & 0xff) < (uVar2 & 0xff)) {
        do {
          FUN_00914330(*(undefined8 *)(param_1 + 0x340),uVar7);
          uVar4 = FUN_008e1600();
          uVar1 = uVar7 + 1;
          if ((uVar4 & 1) == 0) {
            FUN_00918630(param_1 + (uVar8 & 0xff) * 8 + 0x410,local_58[0],uVar7);
            uVar8 = (ulong)((int)uVar8 + 1);
            uVar9 = uVar9 + 1;
            uVar3 = uVar1;
            if (uVar9 < *(byte *)(param_1 + 0x2b9)) goto LAB_00905f30;
            goto LAB_00905fbc;
          }
          uVar7 = uVar1;
        } while (uVar1 < (uVar2 & 0xff));
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(byte *)(param_1 + 0x2b9));
LAB_00905fbc:
    *(char *)(param_1 + 0x2d8) = (char)uVar8;
    if ((uVar8 & 0xff) != 0) {
      if (((uint)uVar8 & 0xff) == 1) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        puVar6 = (undefined8 *)(param_1 + 0x2e0);
        do {
          lVar5 = lVar5 + 2;
          *puVar6 = puVar6[0x26];
          puVar6[1] = puVar6[0x27];
          puVar6 = puVar6 + 2;
        } while ((uVar8 & 0xff) - (uVar8 & 1) != lVar5);
      }
      if ((uVar8 & 1) != 0) {
        lVar5 = param_1 + lVar5 * 8;
        *(undefined8 *)(lVar5 + 0x2e0) = *(undefined8 *)(lVar5 + 0x410);
      }
    }
  }
  *(long *)(param_1 + 0x2c8) = param_1 + 0x2d8;
  *(undefined4 *)(param_1 + 0x2d0) = 0x58;
  return;
}


