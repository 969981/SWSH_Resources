/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093b630; name: FUN_0093b630
 */


undefined1 FUN_0093b630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  bVar2 = *(byte *)(param_1 + 0x4c);
  uVar4 = FUN_008e0a00(param_3);
  *(undefined1 *)(param_4 + 8) = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  param_4[9] = 0;
  *(undefined8 *)((long)param_4 + 0x42) = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  *param_4 = 0;
  param_4[1] = 0;
  if ((ulong)bVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar9 = 0;
    do {
      if (uVar9 < *(byte *)(param_1 + 0x4c)) {
        lVar8 = *(long *)(param_1 + uVar9 * 8);
      }
      else {
        lVar8 = 0;
      }
      uVar5 = FUN_008e0a00(lVar8);
      uVar6 = FUN_008f9ff0(param_2,uVar4,uVar5);
      if ((lVar8 != 0) && ((uVar6 & 1) != 0)) {
        uVar6 = (ulong)*(byte *)((long)param_4 + 0x4c);
        if (uVar6 < 5) {
          if (*(byte *)((long)param_4 + 0x4c) != 0) {
            uVar7 = 0;
            do {
              if (param_4[uVar7] == lVar8) goto LAB_0093b734;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar6);
          }
          param_4[uVar6] = lVar8;
          *(undefined1 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x4c) + 0x3c) = 0;
          *(undefined2 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x4c) * 2 + 0x28) = 0;
          *(undefined2 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x4c) * 2 + 0x32) = 0;
          bVar1 = *(char *)((long)param_4 + 0x4c) + 1;
          *(byte *)((long)param_4 + 0x4c) = bVar1;
          if (*(byte *)((long)param_4 + 0x4d) < bVar1) {
            *(byte *)((long)param_4 + 0x4d) = bVar1;
          }
        }
      }
LAB_0093b734:
      uVar9 = uVar9 + 1;
    } while (uVar9 != bVar2);
    uVar3 = *(undefined1 *)((long)param_4 + 0x4c);
  }
  return uVar3;
}


